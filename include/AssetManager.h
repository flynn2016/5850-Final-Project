#ifndef _ASSETMANAGER_H
#define _ASSETMANAGER_H
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include <map>
#include "Graphics.h"
/**
 *This is a singleton class for AseetManager. It manages different types of
 *assets return them for other class to use.
 **/
class AssetManager {
 private:
  static AssetManager* sInstance;
  std::map<std::string, SDL_Texture*> mTextures;
  std::map<std::string, SDL_Texture*> mText;
  std::map<std::string, TTF_Font*> mFonts;
  std::map<std::string, Mix_Music*> mMusic;
  std::map<std::string, Mix_Chunk*> mSFX;

 public:
  static AssetManager* Instance();
  static void Release();
  /**
   *Get the texture with the given file path
   **/
  SDL_Texture* GetTexture(std::string filename);
  /**
   *Get the text with the given file path
   **/
  SDL_Texture* GetText(std::string text, std::string filename, int size,
                       SDL_Color color);
  /**
   *Get the music with the given file path
   **/
  Mix_Music* GetMusic(std::string filename);
  /**
   *Get the sound effect with the given file path
   **/
  Mix_Chunk* GetSFX(std::string filename);

 private:
  AssetManager();
  ~AssetManager();
  TTF_Font* GetFont(std::string filename, int size);
};
#endif