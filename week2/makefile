newtest2:main.o fun.o fun1.o
	gcc main.o fun.o fun1.o -o newtest2
main.o:main.c uhead.h
	gcc main.c -c
fun.o:fun.c
	gcc fun.c -c
fun1.o:fun1.c
	gcc fun1.c -c	
clean:
	rm -f *.o
