message_book: message_book.o message_book_main.o
	g++ -o message_book message_book.o message_book_main.o

message_book.o: message_book.cc
	g++ -c message_book.cc

message_book_main.o: message_book_main.cc
	g++ -c message_book_main.cc

clean:
	rm -f message_book message_book.o message_book_main.o
