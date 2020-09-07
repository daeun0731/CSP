minimal_fighter: minimal_fighter.o minimal_fighter_main.o
	g++ -o minimal_fighter minimal_fighter.o minimal_fighter_main.o

minimal_fighter.o: minimal_fighter.cc
	g++ -c minimal_fighter.cc

minimal_fighter_main.o: minimal_fighter_main.cc
	g++ -c minimal_fighter_main.cc

clean:
	rm -f minimal_fighter minimal_fighter.o minimal_fighter_main.o
