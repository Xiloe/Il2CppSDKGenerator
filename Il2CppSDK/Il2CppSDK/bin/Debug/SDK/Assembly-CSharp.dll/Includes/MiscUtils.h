#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MiscUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78DB8);
	}
	// Fields
	template <typename T = void*> static T& SysRandom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MiscUtils*))(Il2CppBase() + 0x400BAC))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x400BB4))(0);
	}
	template <typename T = void> static T Swap(void* A, void* B) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x997474))(0, A, B);
	}
	template <typename T = void> static T Sort(void* A, void* B) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x996C90))(0, A, B);
	}
	template <typename T = void> static T Sort_1(void* A, void* B, void* Cmp) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x996E10))(0, A, B, Cmp);
	}
	template <typename T = void> static T Sort_2(void* A, void* B, void* C) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x996F0C))(0, A, B, C);
	}
	template <typename T = void> static T Sort_3(void* A, void* B, void* C, void* Cmp) {
		return ((T (*)(void *, void*, void*, void*, void*))(Il2CppBase() + 0x99728C))(0, A, B, C, Cmp);
	}
	template <typename T = void*> static T RandomEnum() {
		return ((T (*)(void *))(Il2CppBase() + 0xA0987C))(0);
	}
	template <typename T = void*> static T RandomValue(Il2CppArray<void*>* Values) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0xA099E0))(0, Values);
	}
	template <typename T = void*> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0xA094FC))(0);
	}
	template <typename T = void*> static T DeepCopy(void* Obj) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xA097B0))(0, Obj);
	}
	template <typename T = void*> static T CreateDeepCopy(void* Obj) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x400C54))(0, Obj);
	}
	template <typename T = Il2CppList<void*>*> static T GetSubClasses(Il2CppArray<void*>* Assemblies, void* Base, bool IncludeBase, bool IncludeAbstract) {
		return ((T (*)(void *, Il2CppArray<void*>*, void*, bool, bool))(Il2CppBase() + 0x401184))(0, Assemblies, Base, IncludeBase, IncludeAbstract);
	}
	template <typename T = void> static T GetSubClasses_1(void* Asm, void* Base, bool IncludeAbstract, Il2CppList<void*>* SubClasses) {
		return ((T (*)(void *, void*, void*, bool, Il2CppList<void*>*))(Il2CppBase() + 0x401360))(0, Asm, Base, IncludeAbstract, SubClasses);
	}
	template <typename T = void> static T AddSubClass(void* T_, bool IncludeAbstract, Il2CppList<void*>* SubClasses) {
		return ((T (*)(void *, void*, bool, Il2CppList<void*>*))(Il2CppBase() + 0x4014E4))(0, T_, IncludeAbstract, SubClasses);
	}
};
