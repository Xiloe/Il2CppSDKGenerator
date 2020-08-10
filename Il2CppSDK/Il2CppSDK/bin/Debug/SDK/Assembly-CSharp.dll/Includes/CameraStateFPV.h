#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraStateFPV
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789A0);
	}
	// Fields
	template <typename T = void*> T& Transform() {
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
		return ((T (*)(CameraStateFPV*, void*))(Il2CppBase() + 0x289194))(this, owner);
	}
	template <typename T = void*> T GetCameraWorldTransform() {
		return ((T (*)(CameraStateFPV*))(Il2CppBase() + 0x28926C))(this);
	}
	template <typename T = void*> T GetCameraFPVTransform() {
		return ((T (*)(CameraStateFPV*))(Il2CppBase() + 0x289290))(this);
	}
	template <typename T = void> T Activate(void* t) {
		return ((T (*)(CameraStateFPV*, void*))(Il2CppBase() + 0x2893B0))(this, t);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(CameraStateFPV*))(Il2CppBase() + 0x289468))(this);
	}
};
