#ifndef _MENU_H
#define _MENU_H
#include "Graphics.h"
#include "InputManager.h"
#include "Texture.h"
#include "iostream"
#define Tile_BRWIDTH 21
#define Tile_BRHEIGHT 21
class Menu {
 public:
  Menu();
  ~Menu();
  void Update(float delta);
  void Render(float delta);
  bool menu_active;
  bool editing_map;
  bool editing_enemy;

 private:
  Texture* mText_1;
  Texture* mText_2;
  Texture* mText_3;
  Texture* mText_4;
  Texture* mButton_1;
  Texture* mButton_2;
  Texture* mButton_1_text;
  Texture* mButton_2_text;
};

#endif
