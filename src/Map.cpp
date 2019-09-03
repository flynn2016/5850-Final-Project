#include "Map.h"

Map::Map() {
  tile_index = 0;
  // Render bricks
  for (int i = 0; i < Map_WIDTH; i++) {
    for (int j = 0; j < Map_HEIGHT; j++) {
      Tile tile;
      tile.type = 0;
      tiles[i][j] = tile;
    }
  }
  ReadFromFile(1);
}

Map::~Map() {
  delete mTiletexture_1;
  mTiletexture_1 = nullptr;
  delete mTiletexture_2;
  mTiletexture_2 = nullptr;
  delete mTiletexture_3;
  mTiletexture_3 = nullptr;
  delete mTiletexture_4;
  mTiletexture_4 = nullptr;
  delete mTiletexture_5;
  mTiletexture_5 = nullptr;
  delete mTiletexture_6;
  mTiletexture_6 = nullptr;
  delete mTiletexture_7;
  mTiletexture_7 = nullptr;
  delete mTiletexture_8;
  mTiletexture_8 = nullptr;
}

void Map::Update(float delta_time) {
  InputManager *input = InputManager::Instance();
  input->Update();

  // read the current input base on the mouse press position
  Vector2 mousepos = input->MousePos();
  int mpx = mousepos.x / Tile_BRWIDTH / 2;
  int mpy = mousepos.y / Tile_BRHEIGHT / 2;

  // Tilemap editor:
  // Hold SPACE and left click to see the current tile position and type
  if (input->KeyPressed(SDL_SCANCODE_SPACE)) {
    if (input->MouseButtonDown(input->left)) {
      std::cout << mpx << " " << mpy << ",  ";
      std::cout << "Current type: " << tiles[mpx][mpy].type << "\n";
    }
  }

  // Change tile to 0
  if (input->MouseButtonDown(input->left)) {
    tiles[mpx][mpy].type = tile_index;
  }
  if (input->KeyDown(SDL_SCANCODE_0)) {
    tile_index = 0;
  } else if (input->KeyPressed(SDL_SCANCODE_1)) {
    tile_index = 1;
  } else if (input->KeyPressed(SDL_SCANCODE_2)) {
    tile_index = 2;
  } else if (input->KeyPressed(SDL_SCANCODE_3)) {
    tile_index = 3;
  } else if (input->KeyPressed(SDL_SCANCODE_4)) {
    tile_index = 4;
  } else if (input->KeyPressed(SDL_SCANCODE_5)) {
    tile_index = 5;
  } else if (input->KeyPressed(SDL_SCANCODE_6)) {
    tile_index = 6;
  } else if (input->KeyPressed(SDL_SCANCODE_7)) {
    tile_index = 7;
  } else if (input->KeyPressed(SDL_SCANCODE_8)) {
    tile_index = 8;
  }

  // write into the file
  if (input->KeyDown(SDL_SCANCODE_S)) {
    tile_index = 0;
    std::cout << "Saving the map ...\n";
    WriteFile(1);
    std::cout << "Saved\n";
  }
}

