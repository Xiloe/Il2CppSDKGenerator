#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class FieldOffsetAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "FieldOffsetAttribute"));
	}

	template <typename T = int32_t> T& val() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
