#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessResponseCmdcIterator43
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& cmdData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& form__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& result() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& numRetries() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& $cmdData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& $result() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $numRetries() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProcessResponseCmdcIterator43*))(Il2CppBase() + 0x2C9300))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ProcessResponseCmdcIterator43*))(Il2CppBase() + 0x2CD328))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ProcessResponseCmdcIterator43*))(Il2CppBase() + 0x2CD330))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ProcessResponseCmdcIterator43*))(Il2CppBase() + 0x2CD338))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ProcessResponseCmdcIterator43*))(Il2CppBase() + 0x2CD4B0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ProcessResponseCmdcIterator43*))(Il2CppBase() + 0x2CD4BC))(this);
	}
};
