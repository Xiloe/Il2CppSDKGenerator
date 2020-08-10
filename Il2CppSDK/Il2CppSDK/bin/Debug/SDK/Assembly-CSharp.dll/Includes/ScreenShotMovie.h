#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScreenShotMovie
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_FolderName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_FrameRate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_CaptureCamera() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_SuperSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_RealFolder() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_Capture() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<void*>*> T& m_AnimTargets() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ScreenShotMovie*))(Il2CppBase() + 0x229B8C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ScreenShotMovie*))(Il2CppBase() + 0x229C6C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ScreenShotMovie*))(Il2CppBase() + 0x22A128))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(ScreenShotMovie*))(Il2CppBase() + 0x22A3D0))(this);
	}
	template <typename T = void> T StartCapture() {
		return ((T (*)(ScreenShotMovie*))(Il2CppBase() + 0x22A2B8))(this);
	}
};
