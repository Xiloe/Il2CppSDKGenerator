#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerWaterDrops
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_NumDropsPerSecond() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_NumDropsToGenerate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_LastGenerateTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TriggerWaterDrops*))(Il2CppBase() + 0x2768FC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TriggerWaterDrops*))(Il2CppBase() + 0x27691C))(this);
	}
	template <typename T = void> T OnTriggerStay(void* other) {
		return ((T (*)(TriggerWaterDrops*, void*))(Il2CppBase() + 0x276920))(this, other);
	}
	template <typename T = void> T OnTriggerEnter(void* other) {
		return ((T (*)(TriggerWaterDrops*, void*))(Il2CppBase() + 0x276BAC))(this, other);
	}
	template <typename T = void> T OnTriggerExit() {
		return ((T (*)(TriggerWaterDrops*))(Il2CppBase() + 0x276BB0))(this);
	}
	template <typename T = void> T GenerateDrops() {
		return ((T (*)(TriggerWaterDrops*))(Il2CppBase() + 0x276A8C))(this);
	}
};
