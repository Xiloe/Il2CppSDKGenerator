#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LODModelResource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LODModelResource"));
	}

	template <typename T = unsigned char> T& lodLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LODModels() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& refCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UnLoadResource() {
		return ((T (*)(LODModelResource*))(Il2CppBase() + 0x434F418))(this);
	}

};

}
