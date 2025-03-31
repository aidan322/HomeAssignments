CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRCS = main.cpp transformer.cpp autobot.cpp decepticon.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = transformers

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
