#include "NaiveSingleton.hpp"

NaiveSingleton* NaiveSingleton::singleton_ = nullptr; 

/**
* Static methods should be defined outside the class
*/
NaiveSingleton* NaiveSingleton::GetInstance(const std::string& value) {
    /**
    * This is a safer way to create an instance. instance = new NaiveSingleton
    * is dangerous in case two instance threads want to access it at same time
    */
    if(singleton_ == nullptr) {
        singleton_ = new NaiveSingleton(value);
    }
    return singleton_;
}
