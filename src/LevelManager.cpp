#include "LevelManager.h"

LevelManager* LevelManager::sInstance = nullptr;

LevelManager* LevelManager::Instance() {
  if (sInstance == nullptr) sInstance = new LevelManager();
  return sInstance;
}

void LevelManager::Release() {
  delete sInstance;
  sInstance = nullptr;
}

LevelManager::LevelManager() {
  current_level = 0;
  current_config.level = 0;
  current_config.ball_speed = 0;
  current_config.paddle_width = 0;
  level_set=false;
}
LevelManager::~LevelManager() {}

void LevelManager::ReadFromFile(std::string filename) {
  table.clear();
  std::string fullPath = SDL_GetBasePath();
  fullPath.append("Config/" + filename);
  ifstream config;
  config.open(fullPath);
  level_config temp;
  while (config >> temp.level >> temp.ball_speed >> temp.paddle_width) {
    table.push_back(temp);
  }
}
