#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProduceOccluderToTmpBufferAsyncResFoldercIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ProduceOccluderToTmpBufferAsync_ResFolder>c__Iterator0"));
	}

	template <typename T = int32_t> T& key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& resourcePath__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& req__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sobj__0() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(ProduceOccluderToTmpBufferAsyncResFoldercIterator0*))(Il2CppBase() + 0x3EEF4F0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ProduceOccluderToTmpBufferAsyncResFoldercIterator0*))(Il2CppBase() + 0x3EEF7BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ProduceOccluderToTmpBufferAsyncResFoldercIterator0*))(Il2CppBase() + 0x3EEF7C4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ProduceOccluderToTmpBufferAsyncResFoldercIterator0*))(Il2CppBase() + 0x3EEF7CC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ProduceOccluderToTmpBufferAsyncResFoldercIterator0*))(Il2CppBase() + 0x3EEF7E0))(this);
	}

};

}
