#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrivateImplementationDetails
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> static T& $$field-0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& $$field-1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& $$field-2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = void*> static T& $$field-3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x848);
	}
	template <typename T = void*> static T& $$field-4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC48);
	}
	template <typename T = void*> static T& $$field-5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1048);
	}
	template <typename T = void*> static T& $$field-6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1090);
	}
	template <typename T = void*> static T& $$field-7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1490);
	}
	template <typename T = void*> static T& $$field-8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1890);
	}
	template <typename T = void*> static T& $$field-9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C90);
	}
	template <typename T = void*> static T& $$field-10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2090);
	}
	template <typename T = void*> static T& $$field-11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20B4);
	}
	template <typename T = void*> static T& $$field-12() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20CC);
	}
	template <typename T = void*> static T& $$field-13() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20D4);
	}
	template <typename T = void*> static T& $$field-14() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20E4);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PrivateImplementationDetails*))(Il2CppBase() + 0x197F50))(this);
	}
};
