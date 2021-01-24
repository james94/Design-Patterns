#include <ThreadSafeSingleton.hpp>

ThreadSafeSingleton* ThreadSafeSingleton::psingleton_{nullptr};
std::mutex ThreadSafeSingleton::mutex_;

/**
* Static methods should be defined outside the class
*/

/**
* The first time we call GetInstance(), we will lock the storage location
* and then we make sure again that the variable is null and then we see
* the value.
*/
ThreadSafeSingleton* ThreadSafeSingleton::GetInstance(const std::string& value) {
    std::lock_guard<std::mutex> lock(mutex_);
    if(psingleton_ == nullptr) {
        psingleton_ = new ThreadSafeSingleton(value);
    }
    return psingleton_;
}
