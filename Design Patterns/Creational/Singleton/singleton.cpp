#include<bits/stdc++.h>
using namespace std;
// basic version of singleton design pattern
class Logger{
    private:
        static Logger* loggerInstance;
        Logger(){
            cout<<"Logger Instance Created"<<endl;
        };
    public:
        static Logger* getInstance(){
            if(loggerInstance==nullptr){
                loggerInstance=new Logger();
            }
            return loggerInstance;
        }
};

Logger* Logger::loggerInstance = nullptr;

int main(){
    cout<<"Singleton Design Pattern"<<endl;
    Logger* logger1= Logger::getInstance();
    Logger* logger2= Logger::getInstance(); // will not create new instance
    /*only once the message from constructore will be printed indicating that single instentiation.*/   
    return 0;
}