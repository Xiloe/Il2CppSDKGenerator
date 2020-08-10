#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AndroidInput
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0x0);
		}
		// Methods
		template <typename T = void*> static T GetSecondaryTouch(int32_t index) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8E0158))(0, index);
		}
		template <typename T = void> static T INTERNAL_CALL_GetSecondaryTouch(int32_t index, void** value) {
			return ((T (*)(void *, int32_t, void**))(Il2CppBase() + 0x8E01A4))(0, index, value);
		}
		template <typename T = int32_t> static T get_touchCountSecondary() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E0244))(0);
		}
		template <typename T = bool> static T get_secondaryTouchEnabled() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E02D4))(0);
		}
		template <typename T = int32_t> static T get_secondaryTouchWidth() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E0364))(0);
		}
	};
}
