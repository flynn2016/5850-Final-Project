#ifndef _GAMEENTITY_H
#define _GAMEENTITY_H
#include "MathHelper.h"
#include "iostream"
/**
 *This is a parent class for every game entitiy in the game.
 **/

class GameEntity {
 public:
  enum SPACE {
    local = 0,
    world = 1
  };  // made add a array of children later hardcoded here

  float width, height;
  Vector2 mPos;
  Vector2 mScale;

 private:
  float mRotation;

  bool mActive;
  GameEntity* mParent;

 public:
  GameEntity(float x = 0.0f, float y = 0.0f);
  ~GameEntity();
  /**
   *Set the position of the current GameEntity
   **/
  void Pos(Vector2 pos);
  /**
   *Return the position of the current GameEntity
   **/
  Vector2 Pos(SPACE space = world);
  /**
   *Set the rotation of the current GameEntity
   **/
  void Rotation(float rotation);
  /**
   *Return the rotation of the current GameEntity
   **/
  float Rotation(SPACE space = world);

  /**
   *Set the active state of the current GameEntity
   **/
  void Scale(Vector2 scale);
  Vector2 Scale(SPACE space =world);

  void Active(bool active);
  /**
   *Return the active state of the current GameEntity
   **/
  bool Active();

  /**
   *Set the parent of the current GameEntity
   **/
  void Parent(GameEntity* parent);
  /**
   *Return the parent of the current GameEntity
   **/
  GameEntity* Parent();

  /**
   *Move the GameEntity by the vector given
   **/
  void Translate(Vector2 vec);
  void Rotate(float amount);

  /**
   *Check the collision of the current GameEntity and given GameEntity
   **/
  bool Collides_tile(GameEntity* other);

  /**
   *Update this game entity
   **/
  virtual void Update();
  /**
   *Render this game entity
   **/
  virtual void Render();
};

#endif