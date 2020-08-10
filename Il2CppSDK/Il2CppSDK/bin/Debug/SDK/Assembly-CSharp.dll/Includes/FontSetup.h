#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FontSetup
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_FontName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Default() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_German() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_French() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Italian() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Japanese() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Chinese() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Korean() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FontSetup*))(Il2CppBase() + 0x3EE328))(this);
	}
	template <typename T = void*> T GetFont(void* inLanguage) {
		return ((T (*)(FontSetup*, void*))(Il2CppBase() + 0x3ED344))(this, inLanguage);
	}
};
