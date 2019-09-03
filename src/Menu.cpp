#include "Menu.h"

Menu::Menu() {
  mButton_1_text =
      new Texture("Edit Map", "alpha_echo.ttf", 24, {255, 249, 196});
  mButton_1_text->Pos(Vector2(640, 300));

  mButton_2_text =
      new Texture("Edit Enemy", "alpha_echo.ttf", 24, {255, 249, 196});
  mButton_2_text->Pos(Vector2(640, 450));

  mButton_1 = new Texture("button.png", 0, 0, 300, 300);
  mButton_1->Pos(Vector2(640, 300));
  mButton_1->Scale(Vector2(0.75f, 0.25f));

  mButton_2 = new Texture("button.png", 0, 0, 300, 300);
  mButton_2->Pos(Vector2(640, 450));
  mButton_2->Scale(Vector2(0.75f, 0.25f));
  editing_map = false;
  editing_enemy = false;
  menu_active = false;
  mText_3 = new Texture(
      "Drag your mouse on click to determine how far your AI travel (only to "
      "your right)",
      "alpha_echo.ttf", 14, {255, 249, 196});
  mText_3->Pos(Vector2(320, 120));

  mText_2 =
      new Texture("Press number to change type and left mouseclick to place",
                  "alpha_echo.ttf", 14, {255, 249, 196});
  mText_2->Pos(Vector2(280, 60));

  mText_4 = new Texture("Press escape to bring out the menu", "alpha_echo.ttf",
                        14, {255, 249, 196});
  mText_4->Pos(Vector2(150, 60));

  mText_1 = new Texture("Press S to save your map, Press R to reset AI",
                        "alpha_echo.ttf", 14, {255, 249, 196});
  mText_1->Pos(Vector2(240, 90));
}

Menu::~Menu() {}

void Menu::Update(float delta) {
  Vector2 mousepos = InputManager::Instance()->MousePos();

  if (InputManager::Instance()->KeyDown(SDL_SCANCODE_S)) {
    editing_map = false;
    editing_enemy = false;
  }
  if (menu_active) {
    if (InputManager::Instance()->MouseButtonReleased(
            InputManager::Instance()->left)) {
      if (mousepos.x < 640 + (225 / 2) && mousepos.x > 640 - (225 / 2) &&
          mousepos.y < 300 + (75 / 2) && mousepos.y > 300 - (75 / 2)) {
        editing_map = true;
        editing_enemy = false;
        menu_active = false;
      } else if (mousepos.x < 640 + (225 / 2) && mousepos.x > 640 - (225 / 2) &&
                 mousepos.y < 450 + (75 / 2) && mousepos.y > 450 - (75 / 2)) {
        editing_enemy = true;
        editing_map = false;
        menu_active = false;
      }
    }

    if (InputManager::Instance()->KeyReleased(SDL_SCANCODE_ESCAPE)) {
      menu_active = false;
    }

  } else if (InputManager::Instance()->KeyReleased(SDL_SCANCODE_ESCAPE) &&
             (!editing_enemy && !editing_map)) {
    menu_active = true;
    std::cout << "Menu \n" << std::endl;
  }
}

void Menu::Render(float delta) {
  if (menu_active) {
    mButton_1->Render();
    mButton_2->Render();
    mButton_1_text->Render();
    mButton_2_text->Render();
  }

  if (editing_map || editing_enemy) {
    mText_1->Render();
    mText_2->Render();
  }
  if (editing_enemy) {
    mText_3->Render();
  }

  if (!editing_map && !editing_enemy) {
    mText_4->Render();
  }
}
