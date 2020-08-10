#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerLevelData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79618);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayerLevelData*))(Il2CppBase() + 0x201A9C))(this);
	}
	template <typename T = int32_t> T GetRankCount() {
		return ((T (*)(PlayerLevelData*))(Il2CppBase() + 0x201B48))(this);
	}
	template <typename T = void*> T GetInfo(int32_t playerLevel) {
		return ((T (*)(PlayerLevelData*, int32_t))(Il2CppBase() + 0x201BE0))(this, playerLevel);
	}
	template <typename T = void*> T GetInfoByPlayerXp(int32_t playerXp) {
		return ((T (*)(PlayerLevelData*, int32_t))(Il2CppBase() + 0x201DE4))(this, playerXp);
	}
	template <typename T = Il2CppList<void*>*> T get_data() {
		return ((T (*)(PlayerLevelData*))(Il2CppBase() + 0x20206C))(this);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(PlayerLevelData*))(Il2CppBase() + 0x202074))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayerLevelData*))(Il2CppBase() + 0x2021B0))(this);
	}
	template <typename T = int32_t> static T Sortm__1B(void* d1, void* d2) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x2021B4))(0, d1, d2);
	}
};
