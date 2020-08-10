#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaActivated
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ArenaActivated*, void*, void*))(Il2CppBase() + 0x29AF50))(this, object, method);
	}
	template <typename T = void> T Invoke(int32_t arenaIndex) {
		return ((T (*)(ArenaActivated*, int32_t))(Il2CppBase() + 0x29AF64))(this, arenaIndex);
	}
	template <typename T = void*> T BeginInvoke(int32_t arenaIndex, void* callback, void* object) {
		return ((T (*)(ArenaActivated*, int32_t, void*, void*))(Il2CppBase() + 0x29AFE4))(this, arenaIndex, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ArenaActivated*, void*))(Il2CppBase() + 0x29B0A0))(this, result);
	}
};
