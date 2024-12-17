# Makefile
# building a project with the make command
 
project1: main.o helloworld.o
	g++ helloworld.cpp main.cpp -o project1
main.o: main.cpp header.h
	g++ -c main.cpp
helloworld.o: helloworld.cpp header.h
	g++ -c helloworld.cpp
clean: 
	rm -rf *.o project1
