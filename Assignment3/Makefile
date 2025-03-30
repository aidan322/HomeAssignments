CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -02
LDFLAGS =

SRCS = main.cpp transformer.cpp
OBJS = $(SRCS:.CPP=.0)
TARGET = transformer

all: $(TARGET)

$(TARGET): $(OBJS)
	 $(CXX) $(LDFLAGS) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
