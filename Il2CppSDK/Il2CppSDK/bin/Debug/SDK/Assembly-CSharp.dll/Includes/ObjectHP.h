#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ObjectHP
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Parent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& highlight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& obj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& visible() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& repairing() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ObjectHP*))(Il2CppBase() + 0x3AE29C))(this);
	}
	template <typename T = bool> T get_used() {
		return ((T (*)(ObjectHP*))(Il2CppBase() + 0x3AFC5C))(this);
	}
	template <typename T = void> T Repair(bool repair) {
		return ((T (*)(ObjectHP*, bool))(Il2CppBase() + 0x3B0EE0))(this, repair);
	}
	template <typename T = bool> T IsRepairing() {
		return ((T (*)(ObjectHP*))(Il2CppBase() + 0x3B0EE8))(this);
	}
	template <typename T = void> T Use(void* inObj) {
		return ((T (*)(ObjectHP*, void*))(Il2CppBase() + 0x3B02A0))(this, inObj);
	}
	template <typename T = void> T Free() {
		return ((T (*)(ObjectHP*))(Il2CppBase() + 0x3B05F0))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(ObjectHP*))(Il2CppBase() + 0x3AFC78))(this);
	}
	template <typename T = void> T Hide(bool setVisibilityFlag) {
		return ((T (*)(ObjectHP*, bool))(Il2CppBase() + 0x3AFCB8))(this, setVisibilityFlag);
	}
	template <typename T = bool> T IsVisible() {
		return ((T (*)(ObjectHP*))(Il2CppBase() + 0x3AFC70))(this);
	}
};
