#ifndef MAP_H_
#define MAP_H_
#include "InputManager.h"
#include "Texture.h"
#include "fstream"
#include "Menu.h"

#define Map_WIDTH 32
#define Map_HEIGHT 18
#define Tile_BRWIDTH 21
#define Tile_BRHEIGHT 21
#define Tile_SCALE 2
/**
 *This is a class controls the game Tile
 **/
class Tile : public GameEntity {
 public:
  int type;
};

class Map : public GameEntity {
 public:
  Map();
  ~Map();
  /**
   *Update the information of paddle
   **/
  void Update(float delta_time);
  /**
   *Render the information of paddle
   **/
  void Render(float delta_time);
  Tile tiles[Map_WIDTH][Map_HEIGHT];

 private:
  int tile_index;
  Texture* mTiletexture_1;
  Texture* mTiletexture_2;
  Texture* mTiletexture_3;
  Texture* mTiletexture_4;
  Texture* mTiletexture_5;
  Texture* mTiletexture_6;
  Texture* mTiletexture_7;
  Texture* mTiletexture_8;
  void ReadFromFile(int map_number);
  void WriteFile(int map_number);
};
#endif