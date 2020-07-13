#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIScoreBroadcastTipsTweenAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIScoreBroadcastTipsTweenAnimation"));
	}

	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tweenScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bIsPlaying() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimationFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEventOnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(UIScoreBroadcastTipsTweenAnimation*))(Il2CppBase() + 0x3B0F574))(this);
	}
	template <typename T = float> T GetAnimationLength() {
		return ((T (*)(UIScoreBroadcastTipsTweenAnimation*))(Il2CppBase() + 0x3B0F57C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIScoreBroadcastTipsTweenAnimation*))(Il2CppBase() + 0x3B0F70C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIScoreBroadcastTipsTweenAnimation*))(Il2CppBase() + 0x3B0F81C))(this);
	}
	template <typename T = void> T PlayAnimation() {
		return ((T (*)(UIScoreBroadcastTipsTweenAnimation*))(Il2CppBase() + 0x3B0F9E8))(this);
	}
	template <typename T = void> T OnAnimationFinished() {
		return ((T (*)(UIScoreBroadcastTipsTweenAnimation*))(Il2CppBase() + 0x3B0FB90))(this);
	}
	template <typename T = void> T AddEventOnFinished(uintptr_t callback) {
		return ((T (*)(UIScoreBroadcastTipsTweenAnimation*, uintptr_t))(Il2CppBase() + 0x3B0FC34))(this, callback);
	}

};

}
