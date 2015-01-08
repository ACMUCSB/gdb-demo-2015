int accumulator = 0;

void doStuffWithValueImpl( int value ) {
	if (value == 3) value = *((int*)0x00);
	accumulator -= value;
}