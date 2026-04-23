#ifndef ERRORMANAGER_H
#define ERRORMANAGER_H
#include "ErrorManager_private.h"
#include <cstring>

namespace ErrorManager
{
    class ErrorManager
    {
        public:
            /**
             * @brief Construct a new Error Manager object
             */
            ErrorManager();
            /**
             * @brief Destroy the Error Manager object
             */
            ~ErrorManager();

            /**
             * @brief Get the error message for a given error code
             * @param[in] n32_ErrorCode The error code
             * @param[out] pc8_ErrorMessage The buffer to store the error message
             * @param[in] u32_BufferSize The size of the buffer
             */
            void GetErrorMessage( const int32_t n32_ErrorCode,
                                  char* pc8_ErrorMessage,
                                  const uint32_t u32_BufferSize);



        private:
    };
}
#endif // ERRORMANAGER_H