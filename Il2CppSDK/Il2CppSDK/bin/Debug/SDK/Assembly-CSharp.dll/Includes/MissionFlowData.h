#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissionFlowData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD794CC);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_UIDGenerator() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MissionFlowData*))(Il2CppBase() + 0x405C34))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_data() {
		return ((T (*)(MissionFlowData*))(Il2CppBase() + 0x405CE0))(this);
	}
	template <typename T = void*> T GetMission(int32_t uid) {
		return ((T (*)(MissionFlowData*, int32_t))(Il2CppBase() + 0x405CE8))(this, uid);
	}
	template <typename T = void*> T CreateNewMission() {
		return ((T (*)(MissionFlowData*))(Il2CppBase() + 0x405F40))(this);
	}
	template <typename T = void> T Save(void* file) {
		return ((T (*)(MissionFlowData*, void*))(Il2CppBase() + 0x406248))(this, file);
	}
	template <typename T = void> T Load(void* file) {
		return ((T (*)(MissionFlowData*, void*))(Il2CppBase() + 0x4066F0))(this, file);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(MissionFlowData*))(Il2CppBase() + 0x406C08))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MissionFlowData*))(Il2CppBase() + 0x406D44))(this);
	}
	template <typename T = int32_t> static T Sortm__B(void* m1, void* m2) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x406D48))(0, m1, m2);
	}
};
