#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.AudioConfig.Base {

class CustomizedFieldInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.AudioConfig.Base", "CustomizedFieldInfo"));
	}

	template <typename T = int32_t> T& IndexOfKey() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Field() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& FieldNameAttrib() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
