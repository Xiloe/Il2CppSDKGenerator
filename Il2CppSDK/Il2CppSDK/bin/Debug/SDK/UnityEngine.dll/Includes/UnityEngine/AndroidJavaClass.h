#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AndroidJavaClass
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77D88);
		}
		// Methods
		template <typename T = void> T _ctor(Il2CppString* className) {
			return ((T (*)(AndroidJavaClass*, Il2CppString*))(Il2CppBase() + 0x8D9D70))(this, className);
		}
		template <typename T = void> T _ctor_1(void* jclass) {
			return ((T (*)(AndroidJavaClass*, void*))(Il2CppBase() + 0x8DA800))(this, jclass);
		}
		template <typename T = void> T _AndroidJavaClass(Il2CppString* className) {
			return ((T (*)(AndroidJavaClass*, Il2CppString*))(Il2CppBase() + 0x8E03FC))(this, className);
		}
	};
}
