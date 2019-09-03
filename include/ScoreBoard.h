#ifndef _SCOREBOARD_H
#define _SCOREBOARD_H
#include <fstream>
#include <string>
#include <vector>
#include "AudioManager.h"
#include "LevelManager.h"
#include "Texture.h"

/**
 *This is a class for updating UI and scores.
 **/

class ScoreBoard : public GameEntity {
 private:
  Texture* mLife[3];
  void ClearBoard();
  int lifes;
  int const Tile_WIDTH = 21;
  int const Tile_HEIGHT = 21;

 public:
  ScoreBoard();
  ~ScoreBoard();
  /**
   *Update scoreboard
   **/
  void Update();
  /**
   *Render scoreboard
   **/
  void Render();
  /**
   *take away one life
   **/
  void MinusLife();
  bool lose;
  bool win;
};

#endif