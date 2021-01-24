#include <iostream>
#include <chrono>
#include <NaiveSingleton.hpp>
#include <thread>

void ThreadFoo() {
    // Following code emulates slow initialization
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    NaiveSingleton* singleton = NaiveSingleton::GetInstance("FOO");
    std::cout << singleton->value() << "\n"; 
}

void ThreadBar() {
    // Following code emulates slow initialization
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    NaiveSingleton* singleton = NaiveSingleton::GetInstance("BAR");
    std::cout << singleton->value() << "\n";
}

int main() {
    std::cout << "If you see the same value, then Naive Singleton was reused (yay!\n" <<
                 "If you see different values, then 2 Naive Singleton's were created (booo!!)\n\n" <<
                 "RESULT:\n";
    
    std::thread t1(ThreadFoo); // t1 starts running
    std::thread t2(ThreadBar); // t2 starts running

    t1.join(); // current thread waits for t1 to finish
    t2.join(); // current thread waits for t2 to finish

    return 0;
}
