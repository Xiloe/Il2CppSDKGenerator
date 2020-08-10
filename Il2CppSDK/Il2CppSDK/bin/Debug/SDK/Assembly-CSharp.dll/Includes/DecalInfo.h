#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DecalInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector2> T& m_Pos() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector2> T& m_Size() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& m_UVMin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_UVMax() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Rot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_SpawnTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsDrop() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_Id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
};
