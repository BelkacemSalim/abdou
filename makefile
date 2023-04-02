all:
	clear
	gcc -Wall *.c
	./a.out
	rm -R a.out