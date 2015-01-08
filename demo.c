#include "value_abs.c"
#include "production_abs.c"

extern int Bad_Bad_Global_Stuff_accumulator;
int main() {
    int i;
    for (i = getStartValue(); i < getEndValue(); i++) {
    	doStuffWithValue(i);
    }
    printf("%d\n", Bad_Bad_Global_Stuff_accumulator);
}
