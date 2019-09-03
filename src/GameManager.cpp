#include "GameManager.h"

GameManager* GameManager::sInstance = nullptr;

GameManager* GameManager::Instance() {
  if (sInstance == nullptr) sInstance = new GameManager();

  return sInstance;
}
void GameManager::Release() {
  delete sInstance;
  sInstance = nullptr;
}

GameManager::GameManager() {
  mQuit = false;

  // Initialize SDL
  mGraphics = Graphics::Instance();

  // Quits the game if SDL fails to initialize
  if (!Graphics::Initialized()) mQuit = true;

  mAssetMgr = AssetManager::Instance();
  mInputMgr = InputManager::Instance();
  mAudioMgr = AudioManager::Instance();
  mLevelMgr = LevelManager::Instance();
  mTimer = Timer::Instance();
  mEnemy_editor = new Enemy_editor();
  mMenu = new Menu();
  mKey = new Key();
  mMap = new Map();
  mCharacter = new Character(mMap);
  mScoreBoard = new ScoreBoard();
  mBackground = new Texture("backgrounds.png", 0, 0, 231, 63);
  mBackground->Pos(Vector2(640, 320));
  mBackground->Scale(Vector2(12, 12));

  // bgm
  mAudioMgr->PlayMusic("8-bit.wav", -1);
  mLevelMgr->ReadFromFile("game.config");
}

GameManager::~GameManager() {
  delete mScoreBoard;
  mScoreBoard = nullptr;
  delete mCharacter;
  mCharacter = nullptr;

  delete mMap;
  mMap = nullptr;
  delete mMenu;
  mMenu = nullptr;
  delete mKey;
  mKey = nullptr;
  AssetManager::Release();
  mAssetMgr = nullptr;
  Graphics::Release();
  mGraphics = nullptr;
  InputManager::Release();
  mInputMgr = nullptr;
  AudioManager::Release();
  mAudioMgr = nullptr;
  Timer::Release();
  mTimer = nullptr;
  LevelManager::Release();
  mLevelMgr = nullptr;
}

void GameManager::EarlyUpdate() { mInputMgr->Update(); }

void GameManager::Update() {
  mScoreBoard->Update();

  mEnemy_editor->Update(mTimer->DeltaTime());

  if (mMenu->editing_map) {
    mMap->Update(mTimer->DeltaTime());
  } else if (mMenu->editing_enemy) {
    //mEnemy_editor->Reset();
    mEnemy_editor->Edit();
  }
  mMenu->Update(mTimer->DeltaTime());
  if (!mCharacter->win) {
    mCharacter->Update(mTimer->DeltaTime());
  } else {
    mKey->Update(mTimer->DeltaTime());
  }

  for (int i = 0; i < mEnemy_editor->enemy_count; i++) {
    if (mCharacter->Collides_enemy(mEnemy_editor->mEnemy[i])) {
      mScoreBoard->MinusLife();
    }
  }
}

void GameManager::LateUpdate() {
  mInputMgr->UpdatePrevInput();  // right before Reset
  mTimer->Reset();
}

void GameManager::Render() {
  mGraphics->ClearBackBuffer();
  if (show_background) {
    mBackground->Render();
  }
  if (!mScoreBoard->lose) {
    mCharacter->Render(mTimer->DeltaTime());
  }
  mEnemy_editor->Render(mTimer->DeltaTime());
  mMap->Render(mTimer->DeltaTime());
  mScoreBoard->Render();
  if (mCharacter->win) {
    mKey->Render(mTimer->DeltaTime());
  }

  if (mScoreBoard->lose) {
    mKey->RenderLost();
  }
  mMenu->Render(mTimer->DeltaTime());

  mGraphics->Render();
}

void GameManager::Run() {
  while (!mQuit) {
    mTimer->Update();
    while (SDL_PollEvent(&mEvents) != 0) {
      // Checks if the user quit the game
      if (mEvents.type == SDL_QUIT || mInputMgr->KeyDown(SDL_SCANCODE_Q)) {
        mQuit = true;
      }
    }
    if (mTimer->DeltaTime() > (1.0f / FRAME_RATE)) {
      if (display_fps) {
        std::cout << "FPS:" << 1 / mTimer->DeltaTime() << "\n" << std::endl;
      }
      EarlyUpdate();
      Update();
      LateUpdate();  // physics
      Render();
    }
  }
}
