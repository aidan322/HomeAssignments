CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wpedantic
GTEST_FLAGS = -lgtest -lgtest_main -pthread

SRCS = main.cpp transformer.cpp autobot.cpp decepticon.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = transformers

TEST_SRCS = transformer_test.cpp transformer.cpp
TEST_OBJS = $(TEST_SRCS:.cpp=.o)
TEST_EXE = transformer_test

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

$(TEST_EXE): $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $(TEST_EXE) $(TEST_OBJS) $(GTEST_FLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TEST_EXE)
	./$(TEST_EXE)

clean:
	rm -f $(OBJS) $(TARGET_OBJS) $(TARGET) $(TEST_EXE)
