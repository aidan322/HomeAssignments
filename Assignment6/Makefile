CXX = g++
CXXFLAGS = -std=c++14 -Wall -Werror -Wpedantic
GTEST_FLAGS = -lgtest -lgtest_main -pthread

all: test

test: mytests.o
	$(CXX) $(CXXFLAGS) mytests.o -o test $(GTEST_FLAGS)

mytests.o: mytests.cpp classes.h wrapper.h
	$(CXX) $(CXXFLAGS) -c mytests.cpp

clean:
	rm -f *.o test
