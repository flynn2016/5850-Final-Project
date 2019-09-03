#include "Texture.h"

Texture::Texture(std::string filename) {
  mGraphics = Graphics::Instance();
  mTex = AssetManager::Instance()->GetTexture(filename);
  SDL_QueryTexture(mTex, nullptr, nullptr, &mWidth, &mHeight);

  mClipped = false;

  mRenderRect.w = mWidth;
  mRenderRect.h = mHeight;
  flip = SDL_FLIP_NONE;
}

Texture::Texture(std::string filename, int x, int y, int w, int h) {
  mGraphics = Graphics::Instance();
  mTex = AssetManager::Instance()->GetTexture(filename);

  mClipped = true;
  mWidth = w;
  mHeight = h;
  mRenderRect.w = mWidth;
  mRenderRect.h = mHeight;

  mClipRect.x = x;
  mClipRect.y = y;
  mClipRect.w = mWidth;
  mClipRect.h = mHeight;

  width = w;
  height = h;
  flip = SDL_FLIP_NONE;
  alpha_blend = false;
}
Texture::Texture(std ::string text, std::string fontPath, int size,
                 SDL_Color color) {
  mGraphics = Graphics::Instance();
  mTex = AssetManager::Instance()->GetText(text, fontPath, size, color);
  mClipped = false;
  SDL_QueryTexture(mTex, nullptr, nullptr, &mWidth, &mHeight);
  flip = SDL_FLIP_NONE;
  mRenderRect.w = mWidth;
  mRenderRect.h = mHeight;
}

Texture::~Texture() {
  mTex = nullptr;
  mGraphics = nullptr;
}

void Texture::ChangeTexture(int x, int y) {
  mClipRect.x = x;
  mClipRect.y = y;
}

void Texture::ChangeAlpha(float alpha) { SDL_SetTextureAlphaMod(mTex, alpha); }
void Texture::setBlendMode(SDL_BlendMode blending) {
  SDL_SetTextureBlendMode(mTex, blending);
}

void Texture::Render() {
  Vector2 pos = Pos(world);
  Vector2 scale = Scale(world);
  mRenderRect.x = (int)(pos.x - mWidth * scale.x * 0.5f);
  mRenderRect.y = (int)(pos.y - mHeight * scale.y * 0.5f);
  mRenderRect.w = (int)(mWidth * scale.x);
  mRenderRect.h = (int)(mHeight * scale.y);
  mGraphics->DrawTexture(mTex, (mClipped) ? &mClipRect : nullptr, &mRenderRect,
                         Rotation(world), flip, alpha_blend);
}
