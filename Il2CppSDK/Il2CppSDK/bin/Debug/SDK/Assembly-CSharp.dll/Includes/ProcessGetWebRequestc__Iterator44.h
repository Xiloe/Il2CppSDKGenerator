#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessGetWebRequestcIterator44
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& httpReq__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $result() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& $url() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProcessGetWebRequestcIterator44*))(Il2CppBase() + 0x2C9950))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ProcessGetWebRequestcIterator44*))(Il2CppBase() + 0x2CCF54))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ProcessGetWebRequestcIterator44*))(Il2CppBase() + 0x2CCF5C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ProcessGetWebRequestcIterator44*))(Il2CppBase() + 0x2CCF64))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ProcessGetWebRequestcIterator44*))(Il2CppBase() + 0x2CD288))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ProcessGetWebRequestcIterator44*))(Il2CppBase() + 0x2CD294))(this);
	}
};
