#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CitySiteIcon
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& indicatorIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& m_MaxDifficulty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CitySiteIcon*))(Il2CppBase() + 0x2BC5F4))(this);
	}
	template <typename T = void*> T get_siteInfo() {
		return ((T (*)(CitySiteIcon*))(Il2CppBase() + 0x2B294C))(this);
	}
	template <typename T = void*> T get_missionInfo() {
		return ((T (*)(CitySiteIcon*))(Il2CppBase() + 0x2B3FD8))(this);
	}
	template <typename T = void*> T get_arenaInfo() {
		return ((T (*)(CitySiteIcon*))(Il2CppBase() + 0x2B5724))(this);
	}
	template <typename T = void*> T get_moneyInfo() {
		return ((T (*)(CitySiteIcon*))(Il2CppBase() + 0x2BC604))(this);
	}
	template <typename T = void> T Init(void* info) {
		return ((T (*)(CitySiteIcon*, void*))(Il2CppBase() + 0x2BC6BC))(this, info);
	}
	template <typename T = void> T PrepareForDestroy() {
		return ((T (*)(CitySiteIcon*))(Il2CppBase() + 0x2BD88C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CitySiteIcon*))(Il2CppBase() + 0x2BD890))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CitySiteIcon*))(Il2CppBase() + 0x2BD894))(this);
	}
};
