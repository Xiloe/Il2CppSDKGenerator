#pragma once
#include <Il2Cpp/Il2Cpp.h>

class replaceShaderControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "replaceShaderControl"));
	}

	template <typename T = uintptr_t> T& m_rt() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_rtSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_save() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DumpRenderTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(replaceShaderControl*))(Il2CppBase() + 0x412F4D0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(replaceShaderControl*))(Il2CppBase() + 0x412F60C))(this);
	}
	template <typename T = void> T save() {
		return ((T (*)(replaceShaderControl*))(Il2CppBase() + 0x412F6CC))(this);
	}
	template <typename T = void> static T DumpRenderTexture(uintptr_t rt, Il2CppString* pngOutPath) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x412F764))(0, rt, pngOutPath);
	}

};

}
