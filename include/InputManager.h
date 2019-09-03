#ifndef _INPUTMANAGER_H
#define _INPUTMANAGER_H
#include <MathHelper.h>
#include <SDL.h>
#include <string.h>

/**
 *This is a singleton class managing keyboard and mouse inputs.
 **/
class InputManager {
 public:
  enum MOUSE_BUTTON { left = 0, right, middle, back, forward };

 private:
  static InputManager* sInstance;
  Uint8* mPrevKeyboardState;
  const Uint8* mKeyboardState;
  int mKeyLength;

  Uint32 mPrevMouseState;
  Uint32 mMouseState;

  int mMouseXPos;
  int mMouseYPos;

 public:
  /**
   *Point to the instance of this singleton class
   **/
  static InputManager* Instance();
  /**
   *Clear all pointers and itself
   **/
  static void Release();
  /**
   *return true if the given key is down
   **/
  bool KeyDown(SDL_Scancode scanCode);
  /**
   *return true if the given key is pressed
   **/
  bool KeyPressed(SDL_Scancode scanCode);
  /**
   *return true if the given key is released
   **/
  bool KeyReleased(SDL_Scancode scanCode);

  /**
   *return true if the given mouse button is down
   **/
  bool MouseButtonDown(MOUSE_BUTTON button);
  /**
   *return true if the given mouse button is pressed
   **/
  bool MouseButtonPressed(MOUSE_BUTTON button);
  /**
   *return true if the given mouse button is released
   **/
  bool MouseButtonReleased(MOUSE_BUTTON button);

  /**
   *return the current mouse position
   **/
  Vector2 MousePos();
  /**
   *Update the inputs
   **/
  void Update();
    void UpdatePrevInput();

 private:

  InputManager();
  ~InputManager();
};
#endif