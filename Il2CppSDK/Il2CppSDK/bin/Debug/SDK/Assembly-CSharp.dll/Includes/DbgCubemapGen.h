#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DbgCubemapGen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_CubeMapTex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DbgCubemapGen*))(Il2CppBase() + 0x2F6498))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DbgCubemapGen*))(Il2CppBase() + 0x2F64A0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DbgCubemapGen*))(Il2CppBase() + 0x2F64A4))(this);
	}
};
