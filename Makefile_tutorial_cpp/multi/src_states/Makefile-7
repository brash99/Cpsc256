CC=g++
CFLAGS=-c -Wall
LDFLAGS=
FACSOURCE=factorial.cpp
SOURCES1=main.cpp hello.cpp
SOURCES2=states.cpp
FACOBJS=$(FACSOURCE:.cpp=.o)
OBJECTS1=$(SOURCES1:.cpp=.o)
OBJECTS2=$(SOURCES2:.cpp=.o)
EXECUTABLE1=hello
EXECUTABLE2=states

all: $(SOURCES) $(EXECUTABLE1) $(EXECUTABLE2)
	
$(EXECUTABLE1): $(FACOBJS) $(OBJECTS1)
	$(CC) $(LDFLAGS) $(OBJECTS1) $(FACOBJS) -o $@

$(EXECUTABLE2): $(FACOBJS) $(OBJECTS2)
	$(CC) $(LDFLAGS) $(OBJECTS2) $(FACOBJS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

$(OBJECTS1) : functions.h

$(OBJECTS2) : functions.h

$(FACOBJS) : functions.h

clean:
	rm -rf *.o hello


