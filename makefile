#VARIABLES
#Set compiler
CC = g++

#Target function
TARGET = main

#Directories
INCDIR = include
SRCDIR = src
OBJDIR = obj
BINDIR = bin

#Linker
LINKER = g++ -o

#Flags
FLAGS = -Wall -I$(INCDIR)
CFLAGS = -g $(FLAGS)
LFLAGS = $(FLAGS) -lm

#Generics
SOURCES 	:= $(wildcard $(SRCDIR)/*.cpp)
INCLUDES 	:= $(wildcard $(INCDIR)/*.h)
OBJECTS 	:= $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

#ACTUAL MAKE CODE
$(BINDIR)/$(TARGET): $(OBJECTS)
	@$(LINKER) $@ $(LFLAGS) $(OBJECTS)

$(OBJECTS): $(OBJDIR)%.o : $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@