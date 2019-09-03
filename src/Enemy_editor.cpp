#include "Enemy_editor.h"

Enemy_editor::Enemy_editor() {
  enemy_count = 0;
  enemy_index = 0;
  ReadFromFile();
  for (int i = 0; i < 20; i++) {
    mEnemy[i] = new Enemy(Enemy_data[0 + i * 4], Enemy_data[1 + i * 4],
                          Enemy_data[2 + i * 4], Enemy_data[3 + i * 4]);
  }

  mEnemytexture_1 =
      new AnimatedTexture("spritesheet_2.png", 300, 348, Enemy_WIDTH,
                          Enemy_HEIGHT, 2, 0.5f, AnimatedTexture::horizontal);
  mEnemytexture_2 =
      new AnimatedTexture("spritesheet_2.png", 300, 325, Enemy_WIDTH,
                          Enemy_HEIGHT, 2, 0.5f, AnimatedTexture::horizontal);
  mEnemytexture_3 =
      new AnimatedTexture("spritesheet_2.png", 300, 279, Enemy_WIDTH,
                          Enemy_HEIGHT, 2, 0.5f, AnimatedTexture::horizontal);
}

Enemy_editor::~Enemy_editor() {
  delete mEnemytexture_1;
  mEnemytexture_1 = nullptr;
  delete mEnemytexture_2;
  mEnemytexture_2 = nullptr;
  delete mEnemytexture_3;
  mEnemytexture_3 = nullptr;
  for (int i = 0; i < 20; i++) {
    delete mEnemy[i];
    mEnemy[i] = nullptr;
  }
}
void Enemy_editor::Edit() {
  InputManager *input = InputManager::Instance();
  input->Update();

  // read the current input base on the mouse press position
  Vector2 mousepos = input->MousePos();
  int mpx = mousepos.x / 23 / 2;
  int mpy = mousepos.y / 23 / 2;

  // Change tile to 0

  if (input->KeyDown(SDL_SCANCODE_0)) {
    enemy_index = 0;
  } else if (input->KeyPressed(SDL_SCANCODE_1)) {
    enemy_index = 1;
  } else if (input->KeyPressed(SDL_SCANCODE_2)) {
    enemy_index = 2;
  } else if (input->KeyPressed(SDL_SCANCODE_3)) {
    enemy_index = 3;
  }
  if (input->MouseButtonPressed(input->left) && enemy_count < 20) {
    enemy_count++;
    mEnemy[enemy_count]->startx = mpx+0.5;
    mEnemy[enemy_count]->starty = mpy+0.5;
    Enemy_data[enemy_count * 4 + 0] = mpx;
    Enemy_data[enemy_count * 4 + 1] = mpy;
    temp = mpx;
  }

  if (input->MouseButtonReleased(input->left) && enemy_count < 20) {
    mEnemy[enemy_count]->dist = abs(mpx - temp);
    mEnemy[enemy_count]->ChangeType(enemy_index);
    mEnemy[enemy_count]->mEnemy->Scale(Vector2(2, 2));
    mEnemy[enemy_count]->mEnemy->Pos(
        Vector2((mpx+0.5) * Enemy_WIDTH * 2, (mpy+0.5) * Enemy_WIDTH * 2));
    Enemy_data[enemy_count * 4 + 2] = abs(mpx - temp);
    Enemy_data[enemy_count * 4 + 3] = enemy_index;
  }
  // write into the file
  if (input->KeyDown(SDL_SCANCODE_S)) {
    std::cout << "Saving the enemy ...\n";
    WriteFile();
    std::cout << "Saved\n";
    enemy_index = 0;
  }

  if (input->KeyDown(SDL_SCANCODE_R)) {
    for (int i = 0; i < 80; i++) {
      Enemy_data[i] = 0;
      WriteFile();
    }
  }
}

void Enemy_editor::Update(float delta_time) {
  for (int i = 0; i < 20; i++) {
    mEnemy[i]->Update(delta_time);
  }
}

void Enemy_editor::Render(float delta_time) {
  for (int i = 0; i < 20; i++) {
    mEnemy[i]->Render(delta_time);
  }

  if (enemy_index == 1) {
    mEnemytexture_1->Pos(Vector2(InputManager::Instance()->MousePos().x,
                                 InputManager::Instance()->MousePos().y));
    mEnemytexture_1->Scale(Vector2(2, 2));
    mEnemytexture_1->Render();
  } else if (enemy_index == 2) {
    mEnemytexture_2->Pos(Vector2(InputManager::Instance()->MousePos().x,
                                 InputManager::Instance()->MousePos().y));
    mEnemytexture_2->Scale(Vector2(2, 2));
    mEnemytexture_2->Render();
  } else if (enemy_index == 3) {
    mEnemytexture_3->Pos(Vector2(InputManager::Instance()->MousePos().x,
                                 InputManager::Instance()->MousePos().y));
    mEnemytexture_3->Scale(Vector2(2, 2));
    mEnemytexture_3->Render();
  }
}

void Enemy_editor::Reset() {
  for (int i = 0; i < 20; i++) {
    mEnemy[i]->Reset();
  }
}

void Enemy_editor::ReadFromFile() {
  std::string fullPath = SDL_GetBasePath();
  fullPath.append("Config/Enemy.txt");
  std::ifstream in(fullPath);
  if (!in) {
    std::cout << "Cannot open file.\n";
    return;
  }
  for (int i = 0; i < 20; i++) {
    in >> Enemy_data[0 + i * 4] >> Enemy_data[1 + i * 4] >>
        Enemy_data[2 + i * 4] >> Enemy_data[3 + i * 4];
    if (Enemy_data[0 + i * 4] != 0 || Enemy_data[1 + i * 4] != 0) enemy_count++;
  }
  in.close();
}

void Enemy_editor::WriteFile() {
  int x, y;
  std::string fullPath = SDL_GetBasePath();
  fullPath.append("Config/Enemy.txt");
  std::ofstream out(fullPath);
  if (out.is_open()) {
    for (int j = 0; j < 20; j++) {
      for (int i = 0; i < 4; i++) {
        {
          out << Enemy_data[i + j * 4];
          out << " ";
        }
      }
      out << "\n";
    }
    out.close();
  }
}
