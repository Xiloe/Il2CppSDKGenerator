#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequestResetPasswordcIterator3F
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
	template <typename T = Il2CppString*> T& usrIdSHA__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& secretCode__2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& message() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& subjectMsg() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& result() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& numRetries() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& $userId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& $message() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& $subjectMsg() {
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
		return ((T (*)(RequestResetPasswordcIterator3F*))(Il2CppBase() + 0x2C91F4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RequestResetPasswordcIterator3F*))(Il2CppBase() + 0x2CEAF0))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RequestResetPasswordcIterator3F*))(Il2CppBase() + 0x2CEAF8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RequestResetPasswordcIterator3F*))(Il2CppBase() + 0x2CEB00))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RequestResetPasswordcIterator3F*))(Il2CppBase() + 0x2CEE68))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RequestResetPasswordcIterator3F*))(Il2CppBase() + 0x2CEE74))(this);
	}
};
