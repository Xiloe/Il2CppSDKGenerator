#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissionGraphicData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Random() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Random2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<void*>*> T& availableLevels() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MissionGraphicData*))(Il2CppBase() + 0x406DBC))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_data() {
		return ((T (*)(MissionGraphicData*))(Il2CppBase() + 0x406F88))(this);
	}
	template <typename T = bool> T AnyMatchingLevelAvailable(Il2CppList<Il2CppString*>* levels, int32_t storyId) {
		return ((T (*)(MissionGraphicData*, Il2CppList<Il2CppString*>*, int32_t))(Il2CppBase() + 0x406F90))(this, levels, storyId);
	}
	template <typename T = void*> T GetRandomMatchingLevel(Il2CppList<Il2CppString*>* levels, int32_t storyId) {
		return ((T (*)(MissionGraphicData*, Il2CppList<Il2CppString*>*, int32_t))(Il2CppBase() + 0x40773C))(this, levels, storyId);
	}
	template <typename T = void*> T FindInfo(Il2CppString* level) {
		return ((T (*)(MissionGraphicData*, Il2CppString*))(Il2CppBase() + 0x407498))(this, level);
	}
};
