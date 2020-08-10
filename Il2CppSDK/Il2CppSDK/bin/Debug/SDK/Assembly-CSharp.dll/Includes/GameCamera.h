#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameCamera
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789A8);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& CameraWorld() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& CameraFPV() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& CameraBehaviour() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& ChangeSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& DesiredFOV() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& DesiredNear() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameCamera*))(Il2CppBase() + 0x328960))(this);
	}
	template <typename T = float> T get_DefaultFOV() {
		return ((T (*)(GameCamera*))(Il2CppBase() + 0x328968))(this);
	}
	template <typename T = float> T get_CurrentFOV() {
		return ((T (*)(GameCamera*))(Il2CppBase() + 0x328974))(this);
	}
	template <typename T = Il2CppVector3> T get_CameraForward() {
		return ((T (*)(GameCamera*))(Il2CppBase() + 0x3289A0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GameCamera*))(Il2CppBase() + 0x3289CC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GameCamera*))(Il2CppBase() + 0x328B00))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GameCamera*))(Il2CppBase() + 0x328C64))(this);
	}
	template <typename T = void> T PlayCameraAnim(Il2CppString* animName) {
		return ((T (*)(GameCamera*, Il2CppString*))(Il2CppBase() + 0x328FF0))(this, animName);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GameCamera*))(Il2CppBase() + 0x32907C))(this);
	}
	template <typename T = void> T Activate(Il2CppVector3 pos, Il2CppVector3 lookAt) {
		return ((T (*)(GameCamera*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3290BC))(this, pos, lookAt);
	}
	template <typename T = void> T SetFov(float fov, float speed, float near) {
		return ((T (*)(GameCamera*, float, float, float))(Il2CppBase() + 0x329114))(this, fov, speed, near);
	}
	template <typename T = void> T SetDefaultFov(float speed) {
		return ((T (*)(GameCamera*, float))(Il2CppBase() + 0x329124))(this, speed);
	}
	template <typename T = void> T SetAgent(void* agent) {
		return ((T (*)(GameCamera*, void*))(Il2CppBase() + 0x329140))(this, agent);
	}
};
