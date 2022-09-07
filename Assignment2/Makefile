cc = gcc
CFLAGS = -Wall -pedantic -ansi
OBJ = main.o LinkedList.o FileIO.o match.o colour.o
EXEC = main

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

main.o : main.c LinkedList.h match.h colour.h
	$(CC) -c main.c $(CFLAGS)

LinkedList.o : LinkedList.c LinkedList.h
	$(CC) -c LinkedList.c $(CFLAGS)

FileIO.o : FileIO.c match.h
	$(CC) -c FileIO.c $(CFLAGS)

match.o : match.c match.h LinkedList.h
	$(CC) -c match.c $(CFLAGS)

colour.o : colour.c colour.h
	$(CC) -c colour.c $(CFLAGS)

clean:
	rm -f $(EXEC) $(OBJ)
