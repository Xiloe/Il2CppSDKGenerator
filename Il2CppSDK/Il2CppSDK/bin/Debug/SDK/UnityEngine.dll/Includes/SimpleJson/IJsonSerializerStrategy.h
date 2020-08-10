#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace SimpleJson { 
	class IJsonSerializerStrategy
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77D6C);
		}
		// Methods
		template <typename T = bool> T TrySerializeNonPrimitiveObject(void* input, void** output) {
			return ((T (*)(IJsonSerializerStrategy*, void*, void**))(Il2CppBase() + 0x0))(this, input, output);
		}
	};
}
