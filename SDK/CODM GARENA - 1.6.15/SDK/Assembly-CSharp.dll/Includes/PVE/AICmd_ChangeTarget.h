#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdChangeTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_ChangeTarget"));
	}

	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdChangeTarget*, uintptr_t))(Il2CppBase() + 0x4CE4768))(this, inParam);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdChangeTarget*))(Il2CppBase() + 0x4CE4858))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdChangeTarget*))(Il2CppBase() + 0x4CE4940))(this);
	}

};

}
