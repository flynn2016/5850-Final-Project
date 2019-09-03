#ifndef _Key_H
#define _Key_H
#include "AnimatedTexture.h"

#define Key_WIDTH 200
#define Key_HEIGHT 200

/**
 *This is a class controls the movement of Key.
 **/

class Key : public GameEntity {
 public:
  Texture * mKey;
  Texture* mWin;
  Texture* mLose;
  Key();
  ~Key();
  /**
   *Update Key position and game logic
   **/
  void Update(float delta);
  /**
   *Render the Character
   **/
  void Render(float delta);
  void RenderLost();

 private:
  float x= 50.0f;
  float y= 50.0f;
  float scale = 0.3f;
  bool finished = false;
};

#endif
