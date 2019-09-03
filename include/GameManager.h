/*! \mainpage Platformer by Fan Ling, Wendi Zhang, Hao Tian
 * <h1>Introduction</h1>
 <p>This is the second project for CS 5850.<br> A implementation of a platfomer
 game implemented using C++ and SDL2 Libraries</p>
 * Created by: <li><a href="https://flynn2016.github.io/" target="_blank">Fan
 Ling </a></li>
 Wendi Zhang
 Hao Tian
 */
// should decouple from sdl library

#ifndef _GAMEMANAGER_H
#define _GAMEMANAGER_H
#include "AnimatedTexture.h"
#include "AssetManager.h"
#include "AudioManager.h"
#include "InputManager.h"
#include "LevelManager.h"
#include "Timer.h"
#include "Menu.h"
#include "iostream"
// GameObjects includes:
#include "Character.h"
#include "Enemy.h"
#include "Key.h"
#include "Map.h"
#include "ScoreBoard.h"
#include "Enemy_editor.h"

/**
 *This is a singleton class  managing game logics.
 **/

class GameManager {
 private:

  //TA setting:
  const bool display_fps = false;
  const bool show_background = false;


  static GameManager* sInstance;
  const int FRAME_RATE = 60;
  bool mQuit;
  Graphics* mGraphics;
  Timer* mTimer;
  SDL_Event mEvents;
  Texture* mBackground;
  // Managers
  AssetManager* mAssetMgr;
  InputManager* mInputMgr;
  AudioManager* mAudioMgr;
  LevelManager* mLevelMgr;

  // GameObjects
  ScoreBoard* mScoreBoard;
  Character* mCharacter;
  Map* mMap;
  Key* mKey;
  Menu * mMenu;
  Enemy_editor * mEnemy_editor;


 public:
  /**
   *Point to the instance of this singleton class
   **/
  static GameManager* Instance();
  /**
   *Clear all pointers and itself
   **/
  static void Release();
  /**
   *Run the main game loop
   **/
  void Run();

 private:
  GameManager();
  ~GameManager();

  void EarlyUpdate();
  void Update();
  void LateUpdate();
  void Render();
};

#endif