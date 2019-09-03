#include "Enemy.h"

Enemy::Enemy(float _startx, float _starty, float _dist,
             int _type) {  // 300 348
  startx = _startx;
  starty = _starty;
  speed = 100;
  dist = _dist;
  type = _type;
  if (_type == 1) {
    mEnemy =
        new AnimatedTexture("spritesheet_2.png", 300, 348, Enemy_WIDTH,
                            Enemy_HEIGHT, 2, 0.5f, AnimatedTexture::horizontal);
  } else if (_type == 2) {
    mEnemy =
        new AnimatedTexture("spritesheet_2.png", 300, 325, Enemy_WIDTH,
                            Enemy_HEIGHT, 2, 0.5f, AnimatedTexture::horizontal);
  } else if (_type == 3) {
    mEnemy =
        new AnimatedTexture("spritesheet_2.png", 300, 279, Enemy_WIDTH,
                            Enemy_HEIGHT, 2, 0.5f, AnimatedTexture::horizontal);
  } else if (_type == 0)
    mEnemy =
        new AnimatedTexture("spritesheet_2.png", 300, 279, Enemy_WIDTH,
                            Enemy_HEIGHT, 2, 0.5f, AnimatedTexture::horizontal);

  mEnemy->Pos(Vector2(startx * Enemy_WIDTH * 2, (starty+0.45) * Enemy_WIDTH * 2));
  // if (_type != 0)
  mEnemy->Scale(Vector2(2, 2));
  // else {
  //   mEnemy->Scale(Vector2(0, 0));
  // }
  mEnemy->flip = SDL_FLIP_HORIZONTAL;
  enemy_speed = speed;
}

Enemy::~Enemy() {
  delete mEnemy;
  mEnemy = nullptr;
}

void Enemy::ChangeType(int type) {
  if (type == 1) {
    mEnemy =
        new AnimatedTexture("spritesheet_2.png", 300, 348, Enemy_WIDTH,
                            Enemy_HEIGHT, 2, 0.5f, AnimatedTexture::horizontal);
  } else if (type == 2) {
    mEnemy =
        new AnimatedTexture("spritesheet_2.png", 300, 325, Enemy_WIDTH,
                            Enemy_HEIGHT, 2, 0.5f, AnimatedTexture::horizontal);
  } else if (type == 3) {
    mEnemy =
        new AnimatedTexture("spritesheet_2.png", 300, 279, Enemy_WIDTH,
                            Enemy_HEIGHT, 2, 0.5f, AnimatedTexture::horizontal);
  }
}

void Enemy::Update(float delta) {
  mEnemy->Update();
  if (mEnemy->Pos(world).x < startx * Enemy_WIDTH * 2) {
    enemy_speed = speed;
    mEnemy->flip = SDL_FLIP_HORIZONTAL;
  } else if (mEnemy->Pos(world).x > (startx + dist) * Enemy_WIDTH * 2) {
    enemy_speed = -speed;
    mEnemy->flip = SDL_FLIP_NONE;
  }
  mEnemy->Translate(Vector2(enemy_speed, 0.0f) * delta);
}
void Enemy::Render(float delta) { mEnemy->Render(); }
void Enemy::Reset() {
  mEnemy->Pos(Vector2(startx * Enemy_WIDTH * 2, starty * Enemy_WIDTH * 2));
}