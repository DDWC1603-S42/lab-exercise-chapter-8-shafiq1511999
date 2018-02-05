//Che Ku Muhamad Shafiq Bin Che Ku Amran//
// A17DW0186//
#include <iostream>
#include <string>

using namespace std;
class Log
{
    public:
      enum Level { LogLevelWarning=0, LogLevelError, LogLevelInfo};
    private:
        int p_LogLevel=LogLevelInfo;
    public:

      //function
        void SetLogLevel(int level){
            p_LogLevel=level;
        }

        //error
        int Error(const char* message)
        {
          if(p_LogLevel>=LogLevelError)
          cout<<"[ERROR]: "<<message<<endl;
        }
        //warn
        int Warning(const char* message)
        {
          if(p_LogLevel>=LogLevelWarning)
          cout<<"[WARNING]: "<<message<<endl;
        }
        //Info
        int Info(const char* message)
        {
          if(p_LogLevel>=LogLevelInfo)
          cout<<"[INFO]: "<<message<<endl;
        }
};



int main()

{
    Log log;
    log.SetLogLevel(log.LogLevelWarning);
    log.Warning("Hello! its a warning!");
    log.SetLogLevel(log.LogLevelError);
    log.Error("You find the ERROR boiii!");
    log.SetLogLevel(log.LogLevelInfo);
    log.Info("Its a info!");
}
