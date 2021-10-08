#include "player.h"
#include <iostream>
#include "cpputils/graphics/image.h"
#include "opponent.h"

void Player::Draw(graphics::Image &reference) {
  graphics::Image wizard;
  wizard.Load("wizard.bmp");
  for (int i = 0; i < GetHeight(); i++) {
    for (int j = 0; j < GetWidth(); j++) {
      reference.SetColor(x_ + j, y_ + i, wizard.GetColor(j, i));
    }
  }
}

void PlayerProjectile::Draw(graphics::Image &reference) {
  graphics::Image fireball;
  fireball.Load("fireball.bmp");
  for (int i = 0; i < GetHeight(); i++) {
    for (int j = 0; j < GetWidth(); j++) {
      reference.SetColor(x_ + j, y_ + i, fireball.GetColor(j, i));
    }
  }
}
// Intersections
bool PlayerWinLose(int opponent_x, int opponent_y, int player_x, int player_y) {
  bool intersect = false;
  for (int i = 0; i < 50; i++) {
    for (int j = 0; i < 50; j++) {
      int x = player_x + i;
      int y = player_y + j;
      if (x == opponent_x && y == opponent_y) {
        intersect = true;
      }
    }
    return intersect;
  }
  return intersect;
}

bool Player::IntersectsWith(Opponent opponent) {
  int x = opponent.GetX();
  int y = opponent.GetY();
  bool check = false;
  for (int i = 0; i < 50; i++) {
    for (int j = 0; j < 50; j++) {
      int x1 = x + i;
      int y1 = y + j;
      check = PlayerWinLose(x1, y1, x_, y_);
      if (check) {
        return check;
      }
    }
  }
  return check;
}

bool Player::IntersectsWith(OpponentProjectile opponent) {
  int y = opponent.GetY();
  int x = opponent.GetX();
  bool check = false;
  for (int i = 0; i < 50; i++) {
    for (int j = 0; j < 50; j++) {
      int x1 = x + i;
      int y1 = y + j;
      check = PlayerWinLose(x1, y1, x_, y_);
      if (check) {
        return check;
      }
    }
  }
  return check;
}

bool PlayerProjectile::IntersectsWith(Opponent opponent) {
  int x = opponent.GetX();
  int y = opponent.GetY();
  bool check = false;
  for (int i = 0; i < 50; i++) {
    for (int j = 0; j < 50; i++) {
      int x1 = x + i;
      int y1 = y + j;
      check = PlayerWinLose(x1, y1, x_, y_);
      if (check) {
        return check;
      }
    }
  }
  return check;
}
