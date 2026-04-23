#ifndef ERRORMANAGER_PRIVATE_H
#define ERRORMANAGER_PRIVATE_H

#include <cstdint>
#include <cstddef>

namespace ErrorManager
{
    const static int32_t OK_CODE = 0;

    const char* ERR_MESG_NULL_PTR = "Null Pointer Error";
    const static int32_t ERR_CODE_NULL_PTR = 1;
    
    const char* ERR_MESG_IDX_OUT_OF_RANGE = "Index out of range";
    const static int32_t ERR_CODE_IDX_OUT_OF_RANGE = 2;

    const char* ERR_MESG_UNKNOWN = "Unknown Error Code";

}
#endif // ERRORMANAGER_PRIVATE_H