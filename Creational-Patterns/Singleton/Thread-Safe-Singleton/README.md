# Example Code: Thread-Safe Singleton

## Jump to Code :keyboard:

- [main.cpp](C++/src/main.cpp)
- [ThreadSafeSingleton.hpp](C++/include/ThreadSafeSingleton.hpp)
- [ThreadSafeSingleton.cpp](C++/src/ThreadSafeSingleton.cpp)

## Concept :dart:

Thread-Safe Singleton fixes the problem that comes from the Naive Singleton by synchronizing the threads with a lock guard to lock the mutex during the first creation of the Singleton object. So for example if we have two threads, the first thread to call on the lock guard locks the mutex making the second thread have to wait on the first thread. Once the Singleton object is created, the first thread unlocks the mutex and then the secon thread locks the mutex to find that there is already a Singleton created, so it reuses it.
