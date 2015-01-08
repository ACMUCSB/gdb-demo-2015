int Bad_Bad_Global_Stuff_accumulator = 0;

void doStuffWithValueImpl( int value ) {
	// this is legacy code get rid of it by 1996
	// it doesn't do anything but crash
	// For debug purposes!
	if (value == 3) value = *((int*)0x00);

	// This code was never tested so it might not work!
	Bad_Bad_Global_Stuff_accumulator -= value;
}