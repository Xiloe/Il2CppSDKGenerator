#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntryPoint
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78E1C);
	}
	// Fields
	template <typename T = Il2CppColor> static T& Col() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EntryPoint*))(Il2CppBase() + 0x312440))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x312448))(0);
	}
	template <typename T = void*> T get_Transform() {
		return ((T (*)(EntryPoint*))(Il2CppBase() + 0x312508))(this);
	}
	template <typename T = void> T set_Transform(void* value) {
		return ((T (*)(EntryPoint*, void*))(Il2CppBase() + 0x312510))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EntryPoint*))(Il2CppBase() + 0x312518))(this);
	}
	template <typename T = void> static T DrawOrientedLine(Il2CppColor Col, Il2CppVector3 From, Il2CppVector3 To) {
		return ((T (*)(void *, Il2CppColor, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x312550))(0, Col, From, To);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(EntryPoint*))(Il2CppBase() + 0x3128E0))(this);
	}
};
