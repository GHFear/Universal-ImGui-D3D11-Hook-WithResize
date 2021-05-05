#include "Timer.h"

namespace EngineUtils {

	Timer* Timer::sInstance = nullptr;

	Timer* Timer::Instance() {

		if (sInstance == nullptr)
			sInstance = new Timer();
		return sInstance;
	}

	void Timer::Release() {

		delete sInstance;
		sInstance = nullptr;
	}

	Timer::Timer() {

		Reset();
		mTimeScale = 1.0f;
		mDeltaTime = std::chrono::duration<float>(0.0f);
	}

	Timer::~Timer() {

	}

	void Timer::Reset() {

		mStartTime = std::chrono::system_clock::now();
	}

	float Timer::DeltaTime() {

		return mDeltaTime.count();
	}

	void Timer::TimeScale(float t /* = 1.0f */) {

		mTimeScale = t;
	}

	float Timer::TimeScale() {

		return mTimeScale;
	}

	void Timer::Tick() {

		mDeltaTime = std::chrono::system_clock::now() - mStartTime;
	}
}