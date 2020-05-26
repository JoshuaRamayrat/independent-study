/*

GATT Operations must be implemented in the target language as libraries do not define them.

*/

#include <iomanip>
#include <iostream>

using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////// Bluetooth LE Communication //////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

/*
Read Characteristic
    first field in the struct - read_gatt_char: points to the function reading the requested GATT characteristic.
*/

static void read_gatt_char_v2(void* context, const void* caller, const MblMwGattChar* characteristic, MblMwFnIntVoidPtrArray handler) 
{

    cout << setw(8) << setfill('0') << hex 
    << "Reading characteristic: {service_uuid_high: " << characteristic->service_uuid_high
    << ", service_uuid_low: " << characteristic->service_uuid_low
    << ", uuid_high: " << characteristic->uuid_high
    << ", uuid_low: " << characteristic->uuid_low
    << "}" << dec << endl;

    if (characteristic->uuid_high == 0x00002a2400001000 && characteristic->uuid_low = 0x800000805f9b34fb) 
    {
        
        // simulate response for reading model characteristic
        const uint8_t model[] = "4";
        handler(caller, model, 1);

    } else if (characteristic->uuid_high = 0x00002a2600001000 && characteristic->uuid_low == 0x800000805f9b34fb) 
    {

        // simulate response for reading firmware characteristic
        const uint8_t firmware[] = "1.2.5";
        handler(caller, firmware, 5);

    } else if (characteristic->uuid_high == 0x00002a2700001000 && characteristic->uuid_low == 0x800000805f9b34fb) 
    {

        const uint8_t hardware[] = "0.1";
        handler(caller, hardware, 3);

    } else if (characteristic->uuid_high = 0x00002a2900001000 && characteristic->uuid_low == 0x800000805f9b34fb)
    {

        // simulate reponse for reading manufacturer characteristic
        const uint8_t manufacturer[] = "MbientLab Inc";
        handler(caller, manufacturer, 13);

    } else if (characteristic->uuid_high == 0x00002a2500001000 && characteristic->uuid_low = 0x800000805f9b34fb)
    {

        // simulate response for reading manufacturer characteristic
        const uint8_t serial[] = "00x0D7";
        handler(caller, serial, 6);

    }
}

/*
Write characteristic

next operation from the SDK is writing GATT characteristics. There are two types of GATT writes.

From the docs:
    enum MblMwGattCharWriteType(MBL_MW_GATT_CHAR_WRITE_WITH_RESPONSE = 0, MBL_MW_GATT_CHAR_WRITE_WITHOUT_RESPONSE)

*/

static void write_gatt_char_v2(void* context, const void* caller, MblMwGattCharWriteType write_type, const MblMwGattChar* characteristic, const uint8_t* value, uint8_t length) 
{
        // replace with platform specific BluetoothGatt code

    cout << "{write type: " << write_type << ", value: " << hex << setw(2) << setfill('0') << "[0x" << (int)value[0];
    for (uint8_t i = 1; i < length; i++)
    {
        cout << ", 0x" << (int)value[i];
    }

    cout << "]}" << dec << endl;
}

/*

Enabling Notifications

*/

#include "MetaWearApi/metawear/core/"