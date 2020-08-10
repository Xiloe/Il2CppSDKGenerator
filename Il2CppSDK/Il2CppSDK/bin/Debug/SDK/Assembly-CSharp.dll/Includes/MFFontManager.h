#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MFFontManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7909C);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DefaultFontName_Static() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> T& m_DefaultFontName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_DefaultFont() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& m_Fonts() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MFFontManager*))(Il2CppBase() + 0x3EC994))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ECA98))(0);
	}
	template <typename T = Il2CppString*> static T get_defaultFontName() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ECB28))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MFFontManager*))(Il2CppBase() + 0x3ECCA0))(this);
	}
	template <typename T = void*> static T GetFont(Il2CppString* inFontName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3ECDEC))(0, inFontName);
	}
	template <typename T = void*> static T GetFont_1(Il2CppString* inFontName, void* inLanguage) {
		return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x3ECEBC))(0, inFontName, inLanguage);
	}
	template <typename T = void*> T _GetFont(Il2CppString* inFontName, void* inLanguage) {
		return ((T (*)(MFFontManager*, Il2CppString*, void*))(Il2CppBase() + 0x3ED000))(this, inFontName, inLanguage);
	}
	template <typename T = void*> static T GetManager_InEditor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ED3CC))(0);
	}
	template <typename T = void> T CheckDataConsistency() {
		return ((T (*)(MFFontManager*))(Il2CppBase() + 0x3ED5BC))(this);
	}
	template <typename T = bool> T CheckDataConsistencym__0(void* font) {
		return ((T (*)(MFFontManager*, void*))(Il2CppBase() + 0x3EE070))(this, font);
	}
	template <typename T = bool> static T CheckDataConsistencym__1(void* font) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3EE13C))(0, font);
	}
};
