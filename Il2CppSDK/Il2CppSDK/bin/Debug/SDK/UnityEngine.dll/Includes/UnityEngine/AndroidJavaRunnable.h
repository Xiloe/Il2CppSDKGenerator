#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AndroidJavaRunnable
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77D90);
		}
		// Methods
		template <typename T = void> T _ctor(void* object, void* method) {
			return ((T (*)(AndroidJavaRunnable*, void*, void*))(Il2CppBase() + 0x8E289C))(this, object, method);
		}
		template <typename T = void> T Invoke() {
			return ((T (*)(AndroidJavaRunnable*))(Il2CppBase() + 0x8E28B0))(this);
		}
		template <typename T = void*> T BeginInvoke(void* callback, void* object) {
			return ((T (*)(AndroidJavaRunnable*, void*, void*))(Il2CppBase() + 0x8E294C))(this, callback, object);
		}
		template <typename T = void> T EndInvoke(void* result) {
			return ((T (*)(AndroidJavaRunnable*, void*))(Il2CppBase() + 0x8E2978))(this, result);
		}
	};
}
