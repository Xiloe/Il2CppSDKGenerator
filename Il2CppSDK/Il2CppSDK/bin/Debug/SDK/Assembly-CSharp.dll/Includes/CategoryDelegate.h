#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CategoryDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(CategoryDelegate*, void*, void*))(Il2CppBase() + 0x392F60))(this, object, method);
	}
	template <typename T = void> T Invoke(void* cat, void* id) {
		return ((T (*)(CategoryDelegate*, void*, void*))(Il2CppBase() + 0x392D74))(this, cat, id);
	}
	template <typename T = void*> T BeginInvoke(void* cat, void* id, void* callback, void* object) {
		return ((T (*)(CategoryDelegate*, void*, void*, void*, void*))(Il2CppBase() + 0x392F74))(this, cat, id, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(CategoryDelegate*, void*))(Il2CppBase() + 0x393038))(this, result);
	}
};
