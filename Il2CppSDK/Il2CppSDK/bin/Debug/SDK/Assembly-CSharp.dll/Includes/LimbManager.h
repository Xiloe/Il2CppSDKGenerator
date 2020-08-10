#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LimbManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78C9C);
	}
	// Fields
	template <typename T = void*> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_Initialized() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Head() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ArmL() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_ArmR() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_LegL() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_LegR() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& LimbsDecapitated() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(LimbManager*, void*))(Il2CppBase() + 0x3D5560))(this, owner);
	}
	template <typename T = int32_t> T get_LimbsDecapitated() {
		return ((T (*)(LimbManager*))(Il2CppBase() + 0x3D5580))(this);
	}
	template <typename T = void> T set_LimbsDecapitated(int32_t value) {
		return ((T (*)(LimbManager*, int32_t))(Il2CppBase() + 0x3D5588))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LimbManager*))(Il2CppBase() + 0x3D5590))(this);
	}
	template <typename T = bool> T DecapitateLimbs(void* bodyPart, bool willDie) {
		return ((T (*)(LimbManager*, void*, bool))(Il2CppBase() + 0x3D58BC))(this, bodyPart, willDie);
	}
	template <typename T = void> T UpdateDecapitatedLimbs() {
		return ((T (*)(LimbManager*))(Il2CppBase() + 0x3D5AA0))(this);
	}
	template <typename T = bool> T IsScaled(void* limbID, float scale, float threshold) {
		return ((T (*)(LimbManager*, void*, float, float))(Il2CppBase() + 0x3D5B88))(this, limbID, scale, threshold);
	}
	template <typename T = void> T StartCrawl(void* side) {
		return ((T (*)(LimbManager*, void*))(Il2CppBase() + 0x3D59A8))(this, side);
	}
	template <typename T = void*> T _DoCrawlTransition(Il2CppString* animName) {
		return ((T (*)(LimbManager*, Il2CppString*))(Il2CppBase() + 0x3D5CA8))(this, animName);
	}
};
