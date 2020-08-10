#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioConfigurationChangeHandler
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(AudioConfigurationChangeHandler*, void*, void*))(Il2CppBase() + 0x8EF538))(this, object, method);
	}
	template <typename T = void> T Invoke(bool deviceWasChanged) {
		return ((T (*)(AudioConfigurationChangeHandler*, bool))(Il2CppBase() + 0x8EF4C8))(this, deviceWasChanged);
	}
	template <typename T = void*> T BeginInvoke(bool deviceWasChanged, void* callback, void* object) {
		return ((T (*)(AudioConfigurationChangeHandler*, bool, void*, void*))(Il2CppBase() + 0x8EF55C))(this, deviceWasChanged, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(AudioConfigurationChangeHandler*, void*))(Il2CppBase() + 0x8EF618))(this, result);
	}
};
