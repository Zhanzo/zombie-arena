#include <SFML/Graphics.hpp>
#include "Player.h"

using namespace sf;

int main() {
  // The game will always be in one of the four states
  enum class State {PAUSED, LEVELING_UP, GAME_OVER, PLAYING};
  
  // Start with the GAME_OVER state
  State state = State::GAME_OVER;

  // Get the screen resolution and create an SFML window
  Vector2f resolution;
  resolution.x = VideoMode::getDesktopMode().width;
  resolution.y = VideoMode::getDesktopMode().height;

  RenderWindow.window(VideoMode(resolution.x, resolution.y),
		      "Zombie Arena", Style::Fullscreen);

  // Create an SFML View for the main action
  View mainView(FloatRect(0, 0, resolution.x, resolution.y));
  // Here is our clock for timing everything
  Clock clock;

  // How long has the PLAYING state been active?
  Time gameTimeTotal;
  // Where is the mouse in relation to world coordinates?
  Vector2f mouseWorldPosition;

  // Where is the mouse in relation to screen coordinates?
  Vector2i mouseScreenPosition;

  // Create an instance of the Player class
  Player player;

  // The boundaries of the arena
  IntRect arena;

  // The main game loop
  while (window.isOpen()) {
    /*
    ************
    Handle input
    ************
    */

    // Handle events by polling
    Event event;
    while (window.pollEvent(event)) {
      // Pause a game while playing
      if (event.key.code == Keyboard::Return && state == State::Playing) {
	state = State::PAUSED;
      }
      // Restart while paused
      else if (event.key.code == Keyboard::Return && state == State::Paused) {
	state = State::Playing;
	// Reset the clock so there isn't a frame jump
	clock.restart();
      }
      // Start a new game while in GAME_OVER state
      else if (event.key.code == Keyboard::Return &&
	       state == State::GAME_OVER) {
	state = State::LEVELING_UP;
      }
      if (state == State::PLAYING) {

      }
    } // End event polling

    // Handle the player quitting
    if (Keyboard::isKeyPressed(Keyboard::Escape)) {
      window.close();
    }

    // Handle WASD while playing
    if (state == State::PLAYING) {
      // Handle the pressing and releasing of the WASD keys
      if (Keyboard::isKeyPressed(Keyboard::W)) {
	player.moveUp();
      } else {
	player.stopUp();
      }

      if (Keyboard::isKeyPressed(Keyboard::S)) {
	player.moveDown();
      } else {
	player.stopDown();
      }

      if (Keyboard::isKeyPressed(Keyboard::A)) {
	player.moveLeft();
      } else {
	player.stopLeft();
      }

      if (Keyboard::isKeyPressed(Keyboard::D)) {
	player.moveRight();
      } else {
	player.stopRight();
      }
    } // End WASD while playing

    // Handle the LEVELING_UP state
    
    
  } // End game loop

  return 0;
}
