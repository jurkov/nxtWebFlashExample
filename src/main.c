#include "../h/main.h"

/// DO NOT DELETE THIS METHOD
/// It is called every 1ms and e.g. can be used for implementing a
/// real time counter / clock.
void user_1ms_isr_type2(void) {
}

void ecrobot_device_initialize(void) {
}

void ecrobot_device_terminate(void) {
}

void hello_world() {
	ecrobot_status_monitor("Hello, World!");

}

TASK(OSEK_Main_Task) {
	while (1) {
		hello_world();
		nxt_motor_set_speed(NXT_PORT_A,100,0);
		nxt_motor_set_speed(NXT_PORT_C,-100,0);
		systick_wait_ms(2000);

		nxt_motor_set_speed(NXT_PORT_A,+100,0);
		nxt_motor_set_speed(NXT_PORT_C,-100,0);
		systick_wait_ms(2000);

	}
}
