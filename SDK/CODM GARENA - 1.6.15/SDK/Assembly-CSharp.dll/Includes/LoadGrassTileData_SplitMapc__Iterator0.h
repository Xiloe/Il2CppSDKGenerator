#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadGrassTileDataSplitMapcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadGrassTileData_SplitMap>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadGrassTileDataSplitMapcIterator0*))(Il2CppBase() + 0x36F8864))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadGrassTileDataSplitMapcIterator0*))(Il2CppBase() + 0x36F8874))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadGrassTileDataSplitMapcIterator0*))(Il2CppBase() + 0x36F887C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadGrassTileDataSplitMapcIterator0*))(Il2CppBase() + 0x36F8884))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadGrassTileDataSplitMapcIterator0*))(Il2CppBase() + 0x36F8888))(this);
	}

};

}
