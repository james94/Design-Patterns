# Example Code: Thread-Safe Singleton

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

Run the following command to run the Thread-Safe Singleton Demo:

~~~bash
./ThreadSafeSingletonDemo
~~~

When we run the program, 2 threads are launched, both of these threads run to call on Thread-Safe Singleton's `GetInstance(const std::string& value)` method, but only one will be able to access it at a time because there is a `std::lock_guard<std::mutex>`. The first thread to call lock_guard locks the mutex, then that particular
thread checks if there is a singleton object created, if not create it. Let's say the first thread locked the mutex, while the first thread is doing all operations, the second thread is waiting its turn to access the lock_guard to lock the mutex, but that second thread has to wait for the first thread unlock the mutex. Once the first thread leaves from GetInstance() block, the mutex will be unlocked for the second thread to lock the mutex. When the second thread checks if a singleton object has been created, it finds out there is one and gets that one. So, the second thread reuses the one that was created when the first thread got the singleton instance. Also note that the first thread passed in a string of `FOO` to the `GetInstance(...)` method, so our singleton object will have its data member value initialized. In this case, the first thread got to the lock_guard before the second thread, but also keep in mind that if we executed the program again the second thread could have got to the lock_guard to lock the mutex and that would have meant the singleton object's data member value would have been initialized with `BAR`. Then the first thread would have reused the singleton that was created when the second thread got to it.

When we run the program for the first time, we see the result is `BAR` printed two times. Which means in this case, thread 2 locked the mutex first, a singleton was created based on the value thread 2 provided it and thread 1 later reused that particular singleton.

~~~bash
If you see the same value, then Naive Singleton was reused (yay!
If you see different values, then 2 Naive Singleton's were created (booo!!)

RESULT:
BAR
BAR
~~~

When we run the program another time, we see the result is `FOO` printed two times.

~~~bash
If you see the same value, then Naive Singleton was reused (yay!
If you see different values, then 2 Naive Singleton's were created (booo!!)

RESULT:
FOO
FOO
~~~

Optional Question: Which thread locked the mutex first? Which thread ended up reusing the particular singleton that was created?
