#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConstructorDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ConstructorDelegate*, void*, void*))(Il2CppBase() + 0x8D3B90))(this, object, method);
	}
	template <typename T = void*> T Invoke(Il2CppArray<void*>* args) {
		return ((T (*)(ConstructorDelegate*, Il2CppArray<void*>*))(Il2CppBase() + 0x8D428C))(this, args);
	}
	template <typename T = void*> T BeginInvoke(Il2CppArray<void*>* args, void* callback, void* object) {
		return ((T (*)(ConstructorDelegate*, Il2CppArray<void*>*, void*, void*))(Il2CppBase() + 0x8D4324))(this, args, callback, object);
	}
	template <typename T = void*> T EndInvoke(void* result) {
		return ((T (*)(ConstructorDelegate*, void*))(Il2CppBase() + 0x8D4350))(this, result);
	}
};
