#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiLoading
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& FirstHintTextIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& lastHintTextIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& HACK_FrameCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isInitialized() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& guiManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& widget() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& alpha() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiLoading*))(Il2CppBase() + 0x387D80))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GuiLoading*))(Il2CppBase() + 0x387D9C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuiLoading*))(Il2CppBase() + 0x387EA4))(this);
	}
};
