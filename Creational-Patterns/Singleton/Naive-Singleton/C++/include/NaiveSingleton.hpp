#include <string>

/**
* The Naive Singleton Class
* 
* C++11 features:
* - Delete Member Function: https://www.geeksforgeeks.org/explicitly-defaulted-deleted-functions-c-11/
*/
class NaiveSingleton {
protected:
    /**
    * The Singleton's constructor should always be private to prevent direct
    * construction calls with the 'new' operator.
    */
    NaiveSingleton(const std::string value) : value_(value) {

    }

    static NaiveSingleton* singleton_;

    std::string value_;

public:
    /**
    * Disable copy constructor because Singleton's should not be cloneable
    */
    NaiveSingleton(NaiveSingleton& other) = delete;

    /**
    * Disable assignment operator because Singleton's should not be assignable
    */
    void operator=(const NaiveSingleton&) = delete;

    /**
    * This static method controls access to the singleton instance. On the first
    * run, it creates a singleton object and places it into the static field.
    * On subsequent runs, it returns the client existing object stored in the
    * static field.
    */
    static NaiveSingleton* GetInstance(const std::string& value);

    /**
    * Finally, any singleton should define some business logic, which can
    * be executed on its instance.
    */
    void SomeBusinessLogic() {
        // ...
    }

    std::string value() const {
        return value_;
    }
};
