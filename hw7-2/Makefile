simple_int_set: simple_int_set.o simple_int_set_main.o
	g++ -o simple_int_set simple_int_set.o simple_int_set_main.o

simple_int_set.o: simple_int_set.cc
	g++ -c simple_int_set.cc

simple_int_set_main.o: simple_int_set_main.cc
	g++ -c simple_int_set_main.cc

clean:
	rm -f simple_int_set simple_int_set.o simple_int_set_main.o
