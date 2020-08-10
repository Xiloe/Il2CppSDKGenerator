#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MusicEvent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> static T& m_DefaultName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Clip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_FadeOutTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_FadeInTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Volume() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* name, void* clip, float fadeoutTime, float fadeInTime, float volume) {
		return ((T (*)(MusicEvent*, Il2CppString*, void*, float, float, float))(Il2CppBase() + 0x40D200))(this, name, clip, fadeoutTime, fadeInTime, volume);
	}
	template <typename T = void> T _ctor_1() {
		return ((T (*)(MusicEvent*))(Il2CppBase() + 0x40E398))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x40E480))(0);
	}
};
