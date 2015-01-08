int getStartValueImpl() {
	return 0;
}

int Big_Evil_Global_Variable = 6;
int getEndValueImpl() {
	return Big_Evil_Global_Variable++;
}