LIBS=-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

all: ZombieArena

Player.o:
	g++ -std=c++11 -c Player.cpp -o Player.o

ZombieArena.o: ZombieArena.cpp
	g++ -std=c++11 -c ZombieArena.cpp -o ZombieArena.o

ZombieArena: ZombieArena.o
	g++ -o ZombieArena ZombieArena.o $(LIBS)

run:
	./ZombieArena

clean:
	@echo "Removing files"
	rm -rf ZombieArena *.o
