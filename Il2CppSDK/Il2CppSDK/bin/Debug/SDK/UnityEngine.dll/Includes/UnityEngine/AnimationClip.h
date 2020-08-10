#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AnimationClip
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0x0);
		}
		// Methods
		template <typename T = void> T SampleAnimation(void* go, float time) {
			return ((T (*)(AnimationClip*, void*, float))(Il2CppBase() + 0x8EB2EC))(this, go, time);
		}
		template <typename T = float> T get_length() {
			return ((T (*)(AnimationClip*))(Il2CppBase() + 0x8EB394))(this);
		}
		template <typename T = void*> T get_wrapMode() {
			return ((T (*)(AnimationClip*))(Il2CppBase() + 0x8EB42C))(this);
		}
	};
}
