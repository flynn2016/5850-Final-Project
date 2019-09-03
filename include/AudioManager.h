#ifndef _AUDIOMANAGER_H
#define _AUDIOMANAGER_H
#include "AssetManager.h"
/**
 *This is singleton class for AudioManager.
 **/
class AudioManager {
 private:
  static AudioManager* sInstance;
 public:
  /**
   *Pointer to the instance of AudioManager.
   **/
  static AudioManager* Instance();
  /**
   *Clear all pointers and itslef
   **/
  static void Release();
  /**
   *Plays the music at given path with the given loop number
   **/
  void PlayMusic(std::string filename, int loops = -1);
  /**
   *Pause the current music
   **/
  void PauseMusic();
  /**
   *Resume the current music
   **/
  void ResumeMusic();

  /**
   *Plays the sound effect at given path with the given loop number and given channel
   **/
  void PlaySFX(std::string filename, int loops = 0, int channel = 0);

 private:
  AudioManager();
  ~AudioManager();
};
#endif