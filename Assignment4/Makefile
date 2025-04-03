CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wpedantic

all: transformers

transformers: main.o transformer.o autobot.o decepticon.o
	$(CXX) $(CXXFLAGS) -o transformers main.o transformer.o autobot.o decepticon.o

main.o: main.cpp autobot.h decepticon.h
	$(CXX) $(CXXFLAGS) -c main.cpp

transformer.o: transformer.cpp transformer.h
	$(CXX) $(CXXFLAGS) -c transformer.cpp

autobot.o: autobot.cpp autobot.h
	$(CXX) $(CXXFLAGS) -c autobot.cpp

decepticon.0: decepticon.cpp decepticon.h
	$(CXX) $(CXXFLAGS) -c decepticon.cpp

clean:
	rm -f *.o transformers
