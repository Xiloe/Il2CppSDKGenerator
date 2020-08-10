#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace SimpleJson { 
	class JsonArray
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77D64);
		}
		// Methods
		template <typename T = void> T _ctor() {
			return ((T (*)(JsonArray*))(Il2CppBase() + 0x8CF554))(this);
		}
		template <typename T = Il2CppString*> T ToString() {
			return ((T (*)(JsonArray*))(Il2CppBase() + 0x8CF608))(this);
		}
	};
}
