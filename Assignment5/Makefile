CXX = g++
CXXFLAGS = -std=c++14 -Wall -Werror -Wpedantic
OBJS = main.o transformer.o autobot.o decepticon.o neutralbot.o
TARGET = transformers

transformer5_test: transformer5_test.o transformer.o autobot.o decepticon.o neutralbot.o
	$(CXX) $(CXXFLAGS) -o transformer5_test transformer5_test.o transformer.o autobot.o decepticon.o neutralbot.o -lgtest -lgtest_main -pthread

$(TARGET): $(OBJS)
	$(CXX) $(CSSFLAGS) -o $(TARGET) $(OBJS)

%.0: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

cleanall: clean
	rm -f $(TARGET)
