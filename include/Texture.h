#ifndef _TEXTURE_H
#define _TEXTURE_H
#include "AssetManager.h"
#include "GameEntity.h"
/**
 *This class inherites from GameEntity, which I don't think is desired. Should try to decouple transform information from texture.
 **/
class Texture : public GameEntity {
 protected:
  SDL_Texture* mTex;
  Graphics* mGraphics;
  int mWidth;
  int mHeight;

  bool mClipped;
  SDL_Rect mRenderRect;
  SDL_Rect mClipRect;


 public:
    SDL_RendererFlip flip;
  /**
   *Get the texture from give file path
   **/
  Texture(std::string filename);
  /**
   *Get the texture from give file path with position and dimension
   **/
  Texture(std::string filename, int x, int y, int w, int h);
  /**
   *Get the font texture from give file path with font size and color
   **/
  Texture(std::string text, std::string fontpath, int size, SDL_Color color);
  ~Texture();

  void ChangeTexture(int x,int y);
  void ChangeAlpha(float alpha);
  void setBlendMode( SDL_BlendMode blending );

  bool alpha_blend;
  
  virtual void Render();
};
#endif
