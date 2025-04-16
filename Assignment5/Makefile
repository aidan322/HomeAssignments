CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wpedantic
OBJS = main.o transformer.o autobot.o decepticon.o
TARGET = transformers

$(TARGET): $(OBJS)
	$(CXX) $(CSSFLAGS) -o $(TARGET) $(OBJS)

%.0: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

cleanall: clean
	rm -f $(TARGET)
