all: test

CXXFLAGS=-DIMPLEMENTATION --std=c++17 -Wextra 
CC=clang++

%.o: %.cpp
	${CC} ${CXXFLAGS} -c $< -o $@ -MD -MF $*.d

test: main.o first.o second.o sayer.o
	${CC} $^ -o $@ 

clean:
	rm -f test *.o *.d

.PHONY: clean

include $(wildcard *.d)