#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BoneInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Bone() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Modifier() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	// Methods
	template <typename T = void> T Init(Il2CppString* boneName, Il2CppArray<void*>* bones) {
		return ((T (*)(BoneInfo*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x3D612C))(this, boneName, bones);
	}
	template <typename T = void> T ApplyModifier() {
		return ((T (*)(BoneInfo*))(Il2CppBase() + 0x3D6134))(this);
	}
	template <typename T = int32_t> static T FindBone(Il2CppString* boneName, Il2CppArray<void*>* bones) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x3D6000))(0, boneName, bones);
	}
};
