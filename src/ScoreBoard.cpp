#include "ScoreBoard.h"

ScoreBoard::ScoreBoard() {
  for (int i = 0; i < 3; i++) {
    mLife[i] =
        new Texture("spritesheet_2.png", (Tile_WIDTH * 19 + 19 * (2) + 3),
                    (Tile_HEIGHT * 4 + 3 * 2 + 3), Tile_WIDTH, Tile_HEIGHT);
    mLife[i]->Pos(Vector2(Tile_WIDTH * (26.5 + i * 1.5) * 2, Tile_WIDTH));
    mLife[i]->Scale(Vector2(3, 3));
    mLife[i]->alpha_blend = true;
    mLife[i]->flip = SDL_FLIP_NONE;
  }
  lifes = 6;
  lose = false;
  win = false;
}

ScoreBoard::~ScoreBoard() { ClearBoard(); }

void ScoreBoard::ClearBoard() {
  for (int i = 0; i < 3; i++) {
    delete mLife[i];
    mLife[i] = nullptr;
  }
}

void ScoreBoard::MinusLife() { lifes--; }

void ScoreBoard::Update() {
  if (lifes == 5) {
    mLife[2]->ChangeTexture((Tile_WIDTH * 20 + 20 * 2 + 3),
                            (Tile_HEIGHT * 4 + 3 * 2 + 3));
  } else if (lifes == 4) {
    mLife[2]->ChangeTexture((Tile_WIDTH * 21 + 21 * 2 + 3),
                            (Tile_HEIGHT * 4 + 3 * 2 + 3));
  } else if (lifes == 3) {
    mLife[1]->ChangeTexture((Tile_WIDTH * 20 + 20 * 2 + 3),
                            (Tile_HEIGHT * 4 + 3 * 2 + 3));
  }

  else if (lifes == 2) {
    mLife[1]->ChangeTexture((Tile_WIDTH * 21 + 21 * 2 + 3),
                            (Tile_HEIGHT * 4 + 3 * 2 + 3));
  } else if (lifes == 1) {
    mLife[0]->ChangeTexture((Tile_WIDTH * 20 + 20 * 2 + 3),
                            (Tile_HEIGHT * 4 + 3 * 2 + 3));
  } else if (lifes == 0) {
    lose = true;
    mLife[0]->ChangeTexture((Tile_WIDTH * 21 + 21 * 2 + 3),
                            (Tile_HEIGHT * 4 + 3 * 2 + 3));
  }
}

void ScoreBoard ::Render() {
  mLife[0]->Render();
  mLife[1]->Render();
  mLife[2]->Render();
}