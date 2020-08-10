#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DateInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& Year() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Month() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Day() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Hour() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Minute() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Second() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DateInfo*))(Il2CppBase() + 0x1E63D8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DateInfo*))(Il2CppBase() + 0x1E63E0))(this);
	}
};
