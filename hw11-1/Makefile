all : MyVector string

MyVector : MyVector.o MyVector_main.o
	g++ -o MyVector MyVector.o MyVector_main.o

MyVector.o : MyVector.cc
	g++ -c MyVector.cc

MyVector_main.o : MyVector_main.cc
	g++ -c MyVector_main.cc

string : string.o string_main.o
	g++ -o string string.o string_main.o

string.o : string.cc
	g++ -c string.cc

string_main.o : string_main.cc
	g++ -c string_main.cc

clean:
	rm -rf MyVector MyVector.o MyVector_main.o
	rm -rf string string.o string_main.o
