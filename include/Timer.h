#ifndef _TIMER_h
#define _TIMER_h
#include <SDL.h>
/**
 *This class manages the time of the game including a frame cap that limits the game fps to 60
 **/
class Timer {
 private:
  static Timer* sInstance;
  unsigned int mStartTicks;
  unsigned int mElapsedTicks;
  float mDelataTime;
  float mTimeScale;

 public:
  static Timer* Instance();
  static void Release();
  /**
   *Reset the time
   **/
  void Reset();
  float DeltaTime();
  void TimeScale(float t = 1.0f);
  float TimeScale();
  void Update();

 private:
  Timer();
  ~Timer();
};

#endif