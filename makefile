# Plik makefile dla forka
CC	=	gcc
CFLAGS	=	-g
all:	lab1
lab1:	lab1.c
	$(CC)	$(CFLAGS)	-o	lab1	lab1.c
