input : input.o
	gcc -o input input.o
input.o : input.c
	gcc  -c input.c
clean : 
	rm input input.o
