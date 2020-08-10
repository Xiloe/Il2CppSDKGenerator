#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateFriendsDataCorutinecIterator48
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<Il2CppString*>*> T& inFriends() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& jsonStr__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& action__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& $inFriends() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UpdateFriendsDataCorutinecIterator48*))(Il2CppBase() + 0x31D5A4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(UpdateFriendsDataCorutinecIterator48*))(Il2CppBase() + 0x31E974))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UpdateFriendsDataCorutinecIterator48*))(Il2CppBase() + 0x31E97C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UpdateFriendsDataCorutinecIterator48*))(Il2CppBase() + 0x31E984))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UpdateFriendsDataCorutinecIterator48*))(Il2CppBase() + 0x31EC9C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UpdateFriendsDataCorutinecIterator48*))(Il2CppBase() + 0x31ECA8))(this);
	}
};
