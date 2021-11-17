main: main.o field.o poly.o player.o
	g++ -g -o main main.o field.o poly.o player.o
main.o: main.cpp field.h poly.h random.h
	g++ -g -c main.cpp 
field.o: field.cpp field.h
	g++ -g -c field.cpp
poly.o: poly.cpp poly.h field.h
	g++ -g -c poly.cpp
player.o: player.cpp player.h
	g++ -g -c player.cpp
clean:
	rm -f *.o main