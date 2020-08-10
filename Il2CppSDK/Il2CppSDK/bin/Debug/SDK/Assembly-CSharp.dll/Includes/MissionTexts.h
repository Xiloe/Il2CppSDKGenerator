#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissionTexts
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7951C);
	}
	// Fields
	template <typename T = int32_t> T& m_Caption() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_Objective() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_Description() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_Success() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_Fail() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MissionTexts*))(Il2CppBase() + 0x40CE3C))(this);
	}
	template <typename T = int32_t> T get_caption() {
		return ((T (*)(MissionTexts*))(Il2CppBase() + 0x40BD2C))(this);
	}
	template <typename T = void> T set_caption(int32_t value) {
		return ((T (*)(MissionTexts*, int32_t))(Il2CppBase() + 0x40B53C))(this, value);
	}
	template <typename T = int32_t> T get_objective() {
		return ((T (*)(MissionTexts*))(Il2CppBase() + 0x40CE44))(this);
	}
	template <typename T = void> T set_objective(int32_t value) {
		return ((T (*)(MissionTexts*, int32_t))(Il2CppBase() + 0x40B544))(this, value);
	}
	template <typename T = int32_t> T get_description() {
		return ((T (*)(MissionTexts*))(Il2CppBase() + 0x40CE4C))(this);
	}
	template <typename T = void> T set_description(int32_t value) {
		return ((T (*)(MissionTexts*, int32_t))(Il2CppBase() + 0x40B54C))(this, value);
	}
	template <typename T = int32_t> T get_success() {
		return ((T (*)(MissionTexts*))(Il2CppBase() + 0x40CE54))(this);
	}
	template <typename T = void> T set_success(int32_t value) {
		return ((T (*)(MissionTexts*, int32_t))(Il2CppBase() + 0x40B554))(this, value);
	}
	template <typename T = int32_t> T get_fail() {
		return ((T (*)(MissionTexts*))(Il2CppBase() + 0x40CE5C))(this);
	}
	template <typename T = void> T set_fail(int32_t value) {
		return ((T (*)(MissionTexts*, int32_t))(Il2CppBase() + 0x40B55C))(this, value);
	}
	template <typename T = void*> static T CreateNew() {
		return ((T (*)(void *))(Il2CppBase() + 0x40A284))(0);
	}
	template <typename T = void> static T Destroy(void* texts) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x40CE64))(0, texts);
	}
	template <typename T = void> T Save(void* file, Il2CppString* keyPrefix) {
		return ((T (*)(MissionTexts*, void*, Il2CppString*))(Il2CppBase() + 0x409CD4))(this, file, keyPrefix);
	}
	template <typename T = void> T Load(void* file, Il2CppString* keyPrefix) {
		return ((T (*)(MissionTexts*, void*, Il2CppString*))(Il2CppBase() + 0x40A310))(this, file, keyPrefix);
	}
};
