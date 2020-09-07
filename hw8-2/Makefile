draw_shape: draw_shape.o draw_shape_main.o
	g++ -o draw_shape draw_shape.o draw_shape_main.o

draw_shape.o: draw_shape.cc
	g++ -c draw_shape.cc

draw_shape_main.o: draw_shape_main.cc
	g++ -c draw_shape_main.cc

clean:
	rm -f draw_shape draw_shape.o draw_shape_main.o
