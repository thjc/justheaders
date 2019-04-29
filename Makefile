all: test

CXXFLAGS=-DIMPLEMENTATION --std=c++17 -Wextra 
CC=clang++

%.o: %.cpp
	${CC} ${CXXFLAGS} -c $< -o $@ -MD -MF $*.d

test: main.o first.o second.o
	${CC} $< -o $@ 

clean:
	rm -f test *.o *.d

sources = foo.c bar.c

.PHONY: clean

include $(wildcard *.d)