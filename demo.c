#include "value_abs.c"
#include "production_abs.c"

int main() {
    int i;
    for (i = getStartValue(); i < getEndValue(); i++) {
    	doStuffWithValue(i);
    }
}
