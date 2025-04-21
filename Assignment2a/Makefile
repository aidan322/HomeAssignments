CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic

all: project2

project2: main.o
	$(CXX) $(CXXFLAGS)  main.o -o project2

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp
clean:
	rm -rf *.o project2
