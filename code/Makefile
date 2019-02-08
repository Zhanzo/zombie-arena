LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
CXX = g++
DEPS = Bullet.h Player.h Pickup.h TextureHolder.h Zombie.h ZombieArena.h
OBJ = ZombieArena.o Player.o Pickup.o CreateBackground.o Zombie.o TextureHolder.o CreateHorde.o Bullet.cpp

all: ZombieArena

%.o: %.cpp $(DEPS)
	$(CXX) -c $< -o $@

ZombieArena: $(OBJ)
	$(CXX) -o $@ $^ $(LIBS)

clean:
	@echo "Removing files"
	rm -rf ZombieArena *.o
