#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RetrieveProgressFromCloudCorutinecIterator4A
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& inAction() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& jsonData__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ppi__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& progress__2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& e__3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& $inAction() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RetrieveProgressFromCloudCorutinecIterator4A*))(Il2CppBase() + 0x32AA4C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RetrieveProgressFromCloudCorutinecIterator4A*))(Il2CppBase() + 0x32B0BC))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RetrieveProgressFromCloudCorutinecIterator4A*))(Il2CppBase() + 0x32B0C4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RetrieveProgressFromCloudCorutinecIterator4A*))(Il2CppBase() + 0x32B0CC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RetrieveProgressFromCloudCorutinecIterator4A*))(Il2CppBase() + 0x32B670))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RetrieveProgressFromCloudCorutinecIterator4A*))(Il2CppBase() + 0x32B67C))(this);
	}
};
