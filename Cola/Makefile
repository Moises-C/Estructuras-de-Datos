a.out: main.o cola.o
	gcc main.o cola.o
main.o: main.c
	gcc -c main.c
cola.o: cola.c
	gcc -c cola.c
indent: 
	indent *.c
run: a.out 
	./a.out
clean:
	rm a.out *.o  *.c~
