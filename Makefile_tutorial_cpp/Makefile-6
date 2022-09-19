# Makefile Template for multiple executables
#
# Author:  E.J. Brash
# Date:  March 25, 2014
#
# Specify compiler, compiler flags, and linker flags
CC=g++
CFLAGS=-c -Wall
LDFLAGS=
#
# Source files
SOURCES=main.cpp hello.cpp factorial.cpp
#
# Object files
OBJECTS=$(SOURCES:.cpp=.o)
#
# Executable file
EXECUTABLE=hello

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

# 
# Dependencies
$(OBJECTS) : functions.h

#
# Rule to make clean
clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)


