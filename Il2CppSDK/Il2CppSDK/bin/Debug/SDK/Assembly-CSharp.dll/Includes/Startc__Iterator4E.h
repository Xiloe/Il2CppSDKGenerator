#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartcIterator4E
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& BGImage__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& texSize__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& screenSize__2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& test__3() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& newHeight__4() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& space__5() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& newWidth__6() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& space__7() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& expansionPath__8() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& mainPath__9() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& dataDownloaded__10() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& dataBinded__11() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = Il2CppString*> T& mainObbFileName__12() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(StartcIterator4E*))(Il2CppBase() + 0x3D6E38))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(StartcIterator4E*))(Il2CppBase() + 0x3D92EC))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StartcIterator4E*))(Il2CppBase() + 0x3D92F4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(StartcIterator4E*))(Il2CppBase() + 0x3D92FC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(StartcIterator4E*))(Il2CppBase() + 0x3D9E38))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(StartcIterator4E*))(Il2CppBase() + 0x3D9E44))(this);
	}
};
