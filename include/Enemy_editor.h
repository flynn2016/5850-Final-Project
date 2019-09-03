#ifndef ENEMY_EDITOR_H_
#define ENEMY_EDITOR_H_
#include "Enemy.h"
#include "InputManager.h"
#include "Menu.h"
#include "Texture.h"
#include "cstdlib"
#include "Timer.h"
#include "fstream"
#define Tile_BRWIDTH 21
#define Tile_BRHEIGHT 21

class Enemy_editor {
 public:
  Enemy_editor();
  ~Enemy_editor();
  /**
   *Update the information of paddle
   **/
  void Update(float delta_time);
  /**
   *Render the information of paddle
   **/
  void Render(float delta_time);
  void Reset();
  Enemy* mEnemy[20];
  int Enemy_data[80];
  int enemy_count;
  void Edit();

 private:
  int temp;
  int enemy_index;
  Texture* mEnemytexture_1;
  Texture* mEnemytexture_2;
  Texture* mEnemytexture_3;

  void ReadFromFile();
  void WriteFile();
};
#endif
