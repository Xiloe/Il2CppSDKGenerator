#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepairDestructibleObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& PlayerInside() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& EnemyInside() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = void*> T& m_Destructible() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RepairDestructibleObject*))(Il2CppBase() + 0x21FF5C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RepairDestructibleObject*))(Il2CppBase() + 0x21FF64))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RepairDestructibleObject*))(Il2CppBase() + 0x21FFFC))(this);
	}
	template <typename T = void> T OnTriggerStay(void* Other) {
		return ((T (*)(RepairDestructibleObject*, void*))(Il2CppBase() + 0x220098))(this, Other);
	}
	template <typename T = void> T Repair() {
		return ((T (*)(RepairDestructibleObject*))(Il2CppBase() + 0x22020C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RepairDestructibleObject*))(Il2CppBase() + 0x220468))(this);
	}
};
