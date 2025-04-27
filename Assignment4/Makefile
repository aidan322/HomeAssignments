CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wpedantic
OBJS = main.o transformer.o autobot.o decepticon.o
TARGET = transformers
GTEST_FLAGS = -lgtest -lgtest_main -pthread

transformer4_test: transformer4_test.o transformer.o autobot.o decepticon.o
	$(CXX) $(CXXFLAGS) transformer4_test.o transformer.o autobot.o decepticon.o -o transformer4_test $(GTEST_FLAGS)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) transformer_test.o

cleanall: clean
	rm -f $(TARGET) transformer4_test
