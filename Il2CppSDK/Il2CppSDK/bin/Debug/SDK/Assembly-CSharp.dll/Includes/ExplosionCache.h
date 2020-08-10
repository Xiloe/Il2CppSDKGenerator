#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExplosionCache
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD794A4);
	}
	// Fields
	template <typename T = void*> T& WaterExplosion() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& Definition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& _Cache() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ExplosionCache*))(Il2CppBase() + 0x317398))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ExplosionCache*))(Il2CppBase() + 0x317478))(this);
	}
	template <typename T = void*> T GetWaterExplosion(Il2CppVector3 inPosition, Il2CppQuaternion inRotation) {
		return ((T (*)(ExplosionCache*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x317824))(this, inPosition, inRotation);
	}
	template <typename T = void*> T Get(void* inPrefab, Il2CppVector3 inPosition, Il2CppQuaternion inRotation) {
		return ((T (*)(ExplosionCache*, void*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x314B70))(this, inPrefab, inPosition, inRotation);
	}
	template <typename T = void*> T Get_1(void* inPrefab, Il2CppVector3 inPosition, Il2CppQuaternion inRotation, void* inNoBlocking) {
		return ((T (*)(ExplosionCache*, void*, Il2CppVector3, Il2CppQuaternion, void*))(Il2CppBase() + 0x317EBC))(this, inPrefab, inPosition, inRotation, inNoBlocking);
	}
	template <typename T = void*> T Get_2(void* inPrefab, Il2CppVector3 inPosition, Il2CppQuaternion inRotation, Il2CppArray<void*>* inNoBlocking) {
		return ((T (*)(ExplosionCache*, void*, Il2CppVector3, Il2CppQuaternion, Il2CppArray<void*>*))(Il2CppBase() + 0x317980))(this, inPrefab, inPosition, inRotation, inNoBlocking);
	}
	template <typename T = void> T Return(void* inExplosion) {
		return ((T (*)(ExplosionCache*, void*))(Il2CppBase() + 0x31671C))(this, inExplosion);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ExplosionCache*))(Il2CppBase() + 0x31801C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ExplosionCache*))(Il2CppBase() + 0x3181B0))(this);
	}
};
