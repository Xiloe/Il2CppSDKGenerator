#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Console
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_Caption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_Message() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_LabelCaption() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ButtonClose() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_NESController() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Console*))(Il2CppBase() + 0x2E4AC8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Console*))(Il2CppBase() + 0x2E4AD0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(Console*))(Il2CppBase() + 0x2E4BB8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Console*))(Il2CppBase() + 0x2E4BBC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(Console*))(Il2CppBase() + 0x2E4BC0))(this);
	}
	template <typename T = void> T Done() {
		return ((T (*)(Console*))(Il2CppBase() + 0x2E5110))(this);
	}
	template <typename T = void> T OnButtonReleased(void* W) {
		return ((T (*)(Console*, void*))(Il2CppBase() + 0x2E5390))(this, W);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(Console*))(Il2CppBase() + 0x2E53E8))(this);
	}
};
