#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldStateProp
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7991C);
	}
	// Fields
	template <typename T = void*> T& PropKey() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& PropType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Bool() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Int() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Float() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& Vector() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& Agent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& Event() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& CoverState() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& BodyPose() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor(bool state) {
		return ((T (*)(WorldStateProp*, bool))(Il2CppBase() + 0x2885EC))(this, state);
	}
	template <typename T = void> T _ctor_1(int32_t state) {
		return ((T (*)(WorldStateProp*, int32_t))(Il2CppBase() + 0x288614))(this, state);
	}
	template <typename T = void> T _ctor_2(float state) {
		return ((T (*)(WorldStateProp*, float))(Il2CppBase() + 0x28863C))(this, state);
	}
	template <typename T = void> T _ctor_3(void* state) {
		return ((T (*)(WorldStateProp*, void*))(Il2CppBase() + 0x288664))(this, state);
	}
	template <typename T = void> T _ctor_4(Il2CppVector3 vector) {
		return ((T (*)(WorldStateProp*, Il2CppVector3))(Il2CppBase() + 0x28868C))(this, vector);
	}
	template <typename T = void> T _ctor_5(void* eventType) {
		return ((T (*)(WorldStateProp*, void*))(Il2CppBase() + 0x2886C4))(this, eventType);
	}
	template <typename T = void> T _ctor_6(void* state) {
		return ((T (*)(WorldStateProp*, void*))(Il2CppBase() + 0x2886EC))(this, state);
	}
	template <typename T = void> T _ctor_7(void* pose) {
		return ((T (*)(WorldStateProp*, void*))(Il2CppBase() + 0x288714))(this, pose);
	}
	template <typename T = Il2CppString*> T get_PropName() {
		return ((T (*)(WorldStateProp*))(Il2CppBase() + 0x28873C))(this);
	}
	template <typename T = bool> T GetBool() {
		return ((T (*)(WorldStateProp*))(Il2CppBase() + 0x287ED4))(this);
	}
	template <typename T = int32_t> T GetInt() {
		return ((T (*)(WorldStateProp*))(Il2CppBase() + 0x287EDC))(this);
	}
	template <typename T = float> T GetFloat() {
		return ((T (*)(WorldStateProp*))(Il2CppBase() + 0x287EE4))(this);
	}
	template <typename T = Il2CppVector3> T GetVector() {
		return ((T (*)(WorldStateProp*))(Il2CppBase() + 0x287EEC))(this);
	}
	template <typename T = void*> T GetAgent() {
		return ((T (*)(WorldStateProp*))(Il2CppBase() + 0x287F00))(this);
	}
	template <typename T = void*> T GetEvent() {
		return ((T (*)(WorldStateProp*))(Il2CppBase() + 0x287F08))(this);
	}
	template <typename T = void*> T GetCoverState() {
		return ((T (*)(WorldStateProp*))(Il2CppBase() + 0x287F10))(this);
	}
	template <typename T = void*> T GetBodyPose() {
		return ((T (*)(WorldStateProp*))(Il2CppBase() + 0x287F18))(this);
	}
	template <typename T = bool> T Equals(void* o) {
		return ((T (*)(WorldStateProp*, void*))(Il2CppBase() + 0x288814))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(WorldStateProp*))(Il2CppBase() + 0x288A0C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(WorldStateProp*))(Il2CppBase() + 0x288A50))(this);
	}
	template <typename T = bool> static T op_Equality(void* prop, void* other) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x287E78))(0, prop, other);
	}
	template <typename T = bool> static T op_Inequality(void* prop, void* other) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x285C80))(0, prop, other);
	}
};
