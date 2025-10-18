// in this code we implement Meyers Singleton
// in which we use c++11 feature of thread safe static initialization


/*why deleting the copy constructore ?
This is copy initialization. Here's what happens step by step:
Logger::getInstance() returns a reference to the singleton instance.
The statement Logger a = ... means "create a new Logger object a initialized from the object on the right side."
To create a from the existing Logger instance, C++ uses the copy constructor (or move constructor, if available). */
#include<bits/stdc++.h>
#include<thread>
using namespace std;

class Logger{
    private:
        Logger(){
            cout<<"Logger Initialized"<<endl;
        }

        Logger(const Logger&) = delete; // deleting copy constructor
        Logger& operator=(const Logger&) = delete; // deleting assignment operator
    
    public:
        static Logger& getInstance(){
            static Logger instance; // initialized only once in a thread safe manner
            return instance;
        }
};

int main(){
    // normaly calling getInstance to get the singleton instance
    Logger& logger1 = Logger::getInstance();
    Logger& logger2 = Logger::getInstance();
    // both logger1 and logger2 will point to the same instance
    // only once the constructor will be called and "Logger Initialized" will be printed only once

    // using threads

    auto threadFunc = []() {
        Logger& logger = Logger::getInstance();
    };

    thread inst1(threadFunc);
    thread inst2(threadFunc);

    inst1.join();
    inst2.join();

    return 0;
}