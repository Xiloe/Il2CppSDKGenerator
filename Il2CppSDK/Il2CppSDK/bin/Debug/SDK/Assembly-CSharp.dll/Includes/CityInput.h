#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityInput
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78A28);
	}
	// Fields
	template <typename T = Il2CppVector3> T& MouseDragPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_Touching() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsDragging() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& m_DraggingEnabled() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = bool> T& m_Disabled() {
		return *(T*)((uintptr_t)this + 0x1F);
	}
	template <typename T = Il2CppList<void*>*> T& m_DragEvents() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<void*>*> T& m_TouchEvents() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CityInput*))(Il2CppBase() + 0x2AC4E0))(this);
	}
	template <typename T = void> T RegisterDragEvent(void* listener) {
		return ((T (*)(CityInput*, void*))(Il2CppBase() + 0x2980DC))(this, listener);
	}
	template <typename T = void> T RegisterTouchEvent(void* listener) {
		return ((T (*)(CityInput*, void*))(Il2CppBase() + 0x2AC4F0))(this, listener);
	}
	template <typename T = void> T Enable(bool scrolling) {
		return ((T (*)(CityInput*, bool))(Il2CppBase() + 0x2AC590))(this, scrolling);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(CityInput*))(Il2CppBase() + 0x2AC5A0))(this);
	}
	template <typename T = bool> T IsDisabled() {
		return ((T (*)(CityInput*))(Il2CppBase() + 0x2AC5B4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CityInput*))(Il2CppBase() + 0x2AC5BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CityInput*))(Il2CppBase() + 0x2AC690))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CityInput*))(Il2CppBase() + 0x2AC69C))(this);
	}
};
