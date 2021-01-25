# Example Code: Prototype

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

Run the following command to run the Prototype Demo:

~~~bash
./PrototypeDemo
~~~

**TODO:** [ ] Add a low-level description of what happens when the program runs stepping through the code verbally.

When we run the program, we will see there are two Prototypes that were created and from each prototype there is a call to their Method with a value that gets printed to the screen. Here is an example of the output:

~~~bash
Let's create a Prototype 1 Clone
Call Method from PROTOTYPE_1  with field : 90

Let's create a prototype 2 Clone
Call Method from PROTOTYPE_2  with field : 10
~~~
