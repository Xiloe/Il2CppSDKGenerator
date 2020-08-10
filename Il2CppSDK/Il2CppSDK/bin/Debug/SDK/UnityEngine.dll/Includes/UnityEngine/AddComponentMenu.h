#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AddComponentMenu
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0x0);
		}
		// Fields
		template <typename T = Il2CppString*> T& m_AddComponentMenu() {
			return *(T*)((uintptr_t)this + 0x8);
		}
		template <typename T = int32_t> T& m_Ordering() {
			return *(T*)((uintptr_t)this + 0xC);
		}
		// Methods
		template <typename T = void> T _ctor(Il2CppString* menuName) {
			return ((T (*)(AddComponentMenu*, Il2CppString*))(Il2CppBase() + 0x8DE2E8))(this, menuName);
		}
	};
}
