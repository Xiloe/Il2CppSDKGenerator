#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UserSetProductSpecificDatacIterator2F
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& httpData__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& userId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& productId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& val() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& password() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& result() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& numRetries() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& $userId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& $productId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& $key() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& $val() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& $password() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& $result() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& $numRetries() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UserSetProductSpecificDatacIterator2F*))(Il2CppBase() + 0x2C9070))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(UserSetProductSpecificDatacIterator2F*))(Il2CppBase() + 0x2D0628))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UserSetProductSpecificDatacIterator2F*))(Il2CppBase() + 0x2D0630))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UserSetProductSpecificDatacIterator2F*))(Il2CppBase() + 0x2D0638))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UserSetProductSpecificDatacIterator2F*))(Il2CppBase() + 0x2D08D4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UserSetProductSpecificDatacIterator2F*))(Il2CppBase() + 0x2D08E0))(this);
	}
};
