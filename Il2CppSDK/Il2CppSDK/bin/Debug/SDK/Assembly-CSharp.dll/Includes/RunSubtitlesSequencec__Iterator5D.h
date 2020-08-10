#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RunSubtitlesSequencecIterator5D
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& $s_385__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $s_386__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& l__2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RunSubtitlesSequencecIterator5D*))(Il2CppBase() + 0x39BE1C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RunSubtitlesSequencecIterator5D*))(Il2CppBase() + 0x39C42C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RunSubtitlesSequencecIterator5D*))(Il2CppBase() + 0x39C434))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RunSubtitlesSequencecIterator5D*))(Il2CppBase() + 0x39C43C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RunSubtitlesSequencecIterator5D*))(Il2CppBase() + 0x39C864))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RunSubtitlesSequencecIterator5D*))(Il2CppBase() + 0x39C870))(this);
	}
};
