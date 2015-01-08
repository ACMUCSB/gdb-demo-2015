default:
	gcc -w -o prog value_impl.c production_impl.c demo.c

debug:
	gcc -g -w -o prog value_impl.c production_impl.c demo.c

gdb: debug
	gdb -tui prog

clean:
	rm *~ -f
	rm *.o -f
	rm prog -f
