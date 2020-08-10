#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameZone
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& TimeToUpdate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameZone*))(Il2CppBase() + 0x335ED0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GameZone*))(Il2CppBase() + 0x335FB0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GameZone*))(Il2CppBase() + 0x336140))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(GameZone*))(Il2CppBase() + 0x33619C))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(GameZone*))(Il2CppBase() + 0x336648))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GameZone*))(Il2CppBase() + 0x336910))(this);
	}
	template <typename T = void> T RegisterControllableObject(void* inObject) {
		return ((T (*)(GameZone*, void*))(Il2CppBase() + 0x3143D4))(this, inObject);
	}
	template <typename T = void> T UnRegisterControllableObject(void* inObject) {
		return ((T (*)(GameZone*, void*))(Il2CppBase() + 0x336C24))(this, inObject);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(GameZone*))(Il2CppBase() + 0x336C28))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(GameZone*))(Il2CppBase() + 0x336EFC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GameZone*))(Il2CppBase() + 0x3371D0))(this);
	}
	template <typename T = void> T OnTriggerEnter(void* other) {
		return ((T (*)(GameZone*, void*))(Il2CppBase() + 0x3373A4))(this, other);
	}
	template <typename T = void> T OnTriggerExit(void* other) {
		return ((T (*)(GameZone*, void*))(Il2CppBase() + 0x33754C))(this, other);
	}
};
