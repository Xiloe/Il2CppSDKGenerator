#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AudioModuleStoreData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AudioModuleStoreData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& AudioModules() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(AudioModuleStoreData*, uintptr_t))(Il2CppBase() + 0x35DF3A8))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AudioModuleStoreData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35DF4D4))(this, bytes, position);
	}

};

}
