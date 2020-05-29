/*

MblMwMetaWearBoard

MblMwMetaWearBoard struct is the C++ API's representation of a MetaWear board.

refer to metawearboard.h for instantiation and retrieval of board information.

*/

/*
    Instantiation

    

*/

#include "MetaWearApi/metawear/core/connection.hpp"
#include "MetaWearApi/metawear/core/metawearboard.hpp"

int main(int argc, char **argv)
{
    MblMwBtleConnection btle_conn = { nullptr, write_gatt_char, read_gatt_char, enable_char_notify };
    MblMwMetaWearBoard* board = mbl_mw_metawearboard_create(&btle_conn);
}

/*

Initialize

After instantiation, initialize the board's internal state by calling 'bl_mw_metawearboard_initialize'.
This asynchronously alerts the caller when the board is finished.

'MBL_MW_STATUS_OK' is returned if initialization succeeded.
A non-zero value is returned if it failed.

Everytime the board is connected, initialization must be done.

*/

mbl_mw_metawearboard_initialize(board, nullptr, [](void* context, MblMwMetaWearBoard* board, int32_t status) -> void
{
    if (!status)
    {
        printf("Error initializing board: %d\n", status);
    } else
    {
        printf("The board is initialized \n");
    }
};

/////////////////////////////////////////////////////////////////////////////
/////////////////// Device Information //////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

/*
 * MblMwDeviceInformation struct - wraps the device information characteristics
 * mbl_mw_metawearboard_get_device_information - for accessing the MblMwDeviceInformation struct.
 * The function does not allocate memory so it must be freed when finished with the struct.
 */

auto dev_info = mbl_mw_metawearboard_get_device_information(board);
cout << "firmware revision number = " << dev_info->firmware_revision << endl;
mbl_mw_memory_free((void*) dev_info);

/////////////////////////////////////////////////////////////////////////////
/////////////////// Model ///////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

/*
 * MblMwMetaWearBoard.h provides which board the MblMwMetaWearBoard communicates with
 * MetaWearBoard communicates with all MetaSensor boards
 */

cout << "model = " << mbl_mw_metawearboard_get_model(board) << endl;

/////////////////////////////////////////////////////////////////////////////
/////////////////// Tear Down ///////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

/*
 * mbl_mw_metawearboard_tear_down removes all data processors, loggers, timers, and recorded events
 * from the struct's internal state and the board.
 * Configuration changes are preserved.
 */

/* Modules
 * The MetaWear firmware supports specific sensors or features called modules.
 * The C++ API provides the mbl_mw_metawearboard_lookup_module function.
 * mbl_mw_metawearboard_lookup_module - determines what module is present or if it is supported.
 * 
 * module.h defines the constants for the modules.
 */

/*
 * Freeing memory 
 * 