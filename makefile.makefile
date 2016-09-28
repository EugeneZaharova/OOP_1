FLAGS= -Wall -Werror -Wextra -g -Wno-sign-compare -pedantic
CC=g++

all: triangle foursquare octagon Main.cpp
	$(CC) -c $(FLAGS) Main.cpp
	$(CC) $(FLAGS) -o Triangle.o Foursquare.o Octagon.o Main.o

triangle: Triangle.cpp
	$(CC) -c $(FLAGS) Triangle.cpp

foursquare: Foursquare.cpp
	$(CC) -c $(FLAGS) Foursquare.cpp

octagon: Octagon.cpp
	$(CC) -c $(FLAGS) Octagon.cpp

clean:
	rm -f *.o
