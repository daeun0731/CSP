all : sorted_array integer_set

sorted_array: sorted_array.o sorted_array_main.o
	g++ -o sorted_array sorted_array.o sorted_array_main.o

sorted_array.o: sorted_array.cc
	g++ -c sorted_array.cc

sorted_array_main.o: sorted_array_main.cc
	g++ -c sorted_array_main.cc

integer_set: integer_set.o integer_set_main.o
	g++ -o integer_set integer_set.o integer_set_main.o

integer_set.o: integer_set.cc
	g++ -c integer_set.cc

integer_set_main.o: integer_set_main.cc
	g++ -c integer_set_main.cc

clean:
	rm -f sorted_array sorted_array.o sorted_array_main.o
	rm -f integer_set integer_set.o integer_set_main.o
