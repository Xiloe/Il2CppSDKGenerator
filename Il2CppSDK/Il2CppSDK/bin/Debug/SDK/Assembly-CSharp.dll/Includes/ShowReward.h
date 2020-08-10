#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowReward
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ShowReward*, void*, void*))(Il2CppBase() + 0x28FF48))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(ShowReward*))(Il2CppBase() + 0x293CC4))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(ShowReward*, void*, void*))(Il2CppBase() + 0x293FC0))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ShowReward*, void*))(Il2CppBase() + 0x293FEC))(this, result);
	}
};
