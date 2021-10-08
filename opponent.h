
#include <iostream>
#include "cpputils/graphics/image.h"
#include "game_element.h"

#ifndef OPPONENT_H
#define OPPONENT_H

class Opponent : public GameElement {
 private:
  int x_;
  int y_;

 public:
  Opponent() {
    x_ = 0;
    y_ = 0;
  }
  Opponent(int x, int y) : GameElement(int x, int y, 50, 50) {}
};

class OpponentProjectile : public GameElement {
 private:
  int x_;
  int y_;

 public:
  OpponentProjectile() {
    x_ = 0;
    y_ = 0;
  }
  OpponentProjectile(int x, int y) : GameElement(int x, int y, 20, 20) {}
};
#endif
