#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WriteDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "WriteDelegate"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(WriteDelegate*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FFCAF0))(this, buffer, offset, count);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t callback, uintptr_t object) {
		return ((T (*)(WriteDelegate*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FFBA10))(this, buffer, offset, count, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(WriteDelegate*, uintptr_t))(Il2CppBase() + 0x3FFBE74))(this, result);
	}

};

}
