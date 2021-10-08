#include <iostream>
#include "cpputils/graphics/image.h"
#include "opponent.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player : public GameElement {
 private:
  int x_;
  int y_;

 public:
  void Draw(graphics::Image &reference);
  bool IntersectsWith(Opponent);
  bool IntersectsWith(OpponentProjectile);
  // Constructors
  Player() {
    x_ = 0;
    y_ = 0;
  }

  Player(int x, int y) : GameElement(int x, int y, 50, 50) {}
};

class PlayerProjectile : public GameElement {
 private:
  int x_;
  int y_;

 public:
  void Draw(graphics::Image &reference);
  bool IntersectsWith(Opponent);
  // Constructors
  PlayerProjectile() {
    x_ = 0;
    y_ = 0;
  }

  PlayerProjectile(int x, int y) : GameElement(int x, int y, 50, 50) {}
};
#endif
