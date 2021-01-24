# Example Code: Naive Singleton

## Building C++ Example :hammer_and_wrench:

To build this example, first run CMake to generate the corresponding build files. We recommend you create a separate directory to store all the generated files:

~~~bash
mkdir build && cd build && cmake ../
~~~

After you have ran CMake, there will be new files in `build/` directory (the list of generated files based on the specific CMake Generator). To build the example, run `make` as follows:

~~~
make
~~~

Alternative,

~~~
cmake --build .
~~~

## Running C++ Example :play_or_pause_button:

Run the following command to run the Naive Singleton Demo:

~~~bash
./NaiveSingletonDemo
~~~

There are two possible results after the program runs. 

For instance, when we run the program for the first time, the first result is that the Naive Singleton was reused, so we will see the same value:

~~~bash
If you see the same value, then Naive Singleton was reused (yay!
If you see different values, then 2 Naive Singleton's were created (booo!!)

RESULT:
FOO
FOO
~~~

When we run the program for the second time, the second result is that the Naive Singleton was created 2 times, so we see different values:

~~~bash
If you see the same value, then Naive Singleton was reused (yay!
If you see different values, then 2 Naive Singleton's were created (booo!!)

RESULT:
BAR
FOO
~~~

After reviewing both of the possible results, we can see that our Naive Singleton is not thread safe. In the first case, let's say Thread Foo gets the Singleton first and since it is not created yet, it gets created and `FOO` is passed in and then Thread Foo accesses value and passes it to cout to be printed. While Thread Foo executes, Thread Bar gets to the Singleton second and since it is already created, it reuses the Singleton and access the Singleton's value and passes it to cout to be printed. We see two `FOO` statements outputted to the console because the Singleton is reused.

In the second case, both Threads get to the Naive Singleton at the same time causing it to be created 2 times, which results in one singleton object that has data member value `BAR` and another singleton object that has data member value `FOO`. Both threads pass their particular Singleton object's data member value to cout to be printed, so we see `BAR` and then `FOO`.