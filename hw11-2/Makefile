all : world_clock calendar

world_clock: world_clock.o world_clock_main.o
	g++ -o world_clock world_clock.o world_clock_main.o

world_clock.o: world_clock.cc
	g++ -c world_clock.cc

world_clock_main.o: world_clock_main.cc
	g++ -c world_clock_main.cc

calendar: calendar.o calendar_main.o
	g++ -o calendar calendar.o calendar_main.o

calendar.o: calendar.cc
	g++ -c calendar.cc

calendar_main.o: calendar_main.cc
	g++ -c calendar_main.cc

clean:
	rm -rf world_clock world_clock.o world_clock_main.o
	rm -rf calendar calendar.o calendar_main.o
