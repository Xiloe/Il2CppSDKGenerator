#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraState3RD
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7899C);
	}
	// Fields
	template <typename T = void*> T& DefaultPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& DefaultLookat() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Offset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& OffsetTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(CameraState3RD*, void*))(Il2CppBase() + 0x288DE8))(this, owner);
	}
	template <typename T = void*> T GetCameraFPVTransform() {
		return ((T (*)(CameraState3RD*))(Il2CppBase() + 0x288DF0))(this);
	}
	template <typename T = void*> T GetCameraWorldTransform() {
		return ((T (*)(CameraState3RD*))(Il2CppBase() + 0x288E7C))(this);
	}
	template <typename T = void> T Activate(void* t) {
		return ((T (*)(CameraState3RD*, void*))(Il2CppBase() + 0x288FB4))(this, t);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(CameraState3RD*))(Il2CppBase() + 0x28918C))(this);
	}
};
