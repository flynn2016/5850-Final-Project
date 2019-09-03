#include "Character.h"

Character::Character(Map* _mMap) {
  mCharacter = new AnimatedTexture("spritesheet_2.png", 438, 2, Character_WIDTH,
                                   Character_HEIGHT, 3, 0.5f,
                                   AnimatedTexture::horizontal);
  mCharacter->Pos(Vector2(100, 600));
  mCharacter->Scale(Vector2(Tile_SCALE, Tile_SCALE));
  mInputMgr = InputManager::Instance();
  mMap = _mMap;
  grounded = false;
  leftBlocked = false;
  rightBlocked = false;
  upBlocked = false;
  downBlocked = false;
  collided = false;
  jumping = false;
  falling = false;
  win = false;
}

Character::~Character() {
  mInputMgr = nullptr;
  delete mCharacter;
  mCharacter = nullptr;
}

void Character::Update(float delta) {
  DetectCollision();
  Move(delta);
  Gravity(delta);
}

void Character::Render(float delta) { mCharacter->Render(); }

void Character::Gravity(float delta) {
  if (mInputMgr->KeyPressed(SDL_SCANCODE_SPACE) && !upBlocked && !jumping) {
    jumping = true;
    grounded = false;
    mCharacter->ChangeAnimation(622, 3, 1);
    mCharacter->flip = SDL_FLIP_NONE;
    Character_speed_y -= 600;
  }
  if (falling) {
    Character_speed_y += 100;
    falling = false;
  }
  if (!grounded) {
    Character_speed_y += 20;
    mCharacter->Translate(Vector2(0.0f, Character_speed_y) * delta);
  } else  // grounded
  {
    Character_speed_y = 0;
    mCharacter->ChangeAnimation(438, 3, 3);
    jumping = false;
  }
}

void Character::Move(float delta) {
  mCharacter->Update();
  if (mInputMgr->KeyDown(SDL_SCANCODE_LEFT) &&
      !(mCharacter->Pos(world).x < Tile_SCALE * Tile_BRHEIGHT / 2)) {
    rightBlocked = false;
    mCharacter->ChangeAnimation(645, 3, 2);
    mCharacter->flip = SDL_FLIP_HORIZONTAL;
    Character_speed = -400;
  } else if (mInputMgr->KeyDown(SDL_SCANCODE_RIGHT) &&
             !(mCharacter->Pos(world).x >
               1280 - Tile_SCALE * Tile_BRHEIGHT / 2)) {
    leftBlocked = false;
    mCharacter->ChangeAnimation(645, 3, 2);
    mCharacter->flip = SDL_FLIP_NONE;
    Character_speed = 400;
  } else
    Character_speed = 0;
  mCharacter->Translate(Vector2(Character_speed, 0.0f) * delta);
}

void Character::DetectCollision() {
  collided = false;
  for (int i = 0; i < Map_WIDTH; i++) {
    for (int j = 0; j < Map_HEIGHT; j++) {
      if (mMap->tiles[i][j].type != 0) {
        if (Collides_tile(&mMap->tiles[i][j])) {
          collided = true;
        }
      }
    }
  }

  if (!collided) grounded = false;
}

bool Character::Collides_enemy(Enemy* other) {
  Vector2 myPos = mCharacter->Pos(world);
  Vector2 enemyPos = other->mEnemy->Pos(world);
  if (myPos.x - Tile_SCALE * Tile_BRWIDTH / 2 <=
          enemyPos.x + Tile_SCALE * Tile_BRWIDTH / 2 &&
      myPos.x + Tile_SCALE * Tile_BRWIDTH / 2 >=
          enemyPos.x - Tile_SCALE * Tile_BRWIDTH / 2 &&
      myPos.y - Tile_SCALE * Tile_BRHEIGHT / 2 <=
          enemyPos.y + Tile_SCALE * Tile_BRHEIGHT / 2 &&
      myPos.y + Tile_SCALE * Tile_BRHEIGHT / 2 >=
          enemyPos.y - Tile_SCALE * Tile_BRHEIGHT / 2) {
    mCharacter->Pos(Vector2(100, 600));
    return true;
  } else
    return false;
}

bool Character::Collides_tile(Tile* other) {
  Vector2 temp = Vector2(0, 0);
  Vector2 myPos = Vector2(0, 0);
  myPos = mCharacter->Pos(world);
  // std::cout<< myPos.x - width / 2<<" "<<other->Pos(world).x << "\n"; //don't
  // forget the scale
  if (myPos.x - Tile_SCALE * Tile_BRWIDTH / 2 <=
          other->Pos(world).x + Tile_SCALE * Tile_BRWIDTH / 2 &&
      myPos.x + Tile_SCALE * Tile_BRWIDTH / 2 >=
          other->Pos(world).x - Tile_SCALE * Tile_BRWIDTH / 2 &&
      myPos.y - Tile_SCALE * Tile_BRHEIGHT / 2 <=
          other->Pos(world).y + Tile_SCALE * Tile_BRHEIGHT / 2 &&
      myPos.y + Tile_SCALE * Tile_BRHEIGHT / 2 >=
          other->Pos(world).y - Tile_SCALE * Tile_BRHEIGHT / 2) {
    if (other->type == 8) {
      win = true;
    }
    temp.x = other->Pos(world).x;
    temp.y = other->Pos(world).y;
    if (myPos.y > other->Pos(world).y &&
        abs(myPos.x - other->Pos(world).x) <
            Tile_SCALE * Tile_BRHEIGHT /
                2) {  // only detect when falling upon brick
      upBlocked = true;
      falling = true;
      mCharacter->Pos(Vector2(myPos.x, other->Pos(world).y +
                                           Tile_SCALE * Tile_BRHEIGHT +
                                           1));  // correct up collision
    }
    if (myPos.y < other->Pos(world).y &&
        abs(myPos.x - other->Pos(world).x) < Tile_SCALE * Tile_BRHEIGHT / 2) {
      downBlocked = true;
      upBlocked = false;
      grounded = true;
      mCharacter->Pos(Vector2(myPos.x, other->Pos(world).y -
                                           Tile_SCALE * Tile_BRHEIGHT -
                                           1));  // correct down collision
    }

    if (myPos.x < other->Pos(world).x &&
        abs(myPos.y - other->Pos(world).y) < Tile_SCALE * Tile_BRHEIGHT / 2) {
      rightBlocked = true;
      mCharacter->Pos(Vector2(
          other->Pos(world).x - Tile_SCALE * Tile_BRHEIGHT - 1, myPos.y));
    }
    if (myPos.x > other->Pos(world).x &&
        abs(myPos.y - other->Pos(world).y) < Tile_SCALE * Tile_BRHEIGHT / 2) {
      leftBlocked = true;
      mCharacter->Pos(Vector2(
          other->Pos(world).x + Tile_SCALE * Tile_BRHEIGHT + 1, myPos.y));
    }
    return true;

  } else {
    return false;
  }
}