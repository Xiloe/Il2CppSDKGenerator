#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AndroidJavaRunnableProxy
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77D78);
		}
		// Fields
		template <typename T = void*> T& mRunnable() {
			return *(T*)((uintptr_t)this + 0xC);
		}
		// Methods
		template <typename T = void> T _ctor(void* runnable) {
			return ((T (*)(AndroidJavaRunnableProxy*, void*))(Il2CppBase() + 0x8D75F4))(this, runnable);
		}
		template <typename T = void> T run() {
			return ((T (*)(AndroidJavaRunnableProxy*))(Il2CppBase() + 0x8E2984))(this);
		}
	};
}
