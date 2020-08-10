#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimFinishedDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(AnimFinishedDelegate*, void*, void*))(Il2CppBase() + 0x361400))(this, object, method);
	}
	template <typename T = void> T Invoke(int32_t animIdx) {
		return ((T (*)(AnimFinishedDelegate*, int32_t))(Il2CppBase() + 0x364B64))(this, animIdx);
	}
	template <typename T = void*> T BeginInvoke(int32_t animIdx, void* callback, void* object) {
		return ((T (*)(AnimFinishedDelegate*, int32_t, void*, void*))(Il2CppBase() + 0x364BE4))(this, animIdx, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(AnimFinishedDelegate*, void*))(Il2CppBase() + 0x364CA0))(this, result);
	}
};
