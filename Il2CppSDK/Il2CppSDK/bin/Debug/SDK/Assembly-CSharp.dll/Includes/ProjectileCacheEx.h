#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileCacheEx
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7969C);
	}
	// Fields
	template <typename T = void*> T& m_ProjectileType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* inName, void* inProjectileType, int32_t inInitialCacheSize) {
		return ((T (*)(ProjectileCacheEx*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x20D5C4))(this, inName, inProjectileType, inInitialCacheSize);
	}
	template <typename T = void*> T Get() {
		return ((T (*)(ProjectileCacheEx*))(Il2CppBase() + 0x20D5E8))(this);
	}
	template <typename T = void> T Return(void* projectile) {
		return ((T (*)(ProjectileCacheEx*, void*))(Il2CppBase() + 0x20D74C))(this, projectile);
	}
};
