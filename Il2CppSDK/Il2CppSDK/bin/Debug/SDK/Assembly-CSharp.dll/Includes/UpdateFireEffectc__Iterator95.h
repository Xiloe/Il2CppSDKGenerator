#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateFireEffectcIterator95
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UpdateFireEffectcIterator95*))(Il2CppBase() + 0x280A48))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(UpdateFireEffectcIterator95*))(Il2CppBase() + 0x281734))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UpdateFireEffectcIterator95*))(Il2CppBase() + 0x28173C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UpdateFireEffectcIterator95*))(Il2CppBase() + 0x281744))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UpdateFireEffectcIterator95*))(Il2CppBase() + 0x281990))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UpdateFireEffectcIterator95*))(Il2CppBase() + 0x28199C))(this);
	}
};
