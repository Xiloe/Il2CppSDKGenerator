#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Fact
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78E3C);
	}
	// Fields
	template <typename T = int32_t> T& m_DataMask() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Event() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_Pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_Dir() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Agent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Belief() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& LiveTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& Deleted() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Fact*))(Il2CppBase() + 0x3184F8))(this);
	}
	template <typename T = void*> T get_Type() {
		return ((T (*)(Fact*))(Il2CppBase() + 0x318514))(this);
	}
	template <typename T = void> T set_Type(void* value) {
		return ((T (*)(Fact*, void*))(Il2CppBase() + 0x31851C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(Fact*))(Il2CppBase() + 0x318530))(this);
	}
	template <typename T = void> T set_Position(Il2CppVector3 value) {
		return ((T (*)(Fact*, Il2CppVector3))(Il2CppBase() + 0x318544))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Direction() {
		return ((T (*)(Fact*))(Il2CppBase() + 0x31855C))(this);
	}
	template <typename T = void> T set_Direction(Il2CppVector3 value) {
		return ((T (*)(Fact*, Il2CppVector3))(Il2CppBase() + 0x318570))(this, value);
	}
	template <typename T = void*> T get_Agent() {
		return ((T (*)(Fact*))(Il2CppBase() + 0x318588))(this);
	}
	template <typename T = void> T set_Agent(void* value) {
		return ((T (*)(Fact*, void*))(Il2CppBase() + 0x318590))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Fact*))(Il2CppBase() + 0x3185A4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Fact*))(Il2CppBase() + 0x318604))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Fact*))(Il2CppBase() + 0x318758))(this);
	}
};
