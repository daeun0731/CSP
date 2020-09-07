all : string dynamic_array function_overloading

string: string.o
	g++ -o string string.o

string.o: string.cc
	g++ -c string.cc

dynamic_array: dynamic_array.o
	g++ -o dynamic_array dynamic_array.o

dynamic_array.o: dynamic_array.cc
	g++ -c dynamic_array.cc

function_overloading: function_overloading.o
	g++ -o function_overloading function_overloading.o

function_overloading.o: function_overloading.cc
	g++ -c function_overloading.cc

clean:
	rm -f string string.o
	rm -f dynamic_array dynamic_array.o
	rm -f function_overloading function_overloading.o
