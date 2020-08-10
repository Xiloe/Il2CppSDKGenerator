#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldStatePropFactory
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79914);
	}
	// Fields
	template <typename T = void*> static T& m_UnusedProps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x288D38))(0);
	}
	template <typename T = void*> static T Create(void* key, bool state) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x285F70))(0, key, state);
	}
	template <typename T = void*> static T Create_1(void* key, int32_t state) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x286714))(0, key, state);
	}
	template <typename T = void*> static T Create_2(void* key, float state) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x28633C))(0, key, state);
	}
	template <typename T = void*> static T Create_3(void* key, void* state) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x286AE0))(0, key, state);
	}
	template <typename T = void*> static T Create_4(void* key, Il2CppVector3 vector) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x286E6C))(0, key, vector);
	}
	template <typename T = void*> static T Create_5(void* key, void* eventType) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x287250))(0, key, eventType);
	}
	template <typename T = void*> static T Create_6(void* key, void* state) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x28761C))(0, key, state);
	}
	template <typename T = void*> static T Create_7(void* key, void* pose) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x2879E8))(0, key, pose);
	}
	template <typename T = void> static T Return(void* prop) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x285E74))(0, prop);
	}
};
