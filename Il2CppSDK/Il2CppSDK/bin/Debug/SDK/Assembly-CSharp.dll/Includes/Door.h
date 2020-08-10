#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Door
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_InitState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_OpenAnim() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_OpenSound() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_CloseAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_CloseSound() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& Audio() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<void*>*> T& OffMeshLinks() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_ActualState() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_PingPongAnim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306AF4))(this);
	}
	template <typename T = bool> T IsActivatedWithGameZone() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306AFC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306B04))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306D38))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306D3C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306D40))(this);
	}
	template <typename T = void> T Open() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306D44))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306E28))(this);
	}
	template <typename T = void*> T Open_Coroutine() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306D84))(this);
	}
	template <typename T = void*> T Close_Coroutine() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306E68))(this);
	}
	template <typename T = void> T SetOffMeshLinks(void* state) {
		return ((T (*)(Door*, void*))(Il2CppBase() + 0x306CB4))(this, state);
	}
	template <typename T = void> T CheckDataConsistency() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306F1C))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(Door*))(Il2CppBase() + 0x306FF4))(this);
	}
};
