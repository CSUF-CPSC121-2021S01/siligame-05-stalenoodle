#include <iostream>
#include "cpputils/graphics/image.h"
#include "opponent.h"
#include "player.h"

int main() {
  graphics::Image background(800, 600);
  Player wizard;
  PlayerProjectile fireball;
  Opponent skull;
  OpponentProjectile arrow;

  wizard.SetX(300);
  wizard.Draw(background);
  fireball.SetX(350);
  fireball.SetY(50);
  fireball.Draw(background);

  skull.Draw(background);
  arrow.SetX(100);
  arrow.SetY(50);
  arrow.Draw(background);

  background.ShowUntilClosed();
  return 0;
}
