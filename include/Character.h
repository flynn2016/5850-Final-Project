#ifndef _CHARACTER_H
#define _CHARACTER_H
#include "AnimatedTexture.h"
#include "Enemy.h"
#include "InputManager.h"
#include "Map.h"

#define Character_WIDTH 23
#define Character_HEIGHT 23

/**
 *This is a class controls the movement of the Character.
 **/
const float jumpHeight = 50.0f;
const float timeToApex = 1.0;

class Character : public GameEntity {
 public:
  bool win;
  AnimatedTexture* mCharacter;
  Map* mMap;
  Character(Map* mMap);
  ~Character();
  /**
   *Update Character position and game logic
   **/
  void Move(float delta);
  void DetectCollision();
  void Gravity(float delta);
  void Update(float delta);
  /**
   *Render the Character
   **/
  void Render(float delta);
  bool Collides_enemy(Enemy* other);

 private:
  // physics
  float g_value = (2 * jumpHeight) / pow(timeToApex, 2);
  float initJumpVel = sqrt(2 * g_value * jumpHeight);
  float Character_speed = 0.0f;
  float Character_speed_y = 0.0f;

  // collison check
  bool falling;
  bool grounded;
  bool jumping;
  bool collided;
  bool leftBlocked;
  bool rightBlocked;
  bool upBlocked;
  bool downBlocked;
  InputManager* mInputMgr;
  bool Collides_tile(Tile* other);
};

#endif
