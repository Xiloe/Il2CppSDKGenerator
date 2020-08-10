#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetCloudPPICoroutinecIterator88
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GetCloudPPICoroutinecIterator88*))(Il2CppBase() + 0x206678))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(GetCloudPPICoroutinecIterator88*))(Il2CppBase() + 0x206C40))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetCloudPPICoroutinecIterator88*))(Il2CppBase() + 0x206C48))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetCloudPPICoroutinecIterator88*))(Il2CppBase() + 0x206C50))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetCloudPPICoroutinecIterator88*))(Il2CppBase() + 0x206C60))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetCloudPPICoroutinecIterator88*))(Il2CppBase() + 0x206C6C))(this);
	}
};
