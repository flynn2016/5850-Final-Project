#include "Graphics.h"

Graphics* Graphics::sInstance = nullptr;
// Initializing to false
bool Graphics::sInitialized = false;

Graphics* Graphics::Instance() {
  // Create a new instance if no instance was created before
  if (sInstance == nullptr) sInstance = new Graphics();

  return sInstance;
}

void Graphics::Release() {
  delete sInstance;
  sInstance = nullptr;
  sInitialized = false;
}

bool Graphics::Initialized() { return sInitialized; }

Graphics::Graphics() {
  mBackBuffer = nullptr;
  sInitialized = Init();
}

Graphics::~Graphics() {
  SDL_DestroyWindow(mWindow);
  mWindow = nullptr;
  SDL_DestroyRenderer(mRenderer);
  mRenderer = nullptr;

  TTF_Quit();
  IMG_Quit();
  SDL_Quit();
}

bool Graphics::Init() {
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL Error: %s\n", SDL_GetError());
    return false;
  }

  mWindow = SDL_CreateWindow("Breakout", SDL_WINDOWPOS_UNDEFINED,
                             SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                             SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

  if (mWindow == nullptr) {
    printf("Windows Creation Error: %s\n", SDL_GetError());
    return false;
  }
  // renderer
  mRenderer = SDL_CreateRenderer(mWindow, -1, SDL_RENDERER_ACCELERATED);

  if (mRenderer == nullptr) {
    std::cout << "Render Creation Error: %s\n", SDL_GetError();
    return false;
  }
  // image library
  SDL_SetRenderDrawColor(mRenderer, 0x5E, 0x81, 0xA2, 0x00);

  int flags = IMG_INIT_PNG;
  if (!(IMG_Init(flags) & flags)) {
    std::cout << "IMG initialization Error: %s\n", IMG_GetError();
  }

  if (TTF_Init() == -1) {
    std::cout << "TTF Initialization Error: " << TTF_GetError();
    return false;
  }

  mBackBuffer = SDL_GetWindowSurface(mWindow);

  return true;
}

SDL_Texture* Graphics::LoadTexture(std::string path) {
  SDL_Texture* tex = nullptr;
  SDL_Surface* surface = IMG_Load(path.c_str());
  if (surface == nullptr) {
    std::cout << "Image load error: Path:" << path
              << "error: " << IMG_GetError();
    return tex;
  }

  tex = SDL_CreateTextureFromSurface(mRenderer, surface);
  if (tex == nullptr) {
    std::cout << "Create Texture Error:" << SDL_GetError();
    return tex;
  }

  SDL_FreeSurface(surface);
  return tex;
}

void Graphics::ClearBackBuffer() {
  SDL_RenderClear(mRenderer);
}

void Graphics::DrawTexture(SDL_Texture* tex, SDL_Rect* clip, SDL_Rect* rend,
                           float angle, SDL_RendererFlip flip, bool alpha) {
  SDL_RenderCopyEx(mRenderer, tex, clip, rend, angle, NULL, flip);
}

SDL_Texture* Graphics::CreateTextTexture(TTF_Font* font, std::string text,
                                         SDL_Color color) {
  SDL_Surface* surface = TTF_RenderText_Solid(font, text.c_str(), color);
  if (surface == nullptr) {
    std::cout << "Text Render Error" << TTF_GetError();
    return nullptr;
  }

  SDL_Texture* tex = SDL_CreateTextureFromSurface(mRenderer, surface);
  if (tex == nullptr) {
    std::cout << "Text Texture Creation Arror: " << SDL_GetError();
    return nullptr;
  }

  SDL_FreeSurface(surface);
  return tex;
}

void Graphics::Render() {
  SDL_RenderPresent(mRenderer);
}
