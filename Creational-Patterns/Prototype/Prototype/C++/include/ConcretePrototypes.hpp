#include <Prototype.hpp>

/**
* Concrete Prototype1 is a Sub-Class of Prototype and implements the Clone Method
* In this example, all data members of Prototype Class are in the Stack. If you
* have pointers in your properties for ex: String* name_, you will need to
* implement the Copy-Constructor to make sure you have a deep copy from the
* clone method.
*/

class ConcretePrototype1 : public Prototype {
private:
    float concretePrototypeField1_;

public:
    ConcretePrototype1(std::string prototypeName, float concretePrototypeField)
        : Prototype(prototypeName), concretePrototypeField1_(concretePrototypeField) {

    }

    /**
    * Notice that Clone method returns a Pointer to a new ConcretePrototype1 replica.
    * So, the client (who call the clone method) has the responsibility to free that
    * memory. If you have smart pointer knowledge, you  may prefer to use unique_pointer
    * here.
    */
    Prototype* Clone() const override {
        return new ConcretePrototype1(*this);
    }
};

class ConcretePrototype2 : public Prototype {
private:
    float concretePrototypeField2_;

public:
    ConcretePrototype2(std::string prototypeName, float concretePrototypeField)
        : Prototype(prototypeName), concretePrototypeField2_(concretePrototypeField) {

    }

    Prototype* Clone() const override {
        return new ConcretePrototype2(*this);
    }
};
