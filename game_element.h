
#include <iostream>
#include <string>
#include "cpputils/graphics/image.h"

class GameElement {
 public:
  GameElement() {
    int x_ = 0;
    int y_ = 0;
    int width_ = 50;
    int height_ = 50;
  }
  GameElement(int &x, int &y, int &width, int &height)
      : x_(x), y_(y), width_(width), height_(height) {}
  int GetX() { return x_; }
  void SetX(int x) { x_ = x; }
  int GetY() { return y_; }
  void SetY(int y) { y_ = y; }
  int GetWidth() { return width_; }
  int GetHeight() { return height_; }
  void Draw(graphics::Image &reference);

 private:
  int x_;
  int y_;
  int width_;
  int height_;
};
