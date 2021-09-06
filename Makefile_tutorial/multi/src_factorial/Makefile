CC=g++
CFLAGS=-c -Wall
LDFLAGS=
INCLUDES=-I../include
FACSOURCE=factorial.cpp
FACOBJS=$(FACSOURCE:.cpp=.o)

all: $(FACOBJS)
	
.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

$(FACOBJS) : functions.h

clean:
	rm -rf *.o 


