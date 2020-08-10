#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseCounter
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79070);
	}
	// Fields
	template <typename T = int32_t> T& m_MaxCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<void*>*> T& m_UsedSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_UsedSpritesUV() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MAX_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseCounter*))(Il2CppBase() + 0x3585A8))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x358678))(0);
	}
	template <typename T = void*> T get_Widget() {
		return ((T (*)(GUIBaseCounter*))(Il2CppBase() + 0x3586FC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseCounter*))(Il2CppBase() + 0x358704))(this);
	}
	template <typename T = bool> T Callback(void* type) {
		return ((T (*)(GUIBaseCounter*, void*))(Il2CppBase() + 0x3587B0))(this, type);
	}
	template <typename T = void> T CustomInit() {
		return ((T (*)(GUIBaseCounter*))(Il2CppBase() + 0x3587C8))(this);
	}
	template <typename T = void> T SetValue(int32_t idx, int32_t type) {
		return ((T (*)(GUIBaseCounter*, int32_t, int32_t))(Il2CppBase() + 0x358DBC))(this, idx, type);
	}
	template <typename T = void> T SetCountSimple(int32_t val) {
		return ((T (*)(GUIBaseCounter*, int32_t))(Il2CppBase() + 0x358EA4))(this, val);
	}
	template <typename T = void*> T GetSpriteWidget(int32_t idx) {
		return ((T (*)(GUIBaseCounter*, int32_t))(Il2CppBase() + 0x358EF0))(this, idx);
	}
};
