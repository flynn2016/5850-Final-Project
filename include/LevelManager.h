#ifndef _LEVELMANAGER_H
#define _LEVELMANAGER_H
#include <AssetManager.h>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

/**
 *This is a singleton class managing different levels
 **/
struct level_config {
  int level;
  float ball_speed;
  float paddle_width;
};

struct language {
  std::string lives;
  std::string score;
  std::string menu;
  std::string win;
  std::string lose;
};

class LevelManager {
 private:
  static LevelManager* sInstance;

 public:
  vector<level_config> table;
  /**
   *Pointer to the instance of AudioManager.
   **/
  static LevelManager* Instance();
  /**
   *Clear all pointers and itslef
   **/
  static void Release();
  /**
   *Read from given file path
   **/
  void ReadFromFile(std::string filename);

  int current_level;
  level_config current_config;
  bool level_set;

 private:
  LevelManager();
  ~LevelManager();
};

#endif