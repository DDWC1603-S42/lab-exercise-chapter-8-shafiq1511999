#include <iostream>
#include <string>

//#include "LogH.h"
using namespace std;

class Log
{
    public:
        int LogLevelWarning=0;
        int LogLevelError=1;
        int LogLevelInfo=2;

    private:
        int m_LogLevel=LogLevelInfo;

    public:

        void SetLogLevel(int level)
        {
            m_LogLevel=level;
        }

       //niel string message="string";

        int Error(const char* message)
        {
        if(m_LogLevel>=LogLevelError)
        cout<<"[ERROR]: "<<message<<endl;
        }


        int Warn(const char* message)
        {
        if(m_LogLevel>=LogLevelWarning)
        cout<<"[WARNING]: "<<message<<endl;
        }


        int Info(const char* message)
        {
        if(m_LogLevel>=LogLevelInfo)
        cout<<"[INFO]: "<<message<<endl;
        }

};

int main()
{

    Log log;
    log.SetLogLevel(log.LogLevelWarning);
    log.Warn("Hello! its a warning!");

}
