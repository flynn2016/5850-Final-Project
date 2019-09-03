
#include "GameManager.h"


int main(int argc, char** argv) {

	GameManager * game = GameManager::Instance();
	game->Run();

	GameManager::Release();
	game = nullptr;


  //SDLGraphicsProgram mySDLGraphicsProgram(1280, 720);
  // Run our program forever
  //mySDLGraphicsProgram.loop();
  // When our program ends, it will exit scope, the
  // destructor will then be called and clean up the program.

  return 0;
}
