// 
// Call of Dungeon for Arduboy
// 

#include "Arduboy.h"
#include "game.h"

Arduboy mArduboy;
Game mGame;

void setup() {
  mArduboy.begin();
  mArduboy.initRandomSeed();
  mArduboy.setFrameRate(60);
}

void loop() {
  if (!(mArduboy.nextFrame())) {
    return;
  }

  mArduboy.clear();
  mGame.check_input();
  mGame.do_state();
  mGame.draw();
  mArduboy.display();
}

