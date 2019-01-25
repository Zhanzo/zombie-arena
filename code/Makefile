LIBS=-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
CXX := g++

all: ZombieArena

%.o: %.cpp
	$(CXX) -c $< -o $@

%.o: %.hpp
	$(CXX) -c $< -o $@

ZombieArena: ZombieArena.o Player.o
	$(CXX) -o ZombieArena ZombieArena.o Player.o $(LIBS)

clean:
	@echo "Removing files"
	rm -rf ZombieArena *.o
