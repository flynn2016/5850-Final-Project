#ifndef _GRAPHICS_H
#define _GRAPHICS_H
#include <AssetManager.h>
#include <SDL.h>
#include <iostream>
#include <string>
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"

/**
 *This is a singleton class managing rendering textures.
 **/

class Graphics {
 public:
  const int SCREEN_WIDTH = 1280;
  const int SCREEN_HEIGHT = 720;

 private:
  static Graphics* sInstance;
  static bool sInitialized;
  SDL_Window* mWindow;
  SDL_Renderer* mRenderer;
  SDL_Surface* mBackBuffer;

 public:
  /**
   *Point to the instance of this singleton class
   **/
  static Graphics* Instance();
  /**
   *Release all pointers and itself
   **/
  static void Release();
  /**
   *Initalize graphic settings
   **/
  static bool Initialized();
  /**
   *Load SDL texture
   **/
  SDL_Texture* LoadTexture(std::string path);
  /**
   *Create the texture with given font, text and color
   **/
  SDL_Texture* CreateTextTexture(TTF_Font* font, std::string text,
                                 SDL_Color color);

  /**
   * Clear the buffer before drawing
   **/
  void ClearBackBuffer();
  /**
   *Render the texture
   **/
  void DrawTexture(SDL_Texture* tex, SDL_Rect* clip = NULL,
                   SDL_Rect* rend = NULL, float angle = 0.0f, 
                   SDL_RendererFlip flip = SDL_FLIP_NONE,bool alpha=false);

  /**
   *Render everything
   **/
  void Render();

 private:
  Graphics();
  ~Graphics();
  bool Init();
};
#endif
