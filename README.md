# Design-Patterns

Design Patterns description and implementation

## Creational Patterns

### Abstract Factory :star: :star: :star:

Lets you produce families of related objects without specifying their concrete classes

### Builder :star: :star: :star:

Lets you construct complex objects step by step. The pattern allows you to produce different types and representations of an object using the same construction code.

### Factory Method :star: :star: :star:

Provides an interface for creating objects in a superlcass, but allows subclasses to alter the type of objects that will be created

### Prototype :star: :star:

Lets you copy existing objects without making your code dependent on their classes

### Singleton :star: :star:

Lets you ensure that a class has only one instance, while providing a global access point to this instance.

- [Singleton](Creational-Patterns/Singleton)

## Building C++ Design Pattern Examples :hammer_and_wrench:

To build all the examples, first run CMake to generate the corresponding build files. We recommend you create a separate directory to store all the generated files:

~~~bash
cd Design-Patterns/
mkdir build && cd build && cmake ../
~~~

After you have ran CMake, there will be new files in `build/` directory (the list of generated files based on the specific CMake Generator). To build all the examples, run `make` as follows:

~~~
make
~~~

Alternative,

~~~
cmake --build .
~~~

## Running C++ Design Pattern Examples :play_or_pause_button:

In your `build/` folder, you should see a new folder has been created called `Creational-Patterns` and this folder has the Design Patterns built thus far. 

Let's run the Prototype Design Pattern Demo:

~~~bash
cd build/Creational-Patterns/Prototype/Prototype/C++/
./PrototypeDemo
~~~

When we run the program, we will see there are two Prototypes that were created and from each prototype there is a call to their Method with a value that gets printed to the screen. Here is an example of the output:

~~~bash
Let's create a Prototype 1 Clone
Call Method from PROTOTYPE_1  with field : 90

Let's create a prototype 2 Clone
Call Method from PROTOTYPE_2  with field : 10
~~~

This is just one of the Design Pattern example programs. We have other example programs we could also run.

Design Pattern Example programs supported include the following:

- [x] Naive Singleton
- [x] Thread-Safe Singleton
- [ ] Singleton Use Case: Database Connection
- [x] Prototype

More Design Pattern example will be coming soon.

## Further Reading

- [Design Patterns](https://refactoring.guru/design-patterns)
- [Design Patterns in Different Programming Languages](https://refactoring.guru/design-patterns/examples)
