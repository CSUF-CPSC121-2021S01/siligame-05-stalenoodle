#include "game_element.h"
#include <iostream>
#include <string>

void GameElement::Draw(graphics::Image &reference) {
  reference.DrawRectangle(x_, y_, 5, 5, 0, 0, 0);
}
