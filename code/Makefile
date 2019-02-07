LIBS=-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
CXX := g++

all: ZombieArena

%.o: %.cpp
	$(CXX) -c $< -o $@

%.o: %.h
	$(CXX) -c $< -o $@

ZombieArena: ZombieArena.o Player.o CreateBackground.o Zombie.o TextureHolder.o CreateHorde.o
	$(CXX) -o ZombieArena ZombieArena.o Player.o CreateBackground.o Zombie.o TextureHolder.o CreateHorde.o $(LIBS)

clean:
	@echo "Removing files"
	rm -rf ZombieArena *.o
