CC=gcc

objects = main.o optproc.o

537ps : $(objects)
	$(CC) -o 537ps $(objects)

main.o : optproc.h
optproc.o : optproc.h
