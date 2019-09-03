#ifndef _ENEMY_H
#define _ENEMY_H
#include "AnimatedTexture.h"

#define Enemy_WIDTH 23
#define Enemy_HEIGHT 23

/**
 *This is a class controls the movement of Enemy.
 **/

class Enemy : public GameEntity {
 public:
  AnimatedTexture* mEnemy;
  Enemy(float _startx, float _starty, float _dist, int _type);
  ~Enemy();
  /**
   *Update Enemy position and game logic
   **/
  void Update(float delta);
  /**
   *Render the Character
   **/
  void Render(float delta);
  void ChangeType(int type);

  void Reset();
  float startx;
  float starty;
  float type;
  float dist;

 private:
  float enemy_speed;
  float speed;
};

#endif
