#include "Timer.h"

Timer* Timer::sInstance = nullptr;

Timer* Timer::Instance() {
  if (sInstance == nullptr) sInstance = new Timer();
  return sInstance;
}

void Timer::Release() {
  delete sInstance;
  sInstance = nullptr;
}

Timer::Timer() {
  Reset();
  mTimeScale = 1.0f;
}

Timer::~Timer() {}

void Timer::Reset() {
  mStartTicks = SDL_GetTicks();
  mElapsedTicks = 0;
  mDelataTime = 0.0f;
}

float Timer::DeltaTime() { return mDelataTime; }

void Timer::TimeScale(float t) { mTimeScale = t; }

float Timer::TimeScale() { return mTimeScale; }

void Timer::Update() {
  mElapsedTicks = SDL_GetTicks() - mStartTicks;
  mDelataTime = mElapsedTicks * 0.001f;
}
