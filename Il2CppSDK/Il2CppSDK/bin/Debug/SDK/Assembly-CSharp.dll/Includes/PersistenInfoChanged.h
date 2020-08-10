#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersistenInfoChanged
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(PersistenInfoChanged*, void*, void*))(Il2CppBase() + 0x206D8C))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(PersistenInfoChanged*))(Il2CppBase() + 0x203DD4))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(PersistenInfoChanged*, void*, void*))(Il2CppBase() + 0x206DAC))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(PersistenInfoChanged*, void*))(Il2CppBase() + 0x206DD8))(this, result);
	}
};
