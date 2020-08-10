#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReapplyDrivenProperties
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ReapplyDrivenProperties*, void*, void*))(Il2CppBase() + 0x92D730))(this, object, method);
	}
	template <typename T = void> T Invoke(void* driven) {
		return ((T (*)(ReapplyDrivenProperties*, void*))(Il2CppBase() + 0x92D2B8))(this, driven);
	}
	template <typename T = void*> T BeginInvoke(void* driven, void* callback, void* object) {
		return ((T (*)(ReapplyDrivenProperties*, void*, void*, void*))(Il2CppBase() + 0x92D744))(this, driven, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ReapplyDrivenProperties*, void*))(Il2CppBase() + 0x92D770))(this, result);
	}
};
