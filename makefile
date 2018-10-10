default: list.o lib.o
	gcc -o test list.o lib.o

list.o: list.c lib.h
	gcc -c list.c

lib.o: lib.c lib.h
	gcc -c lib.c

run:
	./test

clean:
	rm -f *.exe *.out *~ *.o test
