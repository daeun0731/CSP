all : number rectangle

number: number.o number_main.o
	g++ -o number number.o number_main.o

number.o: number.cc
	g++ -c number.cc

number_main.o: number_main.cc
	g++ -c number_main.cc

rectangle: rectangle.o rectangle_main.o
	g++ -o rectangle rectangle.o rectangle_main.o

rectangle.o: rectangle.cc
	g++ -c rectangle.cc

rectangle_main.o: rectangle_main.cc
	g++ -c rectangle_main.cc

clean:
	rm -f number number.o number_main.o
	rm -f rectangle rectangle.o rectangle_main.o