void Map::Render(float delta_time) {
  for (int i = 0; i < Map_WIDTH; i++) {
    for (int j = 0; j < Map_HEIGHT; j++) {
      Tile tile = tiles[i][j];
      if (tile.type == 1) {
        int tile_posx = 3;
        int tile_posy = 0;
        mTiletexture_1 =
            new Texture("spritesheet_2.png",
                        (Tile_BRWIDTH * tile_posx + tile_posx * (2) + 3),
                        (Tile_BRHEIGHT * tile_posy + tile_posy * 2 + 3),
                        Tile_BRWIDTH, Tile_BRHEIGHT);
        mTiletexture_1->Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                    (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
        mTiletexture_1->Scale(Vector2(Tile_SCALE, Tile_SCALE));
        mTiletexture_1->Render();
        tiles[i][j].Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
      }

      else if (tile.type == 2) {
        int tile_posx = 1;
        int tile_posy = 4;
        mTiletexture_2 = new Texture(
            "spritesheet_2.png", (Tile_BRWIDTH * tile_posx + tile_posx * 2 + 3),
            (Tile_BRHEIGHT * tile_posy + tile_posy * 2 + 3), Tile_BRWIDTH,
            Tile_BRHEIGHT);
        mTiletexture_2->Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                    (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
        mTiletexture_2->Scale(Vector2(Tile_SCALE, Tile_SCALE));
        mTiletexture_2->Render();
        tiles[i][j].Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
      }

      // ground - bottom layer
      else if (tile.type == 3) {
        int tile_posx = 2;
        int tile_posy = 1;
        mTiletexture_3 = new Texture(
            "spritesheet_2.png", (Tile_BRWIDTH * tile_posx + tile_posx * 2 + 3),
            (Tile_BRHEIGHT * tile_posy + tile_posy * 2 + 3), Tile_BRWIDTH,
            Tile_BRHEIGHT);
        mTiletexture_3->Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                    (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
        mTiletexture_3->Scale(Vector2(Tile_SCALE, Tile_SCALE));
        mTiletexture_3->Render();
        tiles[i][j].Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
      }

      // rock - bottom layer
      else if (tile.type == 4) {
        int tile_posx = 4;
        int tile_posy = 11;
        mTiletexture_4 = new Texture(
            "spritesheet_2.png", (Tile_BRWIDTH * tile_posx + tile_posx * 2 + 3),
            (Tile_BRHEIGHT * tile_posy + tile_posy * 2 + 3), Tile_BRWIDTH,
            Tile_BRHEIGHT);
        mTiletexture_4->Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                    (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
        mTiletexture_4->Scale(Vector2(Tile_SCALE, Tile_SCALE));
        mTiletexture_4->Render();
        tiles[i][j].Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
      }

      // rock - top layer
      else if (tile.type == 5) {
        int tile_posx = 1;
        int tile_posy = 10;
        mTiletexture_5 = new Texture(
            "spritesheet_2.png", (Tile_BRWIDTH * tile_posx + tile_posx * 2 + 3),
            (Tile_BRHEIGHT * tile_posy + tile_posy * 2 + 3), Tile_BRWIDTH,
            Tile_BRHEIGHT);
        mTiletexture_5->Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                    (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
        mTiletexture_5->Scale(Vector2(Tile_SCALE, Tile_SCALE));
        mTiletexture_5->Render();
        tiles[i][j].Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
      }

      // platforms - middle
      else if (tile.type == 6) {
        int tile_posx = 3;
        int tile_posy = 4;
        mTiletexture_6 = new Texture(
            "spritesheet_2.png", (Tile_BRWIDTH * tile_posx + tile_posx * 2 + 3),
            (Tile_BRHEIGHT * tile_posy + tile_posy * 2 + 3), Tile_BRWIDTH,
            Tile_BRHEIGHT);
        mTiletexture_6->Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                    (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
        mTiletexture_6->Scale(Vector2(Tile_SCALE, Tile_SCALE));
        mTiletexture_6->Render();
        tiles[i][j].Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
      }

      // platforms - right
      else if (tile.type == 7) {
        int tile_posx = 4;
        int tile_posy = 4;
        mTiletexture_7 = new Texture(
            "spritesheet_2.png", (Tile_BRWIDTH * tile_posx + tile_posx * 2 + 3),
            (Tile_BRHEIGHT * tile_posy + tile_posy * 2 + 3), Tile_BRWIDTH,
            Tile_BRHEIGHT);
        mTiletexture_7->Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                    (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
        mTiletexture_7->Scale(Vector2(Tile_SCALE, Tile_SCALE));
        mTiletexture_7->Render();
        tiles[i][j].Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
      }

      // goal
      else if (tile.type == 8) {
        int tile_posx = 13;
        int tile_posy = 8;
        mTiletexture_8 = new Texture(
            "spritesheet_2.png", (Tile_BRWIDTH * tile_posx + tile_posx * 2 + 3),
            (Tile_BRHEIGHT * tile_posy + tile_posy * 2 + 3), Tile_BRWIDTH,
            Tile_BRHEIGHT);
        mTiletexture_8->Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                    (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
        mTiletexture_8->Scale(Vector2(Tile_SCALE, Tile_SCALE));
        mTiletexture_8->Render();
        tiles[i][j].Pos(Vector2((i + 0.5) * Tile_BRWIDTH * Tile_SCALE,
                                (j + 0.5) * Tile_BRHEIGHT * Tile_SCALE));
      }
    }
  }
  if (tile_index == 1) {
    mTiletexture_1->Pos(Vector2(InputManager::Instance()->MousePos().x,
                                InputManager::Instance()->MousePos().y));
    mTiletexture_1->Render();
  } else if (tile_index == 2) {
    mTiletexture_2->Pos(Vector2(InputManager::Instance()->MousePos().x,
                                InputManager::Instance()->MousePos().y));
    mTiletexture_2->Render();
  } else if (tile_index == 3) {
    mTiletexture_3->Pos(Vector2(InputManager::Instance()->MousePos().x,
                                InputManager::Instance()->MousePos().y));
    mTiletexture_3->Render();
  } else if (tile_index == 4) {
    mTiletexture_4->Pos(Vector2(InputManager::Instance()->MousePos().x,
                                InputManager::Instance()->MousePos().y));
    mTiletexture_4->Render();
  } else if (tile_index == 5) {
    mTiletexture_5->Pos(Vector2(InputManager::Instance()->MousePos().x,
                                InputManager::Instance()->MousePos().y));
    mTiletexture_5->Render();
  } else if (tile_index == 6) {
    mTiletexture_6->Pos(Vector2(InputManager::Instance()->MousePos().x,
                                InputManager::Instance()->MousePos().y));
    mTiletexture_6->Render();
  } else if (tile_index == 7) {
    mTiletexture_7->Pos(Vector2(InputManager::Instance()->MousePos().x,
                                InputManager::Instance()->MousePos().y));
    mTiletexture_7->Render();
  } else if (tile_index == 8) {
    mTiletexture_8->Pos(Vector2(InputManager::Instance()->MousePos().x,
                                InputManager::Instance()->MousePos().y));
    mTiletexture_8->Render();
  }
}

void Map::ReadFromFile(int map_number) {
  int x, y;
  std::string fullPath = SDL_GetBasePath();
  fullPath.append("Config/Saved_Map.txt");
  std::ifstream in(fullPath);
  if (!in) {
    std::cout << "Cannot open file.\n";
    return;
  }
  for (y = 0; y < Map_HEIGHT; y++) {
    for (x = 0; x < Map_WIDTH; x++) {
      in >> tiles[x][y].type;
    }
  }
  in.close();
}

void Map::WriteFile(int map_number) {
  int x, y;
  std::string fullPath = SDL_GetBasePath();
  fullPath.append("Config/Saved_Map.txt");

  std::ofstream out(fullPath);
  if (out.is_open()) {
    for (y = 0; y < Map_HEIGHT; y++) {
      for (x = 0; x < Map_WIDTH; x++) {
        out << tiles[x][y].type;
        out << " ";
      }
      out << "\n";
    }
  }

  out.close();
}
