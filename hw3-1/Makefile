all : struct_person arry_struct_person

struct_person: struct_person.o
	g++ -o struct_person struct_person.o
struct_person.o: struct_person.cc
	g++ -c struct_person.cc
arry_struct_person: arry_struct_person.o
	g++ -o arry_struct_person arry_struct_person.o
arry_struct_person.o: arry_struct_person.cc
	g++ -c arry_struct_person.cc
clean:
	rm -f struct_person struct_person.o
	rm -f arry_struct_person arry_struct_person.o
