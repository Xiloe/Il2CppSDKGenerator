#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimateNumbercIterator1C
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& finalValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& initValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& step__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& number() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& val__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& scaleXOrig__2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& scaleYOrig__3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& scaleX__4() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& scaleY__5() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& scaleXStep__6() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& scaleYStep__7() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& suffix() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& speedModif() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& $finalValue() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& $initValue() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& $number() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& $suffix() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& $speedModif() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AnimateNumbercIterator1C*))(Il2CppBase() + 0x2A9B28))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(AnimateNumbercIterator1C*))(Il2CppBase() + 0x2A9CD4))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AnimateNumbercIterator1C*))(Il2CppBase() + 0x2A9CDC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(AnimateNumbercIterator1C*))(Il2CppBase() + 0x2A9CE4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AnimateNumbercIterator1C*))(Il2CppBase() + 0x2AA478))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimateNumbercIterator1C*))(Il2CppBase() + 0x2AA484))(this);
	}
};
