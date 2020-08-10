#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifyItemscIterator39
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& httpData__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& sb__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& writer__2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<void*>*> T& items() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<void*>*> T& $s_248__3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $s_249__4() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& curr__5() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& productId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& password() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& userId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& result() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& numRetries() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<void*>*> T& $items() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& $productId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& $password() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& $userId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& $result() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& $numRetries() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ModifyItemscIterator39*))(Il2CppBase() + 0x2C91C4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ModifyItemscIterator39*))(Il2CppBase() + 0x2CCA30))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ModifyItemscIterator39*))(Il2CppBase() + 0x2CCA38))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ModifyItemscIterator39*))(Il2CppBase() + 0x2CCA40))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ModifyItemscIterator39*))(Il2CppBase() + 0x2CCEB4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ModifyItemscIterator39*))(Il2CppBase() + 0x2CCEC0))(this);
	}
};
