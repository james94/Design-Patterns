#include <string>
#include <mutex>

/**
* The Thread Safe Singleton Class
*
* The Singleton class defines the `GetInstance()` method that serves as an alternative to
* constructor and lets clients access the same instance of this class over and over
*
* C++11 features:
* - Delete Member Function: https://www.geeksforgeeks.org/explicitly-defaulted-deleted-functions-c-11/
*/
class ThreadSafeSingleton {
private:
    static ThreadSafeSingleton* psingleton_;
    static std::mutex mutex_;

protected:
    /**
    * The Singleton's constructor/destructor should always be private or protected to prevent 
    * direct construction/destruction calls with the 'new'/'delete' operator.
    */
    ThreadSafeSingleton(const std::string value) : value_(value) {

    }
    ~ThreadSafeSingleton() {}

    std::string value_;

public:
    /**
    * Disable copy constructor because Singleton's should not be cloneable
    */
    ThreadSafeSingleton(ThreadSafeSingleton& other) = delete;

    /**
    * Disable assignment operator because Singleton's should not be assignable
    */
    void operator=(const ThreadSafeSingleton&) = delete;

    /**
    * This static method controls access to the singleton instance. On the first
    * run, it creates a singleton object and places it into the static field.
    * On subsequent runs, it returns the client existing object stored in the
    * static field.
    */
    static ThreadSafeSingleton* GetInstance(const std::string& value);

    std::string value() const {
        return value_;
    }
};
