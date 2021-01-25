#include <iostream>
#include <string>

/**
* Prototype Design Pattern
*
* Intent: Let's you copy existing objects without making your code dependent on their classes
*/

enum Type {
    PROTOTYPE_1 = 0,
    PROTOTYPE_2
};

/**
* The Prototype class that has cloning ability. We'll see how the values of field
* with different typyes will be cloned.
*/

class Prototype {
protected:
    std::string prototypeName_;
    float prototypeField_;

public:
    Prototype() {}
    Prototype(std::string prototypeName) : prototypeName_(prototypeName) {

    }

    virtual ~Prototype() {}

    virtual Prototype* Clone() const = 0;
    virtual void Method(float prototypeField) {
        this->prototypeField_ = prototypeField;
        std::cout << "Call Method from " << prototypeName_ << " with field : " << prototypeField << std::endl;
    }
};
