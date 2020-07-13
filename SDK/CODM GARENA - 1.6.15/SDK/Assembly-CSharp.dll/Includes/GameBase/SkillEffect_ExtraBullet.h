#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillEffectExtraBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillEffect_ExtraBullet"));
	}

	template <typename T = int32_t> T& m_addBulletCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTriggerEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExtraBulletFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ProcessTriggerEvent(uintptr_t optype, Il2CppArray<uintptr_t>* extraCtx) {
		return ((T (*)(SkillEffectExtraBullet*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3086790))(this, optype, extraCtx);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SkillEffectExtraBullet*))(Il2CppBase() + 0x3086C3C))(this);
	}
	template <typename T = void> T SetExtraBulletFlag(bool value) {
		return ((T (*)(SkillEffectExtraBullet*, bool))(Il2CppBase() + 0x3086A50))(this, value);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessTriggerEvent(uintptr_t P0, Il2CppArray<uintptr_t>* P1) {
		return ((T (*)(SkillEffectExtraBullet*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3086DC8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(SkillEffectExtraBullet*))(Il2CppBase() + 0x3086DCC))(this);
	}

};

}
