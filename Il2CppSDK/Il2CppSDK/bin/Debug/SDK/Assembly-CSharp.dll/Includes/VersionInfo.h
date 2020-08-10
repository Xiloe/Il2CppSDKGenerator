#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VersionInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& Major() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Minor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Build() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Revision() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Code() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(VersionInfo*))(Il2CppBase() + 0x1E6438))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(VersionInfo*))(Il2CppBase() + 0x1E6440))(this);
	}
	template <typename T = Il2CppString*> T Version() {
		return ((T (*)(VersionInfo*))(Il2CppBase() + 0x1E66F0))(this);
	}
};
