int getStartValueImpl() {
	return 0;
}

int Big_Evil_Global_Variable = 6;
int getEndValueImpl() {
	// Need to compensate for some weird offset thing.
	// Not sure where the offset is coming from. :)
	// TODO: Remove offset
	return Big_Evil_Global_Variable++;
}