#include "opponent.h"
#include <iostream>
#include "cpputils/graphics/image.h"

void Opponent::Draw(graphics::Image& reference) {
  graphics::Image skull;
  skull.Load("skull.bmp");
  for (int i = 0; i < GetHeight(); i++) {
    for (int j = 0; j < GetWidth(); j++) {
      reference.SetColor(x_ + j, y_ + i, skull.GetColor(j, i));
    }
  }
}

void OpponentProjectile::Draw(graphics::Image& reference) {
  graphics::Image arrow;
  arrow.Load("arrow.bmp");
  for (int i = 0; i < GetHeight(); i++) {
    for (int j = 0; j < GetWidth(); j++) {
      reference.SetColor(x_ + j, y_ + i, arrow.GetColor(j, i));
    }
  }
}
