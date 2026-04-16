#include "logmanager.h"
#include <cstring>
#include <cstdio>

namespace MNGMT
{
    LogManager::LogManager()
    {
        // Constructor implementation
    }

    LogManager::~LogManager()
    {
        // Destructor implementation
    }

    void LogManager::LogAppendMsg2Log( const int32_t n32_loglevel, const char vc_FCN[ 100U ], const char *pc_msg )
    {
        // Buffer to hold the formatted log message
        char vc_logMessage[ 256U ]; 
        // Buffer to hold the log level as a string
        char vc_LogLvl[ 20U ]; 
        
        switch ( n32_loglevel )
        {
            case DEBUG:
                strcpy( vc_LogLvl, "DEBUG" );
                break;
            case INFO:
                strcpy( vc_LogLvl, "INFO" );
                break;
            case WARNING:
                strcpy( vc_LogLvl, "WARNING" );
                break;
            case ERROR:
                strcpy( vc_LogLvl, "ERROR" );
                break;
            case ALWAYS:
                strcpy( vc_LogLvl, "ALWAYS" );
                break;
            default:
                strcpy( vc_LogLvl, "UNKNOWN" );
                break;
        }

        // Create the log message
        snprintf( vc_logMessage, sizeof(vc_logMessage), "[ %s\t] %s(): %s\n", vc_LogLvl, vc_FCN, pc_msg );
        // Append the log message to the log file (for demonstration, we print it to the console)
        printf( "%s\n", vc_logMessage );
    }
}