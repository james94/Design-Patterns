# Singleton

## Concept :dart:

**Singleton** is a _creational design pattern_, which ensures that a class has only one object and provides a global access point to this object for any other code.

Singleton has almost the same pros and cons as _global variables_. Although they're super-handy, they break the modularity of your code.

You can't just use a class that depends on Singleton in some other context. You'll have to carry the Singleton class as well. Most of the time, this limitation comes up during the creation of unit tests.

- Copied from Reference: [Singleton in C++](https://refactoring.guru/design-patterns/singleton/cpp/example#example-0)

## Usage of the pattern in C++

**Complexity**: :star:

**Popularity**: :star: :star:

**Usage example**: A lot of developers consider the Singleton pattern an antipattern. That's why its usage is on the decline in C++ code.

**Identification**: Singleton can be recognized by a static creation method, which returns the same cached object.

- Copied from Reference: scroll down to section on[Usage of pattern in C++](https://refactoring.guru/design-patterns/singleton/cpp/example#example-0)

## Examples

- [Naive Singleton](Singleton/Naive-Singleton)

- [Thread-Safe Singleton](Singleton/Thread-Safe-Singleton)

## Use Case

- [Database Connection](Singleton/Use-Case/Database-Connection/)

**NOTE:** Implemenation example for Database Connection class that acts as a Thread-Safe Singleton coming soon.

## Further Reading

- [Singleton](https://refactoring.guru/design-patterns/singleton)
