#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Subtitles
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppColor> T& m_TextColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& myFont() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& cStyle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& myStyle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& myContent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& lastChangeTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& scale() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector2> T& pivotPoint() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Subtitles*))(Il2CppBase() + 0x2685DC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Subtitles*))(Il2CppBase() + 0x26862C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Subtitles*))(Il2CppBase() + 0x268630))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Subtitles*))(Il2CppBase() + 0x268854))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(Subtitles*))(Il2CppBase() + 0x268858))(this);
	}
	template <typename T = void> T RegenerateText() {
		return ((T (*)(Subtitles*))(Il2CppBase() + 0x2686D4))(this);
	}
};
