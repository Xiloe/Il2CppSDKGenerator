#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldState
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78768);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& WorldStateProperties() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WorldState*))(Il2CppBase() + 0x285B3C))(this);
	}
	template <typename T = void*> T GetWSProperty(void* key) {
		return ((T (*)(WorldState*, void*))(Il2CppBase() + 0x285BDC))(this, key);
	}
	template <typename T = bool> T IsWSPropertySet(void* key) {
		return ((T (*)(WorldState*, void*))(Il2CppBase() + 0x285C28))(this, key);
	}
	template <typename T = void> T SetWSProperty(void* key, bool value) {
		return ((T (*)(WorldState*, void*, bool))(Il2CppBase() + 0x285C94))(this, key, value);
	}
	template <typename T = void> T SetWSProperty_1(void* key, float value) {
		return ((T (*)(WorldState*, void*, float))(Il2CppBase() + 0x28615C))(this, key, value);
	}
	template <typename T = void> T SetWSProperty_2(void* key, int32_t value) {
		return ((T (*)(WorldState*, void*, int32_t))(Il2CppBase() + 0x286534))(this, key, value);
	}
	template <typename T = void> T SetWSProperty_3(void* key, void* value) {
		return ((T (*)(WorldState*, void*, void*))(Il2CppBase() + 0x286900))(this, key, value);
	}
	template <typename T = void> T SetWSProperty_4(void* key, Il2CppVector3 value) {
		return ((T (*)(WorldState*, void*, Il2CppVector3))(Il2CppBase() + 0x286CCC))(this, key, value);
	}
	template <typename T = void> T SetWSProperty_5(void* key, void* value) {
		return ((T (*)(WorldState*, void*, void*))(Il2CppBase() + 0x287070))(this, key, value);
	}
	template <typename T = void> T SetWSProperty_6(void* key, void* value) {
		return ((T (*)(WorldState*, void*, void*))(Il2CppBase() + 0x28743C))(this, key, value);
	}
	template <typename T = void> T SetWSProperty_7(void* key, void* value) {
		return ((T (*)(WorldState*, void*, void*))(Il2CppBase() + 0x287808))(this, key, value);
	}
	template <typename T = void> T SetWSProperty_8(void* other) {
		return ((T (*)(WorldState*, void*))(Il2CppBase() + 0x287BD4))(this, other);
	}
	template <typename T = void> T ResetWSProperty(void* key) {
		return ((T (*)(WorldState*, void*))(Il2CppBase() + 0x287F20))(this, key);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WorldState*))(Il2CppBase() + 0x288038))(this);
	}
	template <typename T = void> T CopyWorldState(void* otherState) {
		return ((T (*)(WorldState*, void*))(Il2CppBase() + 0x288180))(this, otherState);
	}
	template <typename T = int32_t> T GetNumWorldStateDifferences(void* otherState) {
		return ((T (*)(WorldState*, void*))(Il2CppBase() + 0x288224))(this, otherState);
	}
	template <typename T = int32_t> T GetNumUnsatisfiedWorldStateProps(void* otherState) {
		return ((T (*)(WorldState*, void*))(Il2CppBase() + 0x2883BC))(this, otherState);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(WorldState*))(Il2CppBase() + 0x288458))(this);
	}
};
