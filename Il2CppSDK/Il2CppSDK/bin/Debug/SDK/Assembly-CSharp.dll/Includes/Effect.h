#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Effect
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78E04);
	}
	// Fields
	template <typename T = void*> T& m_Cache() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Object() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_AbortTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Emitters() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppQuaternion> static T& m_TempQuat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Effect*))(Il2CppBase() + 0x30D9AC))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x30D9B4))(0);
	}
	template <typename T = void*> static T Spawn(void* cache, Il2CppVector3 pos, Il2CppVector3 dir) {
		return ((T (*)(void *, void*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x30DA9C))(0, cache, pos, dir);
	}
	template <typename T = bool> T IsActive() {
		return ((T (*)(Effect*))(Il2CppBase() + 0x30DCF4))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(Effect*))(Il2CppBase() + 0x30DD98))(this);
	}
};
