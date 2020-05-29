/* 
 * MblMwData struct 
 *      timestamp of when data was created
 *      pointer to the data
 *      data type id indicating how to cast the pointer
 * 
 */

#include "MetaWearApi/metawear/core/data.h"

#include <chrono>
#include <iomanip>

using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::system_clock;
using std::chrono::time_point;

void data_printer(void* context, const MblMwData* data)
{
    uint8_t* data_bytes = (uint8_t*) data->value;
    string bytes_str("[");
    char buffer[5];
}