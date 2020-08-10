#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetFriendListFromCloudCorutinecIterator47
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& action__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GetFriendListFromCloudCorutinecIterator47*))(Il2CppBase() + 0x31CC90))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(GetFriendListFromCloudCorutinecIterator47*))(Il2CppBase() + 0x31DFA8))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetFriendListFromCloudCorutinecIterator47*))(Il2CppBase() + 0x31DFB0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetFriendListFromCloudCorutinecIterator47*))(Il2CppBase() + 0x31DFB8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetFriendListFromCloudCorutinecIterator47*))(Il2CppBase() + 0x31E2C8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetFriendListFromCloudCorutinecIterator47*))(Il2CppBase() + 0x31E2D4))(this);
	}
};
