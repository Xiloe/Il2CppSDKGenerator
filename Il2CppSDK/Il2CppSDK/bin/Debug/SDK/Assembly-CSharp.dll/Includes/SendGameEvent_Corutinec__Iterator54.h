#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendGameEventCorutinecIterator54
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& inDelay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& inEventName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& inState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& $inDelay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& $inEventName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& $inState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SendGameEventCorutinecIterator54*))(Il2CppBase() + 0x403D1C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SendGameEventCorutinecIterator54*))(Il2CppBase() + 0x4059A4))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SendGameEventCorutinecIterator54*))(Il2CppBase() + 0x4059AC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SendGameEventCorutinecIterator54*))(Il2CppBase() + 0x4059B4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SendGameEventCorutinecIterator54*))(Il2CppBase() + 0x405AC8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SendGameEventCorutinecIterator54*))(Il2CppBase() + 0x405AD4))(this);
	}
};
