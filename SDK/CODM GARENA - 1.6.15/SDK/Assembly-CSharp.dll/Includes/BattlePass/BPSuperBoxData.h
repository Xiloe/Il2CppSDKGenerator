#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BPSuperBoxData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BPSuperBoxData"));
	}

	template <typename T = int32_t> T& BoxTarget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& BoxState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_BoxTarget() {
		return ((T (*)(BPSuperBoxData*))(Il2CppBase() + 0x2C4F33C))(this);
	}
	template <typename T = void> T set_BoxTarget(int32_t value) {
		return ((T (*)(BPSuperBoxData*, int32_t))(Il2CppBase() + 0x2C4F32C))(this, value);
	}
	template <typename T = uintptr_t> T get_BoxState() {
		return ((T (*)(BPSuperBoxData*))(Il2CppBase() + 0x2C4F344))(this);
	}
	template <typename T = void> T set_BoxState(uintptr_t value) {
		return ((T (*)(BPSuperBoxData*, uintptr_t))(Il2CppBase() + 0x2C4F334))(this, value);
	}

};

}
