#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicDLObstacle
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_InitState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_OpenAnimUpper() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_OpenAnimLower() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_OpenSoundUpper() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_OpenSoundLower() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_CloseAnimUpper() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_CloseAnimLower() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_CloseSoundUpper() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_CloseSoundLower() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& UpperMesh() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& LowerMesh() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& AnimationUpper() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& AnimationLower() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& AudioUpper() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& AudioLower() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<void*>*> T& OffMeshLinks() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<void*>*> T& ActionPoints() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_ActualState() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<void*>*> T& m_Icons() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30AFD0))(this);
	}
	template <typename T = bool> T IsActivatedWithGameZone() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30B07C))(this);
	}
	template <typename T = void> T FindIcons(void* transform) {
		return ((T (*)(DynamicDLObstacle*, void*))(Il2CppBase() + 0x30B084))(this, transform);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30B4B0))(this);
	}
	template <typename T = void> T FullyOpen() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30BF2C))(this);
	}
	template <typename T = void> T OpenForAi() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30C010))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30C0F4))(this);
	}
	template <typename T = void> T ShowIcons(bool show) {
		return ((T (*)(DynamicDLObstacle*, bool))(Il2CppBase() + 0x30C1D8))(this, show);
	}
	template <typename T = void*> T FullyOpen_Coroutine() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30BF6C))(this);
	}
	template <typename T = void*> T OpenForAi_Coroutine() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30C050))(this);
	}
	template <typename T = void*> T Close_Coroutine() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30C134))(this);
	}
	template <typename T = void> T SetOffMeshLinks(void* state) {
		return ((T (*)(DynamicDLObstacle*, void*))(Il2CppBase() + 0x30BEA8))(this, state);
	}
	template <typename T = void> T SetActionPoints(void* state) {
		return ((T (*)(DynamicDLObstacle*, void*))(Il2CppBase() + 0x30C44C))(this, state);
	}
	template <typename T = void> T CheckDataConsistency() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30C4D0))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30C4D4))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30C704))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30C708))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DynamicDLObstacle*))(Il2CppBase() + 0x30C70C))(this);
	}
};
