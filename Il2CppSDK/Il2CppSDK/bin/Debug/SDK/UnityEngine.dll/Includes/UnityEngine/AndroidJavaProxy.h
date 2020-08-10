#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AndroidJavaProxy
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77D8C);
		}
		// Fields
		template <typename T = void*> T& javaInterface() {
			return *(T*)((uintptr_t)this + 0x8);
		}
		// Methods
		template <typename T = void> T _ctor(Il2CppString* javaInterface) {
			return ((T (*)(AndroidJavaProxy*, Il2CppString*))(Il2CppBase() + 0x8E1C08))(this, javaInterface);
		}
		template <typename T = void> T _ctor_1(void* javaInterface) {
			return ((T (*)(AndroidJavaProxy*, void*))(Il2CppBase() + 0x8E1CA8))(this, javaInterface);
		}
		template <typename T = void*> T Invoke(Il2CppString* methodName, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaProxy*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E1CC8))(this, methodName, args);
		}
		template <typename T = void*> T Invoke_1(Il2CppString* methodName, Il2CppArray<void*>* javaArgs) {
			return ((T (*)(AndroidJavaProxy*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E2720))(this, methodName, javaArgs);
		}
	};
}
