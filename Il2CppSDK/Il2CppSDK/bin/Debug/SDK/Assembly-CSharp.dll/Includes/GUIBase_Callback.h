#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseCallback
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_Flags() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseCallback*))(Il2CppBase() + 0x3566E4))(this);
	}
	template <typename T = bool> T Callback(void* type) {
		return ((T (*)(GUIBaseCallback*, void*))(Il2CppBase() + 0x358340))(this, type);
	}
	template <typename T = void> T GetTouchAreaScale(void** scaleWidth, void** scaleHeight) {
		return ((T (*)(GUIBaseCallback*, void**, void**))(Il2CppBase() + 0x358400))(this, scaleWidth, scaleHeight);
	}
	template <typename T = void> T ChildButtonPressed(float v) {
		return ((T (*)(GUIBaseCallback*, float))(Il2CppBase() + 0x358410))(this, v);
	}
	template <typename T = void> T ChildButtonReleased() {
		return ((T (*)(GUIBaseCallback*))(Il2CppBase() + 0x3584CC))(this);
	}
	template <typename T = void> T RegisterCallbackType(int32_t clbkTypes) {
		return ((T (*)(GUIBaseCallback*, int32_t))(Il2CppBase() + 0x358588))(this, clbkTypes);
	}
	template <typename T = bool> T TestFlag(int32_t flagMask) {
		return ((T (*)(GUIBaseCallback*, int32_t))(Il2CppBase() + 0x358598))(this, flagMask);
	}
};
