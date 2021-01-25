#include <PrototypeFactory.hpp>

void Client(PrototypeFactory& prototypeFactory) {
    std::cout << "Let's create a Prototype 1 Clone\n";

    Prototype* prototype = prototypeFactory.CreatePrototype(Type::PROTOTYPE_1);
    prototype->Method(90);
    delete prototype;

    std::cout << "\n";
    std::cout << "Let's create a prototype 2 Clone\n";

    prototype = prototypeFactory.CreatePrototype(Type::PROTOTYPE_2);
    prototype->Method(10);
    delete prototype;
}

int main() {
    PrototypeFactory* prototypeFactory = new PrototypeFactory();
    Client(*prototypeFactory);
    delete prototypeFactory;

    return 0;
}