#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BackupProgressToCloudCorutinecIterator49
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& inAction() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& inPPI() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& inProgress() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $inAction() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& $inPPI() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& $inProgress() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BackupProgressToCloudCorutinecIterator49*))(Il2CppBase() + 0x32AA44))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(BackupProgressToCloudCorutinecIterator49*))(Il2CppBase() + 0x32AD68))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BackupProgressToCloudCorutinecIterator49*))(Il2CppBase() + 0x32AD70))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BackupProgressToCloudCorutinecIterator49*))(Il2CppBase() + 0x32AD78))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(BackupProgressToCloudCorutinecIterator49*))(Il2CppBase() + 0x32B01C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BackupProgressToCloudCorutinecIterator49*))(Il2CppBase() + 0x32B028))(this);
	}
};
