all: swaping command_argument circle_main cmdarg

swaping: swaping.o
	g++ -o swaping swaping.o

swaping.o: swaping.cc
	g++ -c swaping.cc

command_argument: command_argument.o
	g++ -o command_argument command_argument.o

command_argument.o: command_argument.cc
	g++ -c command_argument.cc

circle_main: circle_main.o circle.o
	g++ -o circle_main circle_main.o circle.o

circle_main.o: circle_main.cc
	g++ -c circle_main.cc

circle.o: circle.cc
	g++ -c circle.cc

cmdarg: cmdarg.o
	g++ -o cmdarg cmdarg.o

cmdarg.o: cmdarg.cc
	g++ -c cmdarg.cc

clean:
	rm -f swaping swaping.o
	rm -f command_argument command_argument.o
	rm -f circle_main circle_main.o circle.o
	rm -f cmdarg cmdarg.o
