a.out: main.o listaenlazada.o
	gcc main.o listaenlazada.o
main.o: main.c
	gcc -c main.c
listaenlazada.o: listaenlazada.c
	gcc -c listaenlazada.c
run: a.out
	./a.out
clean: 
	rm  a.out  *.o

