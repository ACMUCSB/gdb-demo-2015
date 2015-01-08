int accumulator = 0;

void doStuffWithValueImpl( int value ) {
	if (value == 3) *((void*)0x00);
	accumulator -= value;
}