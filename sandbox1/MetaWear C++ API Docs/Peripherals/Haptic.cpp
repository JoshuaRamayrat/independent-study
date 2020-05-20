/*

Look at section 8 of the product specification datasheet for circuit diagrams of the driver pin.
The haptic module controls a high current driver to power a buzzer or motor.

*/

#include "metawearboard/peripheral/haptic.h"

void run_haptic(MblMwMetaWearBoard* board) 
{

    // 500 ms buzzer
    mbl_mw_haptic_start_buzzer(board, 500);

    // 1000 ms motor at 50% strength
    mbl_mw_haptic_start_motor(board, 50.f, 1000);
    
}