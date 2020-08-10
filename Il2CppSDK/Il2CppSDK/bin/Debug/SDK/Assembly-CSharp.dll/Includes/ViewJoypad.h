#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewJoypad
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& FingerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& Center() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& LastTouchPosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& FirstDelta() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& DeltaPositions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& FilterPositions() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ViewJoypad*))(Il2CppBase() + 0x1FEBD4))(this);
	}
	template <typename T = bool> T get_On() {
		return ((T (*)(ViewJoypad*))(Il2CppBase() + 0x1FFD10))(this);
	}
	template <typename T = void> T SetCenter(Il2CppVector2 center) {
		return ((T (*)(ViewJoypad*, Il2CppVector2))(Il2CppBase() + 0x1FFD24))(this, center);
	}
	template <typename T = void> T AddDelta(Il2CppVector2 delta) {
		return ((T (*)(ViewJoypad*, Il2CppVector2))(Il2CppBase() + 0x1FFDDC))(this, delta);
	}
	template <typename T = Il2CppVector2> T GetDelta() {
		return ((T (*)(ViewJoypad*))(Il2CppBase() + 0x1FFEEC))(this);
	}
};
