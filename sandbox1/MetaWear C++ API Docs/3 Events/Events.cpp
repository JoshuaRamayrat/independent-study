// An event is an asynchronous notification from the MetaWear board.
// MblMwEvent struct represents an event.

// Recording Commands

#include "MetaWearApi/metawear/core/event.h"
#include "MetaWearApi/metawear/core/settings.h"

void setup_dc_event(MblMwMetaWearBoard* board)
{
    MblMwLedPattern pattern;
    mbl_mw_led_load_preset_pattern(&pattern, MBL_MW_LED_PRESET_BLINK);
    pattern.repeat_count = 10;

    // Setup disconnect event to blink the blue led 10 times when fired.
    MblMwEvent* dc_event = mbl_mw_settings_get_disconnect_event(board);
    
    mbl_mw_event_record_commands(dc_event);
    
    mbl_mw_led_write_pattern(board, &pattern, MBL_MW_LED_COLOR_BLUE);

    mbl_mw_led_play(board);
    

}