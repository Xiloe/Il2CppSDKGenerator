#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EncodingStringWriter
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79860);
	}
	// Fields
	template <typename T = void*> T& m_Encoding() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(void* builder, void* encoding) {
		return ((T (*)(EncodingStringWriter*, void*, void*))(Il2CppBase() + 0x30E070))(this, builder, encoding);
	}
	template <typename T = void*> T get_Encoding() {
		return ((T (*)(EncodingStringWriter*))(Il2CppBase() + 0x30E090))(this);
	}
};
