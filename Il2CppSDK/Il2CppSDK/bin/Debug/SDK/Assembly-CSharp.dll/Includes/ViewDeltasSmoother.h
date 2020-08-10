#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewDeltasSmoother
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD798E0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Infos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ViewDeltasSmoother*))(Il2CppBase() + 0x27B8BC))(this);
	}
	template <typename T = void> T NoTouch() {
		return ((T (*)(ViewDeltasSmoother*))(Il2CppBase() + 0x27C628))(this);
	}
	template <typename T = void> T AddDelta(Il2CppVector2 delta) {
		return ((T (*)(ViewDeltasSmoother*, Il2CppVector2))(Il2CppBase() + 0x27BE14))(this, delta);
	}
	template <typename T = Il2CppVector2> T GetSmoothedDelta() {
		return ((T (*)(ViewDeltasSmoother*))(Il2CppBase() + 0x27C168))(this);
	}
};
