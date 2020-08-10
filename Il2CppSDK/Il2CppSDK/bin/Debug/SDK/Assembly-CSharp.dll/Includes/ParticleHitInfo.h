#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ParticleHitInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& boneName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& particle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& boneIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ParticleHitInfo*))(Il2CppBase() + 0x2DA998))(this);
	}
};
