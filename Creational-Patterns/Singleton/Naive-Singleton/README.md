# Example Code: Naive Singleton

## Concept :dart:

A Naive (Sloppy) Singleton class can be developed by hiding the constructor and implementing a static creation method. This class behaves incorrectly in a multi-threaded environment because multiple threads can call the creation method at the same time and get several instances of this Naive Singleton class.

## Example Description

In an example program you will run, there are two threads `ThreadFoo` and `ThreadBar` that indirectly call the creation method when they call the Naive Singleton's `GetInstance()` method and then these threads print the Naive Singleton's data member variable value. 

On one of the time's the example program is executed, we will see the two values printed to the screen are the same, which is `Foo`. In this case where the values are the same, that is because one of the threads called the `GetInstance()` method first indirectly calling the creation method before the other thread did, which caused one Naive Singleton object to be created having a data member variable with value `Foo`. The other thread that came in second will just reuse the Naive Singleton object because the first thread already had the Naive Singleton object created.

On another time the example program is executed, we see the two values printed to the screen are different, which is `Foo` and `Bar` and order doesn't matter. In this case where the values are different that is because the two threads called the `GetInstance()` method at the same time indirectly calling the creation method at the same time, which caused two Naive Singleton objects to be created with one object having a data member variable with value `Foo` and the other object having a data member variable with value `Bar`.
