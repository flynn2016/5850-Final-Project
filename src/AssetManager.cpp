#include "AssetManager.h"
AssetManager* AssetManager::sInstance = nullptr;

AssetManager* AssetManager::Instance() {
  if (sInstance == nullptr) sInstance = new AssetManager();

  return sInstance;
}

void AssetManager::Release() {
  delete sInstance;
  sInstance = nullptr;
}

AssetManager::AssetManager() {}

AssetManager::~AssetManager() {
  // Freeing all loaded Textures
  for (auto tex : mTextures) {
    if (tex.second != nullptr) {
      SDL_DestroyTexture(tex.second);
    }
  }
  mTextures.clear();

  for (auto text : mText) {
    if (text.second != nullptr) {
      SDL_DestroyTexture(text.second);
    }
  }

  mText.clear();

  for (auto font : mFonts) {
    if (font.second != nullptr) {
      TTF_CloseFont(font.second);
    }
  }
  mFonts.clear();

  for (auto music : mMusic) {
    if (music.second != nullptr) {
      Mix_FreeMusic(music.second);
    }
  }

  mMusic.clear();

  for (auto sfx : mSFX) {
    if (sfx.second != nullptr) {
      Mix_FreeChunk(sfx.second);
    }
  }

  mSFX.clear();
}

SDL_Texture* AssetManager::GetTexture(std::string filename) {
  std::string fullPath = SDL_GetBasePath();
  fullPath.append("Assets/" + filename);
  if (mTextures[fullPath] == nullptr)
    mTextures[fullPath] = Graphics::Instance()->LoadTexture(fullPath);
  return mTextures[fullPath];
}

TTF_Font* AssetManager::GetFont(std::string filename, int size) {
  std::string fullPath = SDL_GetBasePath();
  fullPath.append("Assets/" + filename);
  std::string key = fullPath + (char)size;
  if (mFonts[key] == nullptr) {
    mFonts[key] = TTF_OpenFont(fullPath.c_str(), size);
    if (mFonts[key] == nullptr)
      std::cout << "Font Loading Error: "
                << "filename:" << filename.c_str()
                << "Error:" << TTF_GetError();
  }
  return mFonts[key];
}

SDL_Texture* AssetManager::GetText(std::string text, std::string filename,
                                   int size, SDL_Color color) {
  TTF_Font* font = GetFont(filename, size);
  std::string key = text + filename + (char)size + (char)color.r +
                    (char)color.b + (char)color.g;
  if (mText[key] == nullptr)
    mText[key] = Graphics::Instance()->CreateTextTexture(font, text, color);
  return mText[key];
}

Mix_Music* AssetManager::GetMusic(std::string filename) {
  std::string fullPath = SDL_GetBasePath();
  fullPath.append("Assets/" + filename);
  if (mMusic[fullPath] == nullptr) {
    mMusic[fullPath] = Mix_LoadMUS(fullPath.c_str());
    if (mMusic[fullPath] == nullptr)
      printf("Music Loading Error: File-%s Error-%s", filename.c_str(),
             Mix_GetError());
  }
  return mMusic[fullPath];
}

Mix_Chunk* AssetManager::GetSFX(std::string filename) {
  std::string fullPath = SDL_GetBasePath();
  fullPath.append("Assets/" + filename);
  if (mSFX[fullPath] == nullptr) {
    mSFX[fullPath] = Mix_LoadWAV(fullPath.c_str());
    if (mSFX[fullPath] == nullptr)
      printf("SFX Loading Error: File-%s Error-%s", filename.c_str(),
             Mix_GetError());
  }
  return mSFX[fullPath];
}