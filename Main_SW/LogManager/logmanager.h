#ifndef LOGMANAGER_H
#define LOGMANAGER_H

#include <cstdint>
#include <cstddef>
#include <array>
#include <cstring>
#include "logmanager_private.h"

namespace MNGMT
{
    class LogManager
    {
    public:
        /**
         * @brief LogManager constructor
        */
        LogManager();

        /**
         * @brief LogManager destructor
         */
        ~LogManager();

        void LogAppendMsg2Log( const int32_t n32_loglevel, 
                               const char vc_FCN[ 100U ], 
                               const char *pc_msg );
    private:
        const uint32_t u8_FCN_Lenght = 100U;
};
}

#endif // LOGMANAGER_H