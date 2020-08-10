#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78888);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& CacheOfProjectiles() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& ActiveProjectiles() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileManager*))(Il2CppBase() + 0x212C08))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProjectileManager*))(Il2CppBase() + 0x212D0C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ProjectileManager*))(Il2CppBase() + 0x2132C0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ProjectileManager*))(Il2CppBase() + 0x2133E0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ProjectileManager*))(Il2CppBase() + 0x2135EC))(this);
	}
	template <typename T = void> T UpdateProjectiles(float deltaTime) {
		return ((T (*)(ProjectileManager*, float))(Il2CppBase() + 0x213408))(this, deltaTime);
	}
	template <typename T = void> T CollectUnusedProjectiles() {
		return ((T (*)(ProjectileManager*))(Il2CppBase() + 0x2135F0))(this);
	}
	template <typename T = void> T SpawnProjectile(void* projType, Il2CppVector3 pos, Il2CppVector3 dir, void* projSettings) {
		return ((T (*)(ProjectileManager*, void*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x21387C))(this, projType, pos, dir, projSettings);
	}
	template <typename T = void> T ReturnProjectile(void* proj) {
		return ((T (*)(ProjectileManager*, void*))(Il2CppBase() + 0x213760))(this, proj);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ProjectileManager*))(Il2CppBase() + 0x213A34))(this);
	}
};
