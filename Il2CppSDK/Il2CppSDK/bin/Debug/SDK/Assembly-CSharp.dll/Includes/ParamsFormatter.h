#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ParamsFormatter
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& sb() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& writer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ParamsFormatter*))(Il2CppBase() + 0x2CA13C))(this);
	}
	template <typename T = void> T AddField(Il2CppString* id, Il2CppString* val) {
		return ((T (*)(ParamsFormatter*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2CA220))(this, id, val);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ParamsFormatter*))(Il2CppBase() + 0x2D16B4))(this);
	}
};
