default:
	gcc -w -o generate15 value_impl.c production_impl.c demo.c

debug:
	gcc -g -w -o generate15 value_impl.c production_impl.c demo.c

gdb: debug
	gdb -tui generate15

clean:
	rm *~ -f
	rm *.o -f
	rm prog -f
