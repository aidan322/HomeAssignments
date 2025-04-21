CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wpedantic

all: rpn

rpn: main.o
	$(CXX) $(CXXFLAGS)  main.o -o rpn

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -rf *.o rpn
