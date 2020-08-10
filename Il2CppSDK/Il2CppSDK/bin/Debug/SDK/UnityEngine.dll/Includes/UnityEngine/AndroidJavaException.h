#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AndroidJavaException
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77DAC);
		}
		// Fields
		template <typename T = Il2CppString*> T& mJavaStackTrace() {
			return *(T*)((uintptr_t)this + 0x34);
		}
		// Methods
		template <typename T = void> T _ctor(Il2CppString* message, Il2CppString* javaStackTrace) {
			return ((T (*)(AndroidJavaException*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x8E0938))(this, message, javaStackTrace);
		}
		template <typename T = Il2CppString*> T get_StackTrace() {
			return ((T (*)(AndroidJavaException*))(Il2CppBase() + 0x8E0958))(this);
		}
	};
}
