CC = g++

INCDIR = include
SRCDIR = src

CFLAGS = -g -Wall -I$(INCIDR)

main: Dog.o Breed.o Main.o
	$(CC) Dog.o Breed.o Main.o -o main

Main.o: $(SRCDIR)/Main.cpp $(INCDIR)/Dog.h $(INCDIR)/Breed.h
	$(CC) $(CFLAGS) -c $(SRCDIR)/main.cpp

Dog.o: $(SRCDIR)/Dog.cpp
	$(INCDIR)/Dog.h
		$(CC) $(CFLAGS) -c $(SRCDIR)/Dog.cpp

Breed.o: $(SRCDIR)/Breed.cpp
	$(INCDIR)/Breed.h $(INCDIR)/Dog.h
		$(CC) $(CFLAGS) -c $(SRCDIR)/Breed.cpp