#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class KillStreakData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "KillStreakData"));
	}

	template <typename T = uint32_t> T& StreakId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(KillStreakData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x482F260))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(KillStreakData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x482F328))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x482F3E0))(0, data, DataIndex);
	}

};

}
