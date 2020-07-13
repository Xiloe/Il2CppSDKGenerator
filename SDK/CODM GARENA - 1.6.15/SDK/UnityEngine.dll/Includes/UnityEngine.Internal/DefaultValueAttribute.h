#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Internal {

class DefaultValueAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Internal", "DefaultValueAttribute"));
	}

	template <typename T = uintptr_t> T& DefaultValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(DefaultValueAttribute*))(Il2CppBase() + 0x47A3AB8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(DefaultValueAttribute*, uintptr_t))(Il2CppBase() + 0x47A3AC0))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DefaultValueAttribute*))(Il2CppBase() + 0x47A3BA8))(this);
	}

};

}
