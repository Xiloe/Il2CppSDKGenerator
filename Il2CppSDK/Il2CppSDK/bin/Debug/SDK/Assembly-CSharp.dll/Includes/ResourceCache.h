#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourceCache
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD787D8);
	}
	// Fields
	template <typename T = void*> T& m_Resource() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_ResourceName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_CacheSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_CacheSizeIncrement() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& m_FreeObjects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(void* Resource, int32_t InitSize) {
		return ((T (*)(ResourceCache*, void*, int32_t))(Il2CppBase() + 0x22046C))(this, Resource, InitSize);
	}
	template <typename T = void> T _ctor_1(void* Resource, int32_t InitSize, int32_t SizeIncrement) {
		return ((T (*)(ResourceCache*, void*, int32_t, int32_t))(Il2CppBase() + 0x220488))(this, Resource, InitSize, SizeIncrement);
	}
	template <typename T = void> T _ctor_2(Il2CppString* ResourceName, int32_t InitSize) {
		return ((T (*)(ResourceCache*, Il2CppString*, int32_t))(Il2CppBase() + 0x220934))(this, ResourceName, InitSize);
	}
	template <typename T = void> T _ctor_3(Il2CppString* ResourceName, int32_t InitSize, int32_t SizeIncrement) {
		return ((T (*)(ResourceCache*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x220950))(this, ResourceName, InitSize, SizeIncrement);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(ResourceCache*))(Il2CppBase() + 0x220A9C))(this);
	}
	template <typename T = void*> T Get() {
		return ((T (*)(ResourceCache*))(Il2CppBase() + 0x220B8C))(this);
	}
	template <typename T = void> T Return(void* Obj) {
		return ((T (*)(ResourceCache*, void*))(Il2CppBase() + 0x220DA0))(this, Obj);
	}
	template <typename T = int32_t> T GetFreeNum() {
		return ((T (*)(ResourceCache*))(Il2CppBase() + 0x220FB4))(this);
	}
	template <typename T = int32_t> T GetUsedNum() {
		return ((T (*)(ResourceCache*))(Il2CppBase() + 0x22104C))(this);
	}
	template <typename T = bool> T IsResizeable() {
		return ((T (*)(ResourceCache*))(Il2CppBase() + 0x2210EC))(this);
	}
	template <typename T = void*> T GetResource() {
		return ((T (*)(ResourceCache*))(Il2CppBase() + 0x221100))(this);
	}
	template <typename T = Il2CppString*> T GetResourceName() {
		return ((T (*)(ResourceCache*))(Il2CppBase() + 0x221108))(this);
	}
	template <typename T = void> T AllocateObjects(int32_t Num) {
		return ((T (*)(ResourceCache*, int32_t))(Il2CppBase() + 0x22061C))(this, Num);
	}
};
