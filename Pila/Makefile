a.out: main.o pila.o
	gcc main.o pila.o
main.o: main.c
	gcc -c main.c
pila.o: pila.c
	gcc -c pila.c
indent: 
	indent *.c
run: a.out
	./a.out
clean: 
	rm a.out *.o *.c~
