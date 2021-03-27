test: main.cpp
	g++ main.cpp ./cpluspython/cpluspython.h -o main.o

clear:
	rm *.o