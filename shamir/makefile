main: main.o field.o
	g++ -g -o main main.o field.o
main.o: main.cpp field.h
	g++ -g -c main.cpp 
field.o: field.cpp field.h
	g++ -g -c field.cpp
clean:
	rm -f *.o main