#include "ErrorManager.h"

namespace ErrorManager
{
    ErrorManager::ErrorManager()
    {

    }

    ErrorManager::~ErrorManager()
    {

    }

    void ErrorManager::GetErrorMessage( const int32_t n32_ErrorCode,
                                      char* pc8_ErrorMessage,
                                      const uint32_t u32_BufferSize)
    {
        if (pc8_ErrorMessage == nullptr || u32_BufferSize == 0)
        {
            // Handle null pointer or zero buffer size
            return;
        }

        const char* errorMessage = nullptr;

        switch (n32_ErrorCode)
        {
            case OK_CODE:
                errorMessage = "No Error";
                break;
            case ERR_CODE_NULL_PTR:
                errorMessage = ERR_MESG_NULL_PTR;
                break;
            case ERR_CODE_IDX_OUT_OF_RANGE:
                errorMessage = ERR_MESG_IDX_OUT_OF_RANGE;
                break;
            default:
                errorMessage = ERR_MESG_UNKNOWN;
                break;
        }

        // Copy the error message to the provided buffer
        std::strncpy(pc8_ErrorMessage, errorMessage, u32_BufferSize - 1);
        pc8_ErrorMessage[u32_BufferSize - 1] = '\0'; // Ensure null termination
    }
}