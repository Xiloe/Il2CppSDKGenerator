#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MappingChange
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& MappingChangeType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& Tiling1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& Offset1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& Tiling2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& Offset2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppColor> T& TextureColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppColor> T& m_TextureColor() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_Value() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MappingChange*))(Il2CppBase() + 0x3E262C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MappingChange*))(Il2CppBase() + 0x3E2674))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MappingChange*))(Il2CppBase() + 0x3E27F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MappingChange*))(Il2CppBase() + 0x3E2A94))(this);
	}
	template <typename T = void> T ApplyMappingChange() {
		return ((T (*)(MappingChange*))(Il2CppBase() + 0x3E2830))(this);
	}
	template <typename T = void> T ApplyColorChange() {
		return ((T (*)(MappingChange*))(Il2CppBase() + 0x3E2A40))(this);
	}
};
