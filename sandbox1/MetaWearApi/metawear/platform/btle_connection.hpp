#pragma once

#include "stdint.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum
{
    MBL_MW_WRITE_GATT_CHAR_WITH_RESPONSE = 0,
    MBL_MW_WRITE_GATT_CHAR_WITHOUT_RESPONSE
} MblMwGattCharWriteType;

typedef struct 
{
    uint64_t service_uuid_high;
    uint64_t service_uuid_low;
    uint64_t uuid_high;
    uint64_t uuid_low;   
} MblMwGattChar;

typedef int32_t (*MblMwFnIntvoidPtrArray)(const void* caller, const uint8_t* start, uint8_t length);

typedef void(*MblMwFnVoidVoidPtrInt)(const void* caller, int32_t value);

typedef struct 
{

    // provides calling function the ability to any specific data.
    void *context;

    /* Writes the 'characteristic' and 'value' to the device
     * @param context           - 
     * @param caller            - 
     * @param writeType         - 
     * @param characteristic    - 
     * @param value             - 
     * @param length            - 

    void (*write_gatt_char)(void *context, 
                            const void* caller, 
                            MblMwGattCharWriteType writeType, 
                            const MblMwGattChar* characteristic,
                            const uint8_t* value,
                            uint8_t length);
};


}
