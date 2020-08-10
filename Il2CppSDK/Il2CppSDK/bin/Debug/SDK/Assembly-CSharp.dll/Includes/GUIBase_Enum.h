#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseEnum
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_EnumWidgets() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_InitValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_CurrentValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ChangeValueDelegate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseEnum*))(Il2CppBase() + 0x35905C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseEnum*))(Il2CppBase() + 0x3590FC))(this);
	}
	template <typename T = bool> T Callback(void* type) {
		return ((T (*)(GUIBaseEnum*, void*))(Il2CppBase() + 0x3591A8))(this, type);
	}
	template <typename T = void> T CustomInit() {
		return ((T (*)(GUIBaseEnum*))(Il2CppBase() + 0x3591D8))(this);
	}
	template <typename T = void> T SetValue(int32_t v) {
		return ((T (*)(GUIBaseEnum*, int32_t))(Il2CppBase() + 0x359370))(this, v);
	}
	template <typename T = void> T ShowValue(int32_t i, bool show) {
		return ((T (*)(GUIBaseEnum*, int32_t, bool))(Il2CppBase() + 0x3593FC))(this, i, show);
	}
	template <typename T = void> T ChildButtonPressed(float v) {
		return ((T (*)(GUIBaseEnum*, float))(Il2CppBase() + 0x3594BC))(this, v);
	}
	template <typename T = void> T ChildButtonReleased() {
		return ((T (*)(GUIBaseEnum*))(Il2CppBase() + 0x359578))(this);
	}
	template <typename T = void> T RegisterDelegate(void* d) {
		return ((T (*)(GUIBaseEnum*, void*))(Il2CppBase() + 0x35957C))(this, d);
	}
};
