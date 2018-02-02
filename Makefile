.PHONY: all clean
	
all: GAP
	
clean:
			rm -rf GAP *.o
main.o: main.cpp
	g++  -std=c++11 -c -o  main.o main.cpp
randomarray.o: randomarray.cpp
	g++  -std=c++11 -c -o  randomarray.o randomarray.cpp
GAP: main.o randomarray.o
	g++  -std=c++11 -o GAP main.o randomarray.o