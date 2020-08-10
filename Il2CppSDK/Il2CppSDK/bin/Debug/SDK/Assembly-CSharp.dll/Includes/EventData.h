#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_TimeToTrigger() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_ReTriggerDelay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_TriggerCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_MaxTriggerCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* Name) {
		return ((T (*)(EventData*, Il2CppString*))(Il2CppBase() + 0x274478))(this, Name);
	}
};
