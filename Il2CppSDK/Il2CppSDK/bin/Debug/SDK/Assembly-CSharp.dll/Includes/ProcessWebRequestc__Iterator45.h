#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessWebRequestcIterator45
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& currRetryTimeout__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& result() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& servletURL__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& cmdURL() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& i__2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& numRetries() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& httpData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& httpPutReq__3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& $result() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& $cmdURL() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& $numRetries() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& $httpData() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProcessWebRequestcIterator45*))(Il2CppBase() + 0x2C9E4C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ProcessWebRequestcIterator45*))(Il2CppBase() + 0x2CD550))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ProcessWebRequestcIterator45*))(Il2CppBase() + 0x2CD558))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ProcessWebRequestcIterator45*))(Il2CppBase() + 0x2CD560))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ProcessWebRequestcIterator45*))(Il2CppBase() + 0x2CDAC8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ProcessWebRequestcIterator45*))(Il2CppBase() + 0x2CDAD4))(this);
	}
};
