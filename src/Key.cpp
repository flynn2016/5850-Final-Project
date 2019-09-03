#include "Key.h"

Key::Key() {
  mKey = new Texture("Key.png", 0, 0, Key_WIDTH, Key_HEIGHT);
  mKey->Pos(Vector2(50, 50));
  mKey->Scale(Vector2(0.3f, 0.3f));

  mWin = new Texture("You Passed!", "alpha_echo.ttf", 36*2 , {255, 249, 196});
  mWin->Pos(Vector2(640, 500));

  mLose = new Texture("You Lost!", "alpha_echo.ttf", 36*2 , {255, 249, 196});
  mLose->Pos(Vector2(640, 500));

}

Key::~Key() {
  delete mKey;
  mKey = nullptr;
}

void Key::Update(float delta) {
  if (!finished) {
    x += (640 - 50) / 200;
    y += (360 - 50) / 300;
    scale += 0.004;
    mKey->Pos(Vector2(x, y));
    mKey->Scale(Vector2(scale, scale));
  }
  if (x > 640) finished = true;

  if (finished) {
    mKey->Rotate(20 * delta);
  }
}
void Key::Render(float delta) {
  mKey->Render();
  mWin->Render();
}
void Key::RenderLost(){
  mLose->Render();
}