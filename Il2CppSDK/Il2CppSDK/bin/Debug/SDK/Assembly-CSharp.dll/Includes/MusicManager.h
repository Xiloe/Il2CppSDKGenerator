#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MusicManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7889C);
	}
	// Fields
	template <typename T = void*> T& defaultEvent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& musicEvents() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& UnmodifiedVolume() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& OptionsVolume() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& FadeMusicVolume() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& Audio() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MusicManager*))(Il2CppBase() + 0x40D0EC))(this);
	}
	template <typename T = void*> T get_Audio() {
		return ((T (*)(MusicManager*))(Il2CppBase() + 0x40D254))(this);
	}
	template <typename T = void> T set_Audio(void* value) {
		return ((T (*)(MusicManager*, void*))(Il2CppBase() + 0x40D25C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MusicManager*))(Il2CppBase() + 0x40D264))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MusicManager*))(Il2CppBase() + 0x40D304))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MusicManager*))(Il2CppBase() + 0x40D30C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MusicManager*))(Il2CppBase() + 0x40D378))(this);
	}
	template <typename T = void> T PlayMusic(Il2CppString* inMusicName) {
		return ((T (*)(MusicManager*, Il2CppString*))(Il2CppBase() + 0x40D520))(this, inMusicName);
	}
	template <typename T = void> T ApplyOptionsChange() {
		return ((T (*)(MusicManager*))(Il2CppBase() + 0x40D8A0))(this);
	}
	template <typename T = void> T PlayDefaultMusic() {
		return ((T (*)(MusicManager*))(Il2CppBase() + 0x4053D4))(this);
	}
	template <typename T = void> T FadeOutMusic(float fadeOutTime) {
		return ((T (*)(MusicManager*, float))(Il2CppBase() + 0x404560))(this, fadeOutTime);
	}
	template <typename T = Il2CppArray<void*>*> T GetAvailibleMusicEvents() {
		return ((T (*)(MusicManager*))(Il2CppBase() + 0x40DAB4))(this);
	}
	template <typename T = void> T SetNewMusic(void* inMusic) {
		return ((T (*)(MusicManager*, void*))(Il2CppBase() + 0x40D834))(this, inMusic);
	}
	template <typename T = void> T SetNewMusic_1(void* clip, float volume, float fadeOutTime, float fadeIntime) {
		return ((T (*)(MusicManager*, void*, float, float, float))(Il2CppBase() + 0x40DE64))(this, clip, volume, fadeOutTime, fadeIntime);
	}
	template <typename T = void*> T SwitchMusic(void* clip, float inMusicVolume, float fadeOutTime, float fadeIntime) {
		return ((T (*)(MusicManager*, void*, float, float, float))(Il2CppBase() + 0x40D9D8))(this, clip, inMusicVolume, fadeOutTime, fadeIntime);
	}
};
