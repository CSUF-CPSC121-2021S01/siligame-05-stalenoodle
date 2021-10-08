#include <iostream>
#include "cpputils/graphics/image.h"
#include "opponent.h"
#include "player.h"

class Game {
 public:
  Game() : Game(800, 600) {}
  Game(int width, int height) : width_(width), height_(height) {}
  graphics::Image &GetScreen() { return screen_; }

 private:
  int width_;
  int height_;
}
