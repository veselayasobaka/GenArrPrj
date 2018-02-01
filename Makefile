.PHONY: all clean
	
all: GAP
	
clean:
			rm -rf GAP *.o
main.o: main.cpp
	g++  -std=c++11 -c -o  main.o main.cpp
arrayint.o: arrayint.cpp
	g++  -std=c++11 -c -o  arrayint.o arrayint.cpp
arrayfloat.o: arrayfloat.cpp
	g++  -std=c++11 -c -o  arrayfloat.o arrayfloat.cpp
randomarray.o: randomarray.cpp
	g++  -std=c++11 -c -o  randomarray.o randomarray.cpp
GAP: main.o arrayint.o arrayfloat.o randomarray.o
	g++  -std=c++11 -o GAP main.o arrayfloat.o arrayint.o randomarray.o