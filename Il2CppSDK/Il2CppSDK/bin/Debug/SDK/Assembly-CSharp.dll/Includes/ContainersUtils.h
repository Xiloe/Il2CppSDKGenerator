#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContainersUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> static T Shuffle(Il2CppArray<void*>* Container) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x9965D4))(0, Container);
	}
	template <typename T = void> static T Shuffle_1(Il2CppList<void*>* Container) {
		return ((T (*)(void *, Il2CppList<void*>*))(Il2CppBase() + 0x996418))(0, Container);
	}
	template <typename T = void> static T AddUnique(Il2CppList<void*>* Container, void* Item) {
		return ((T (*)(void *, Il2CppList<void*>*, void*))(Il2CppBase() + 0x99603C))(0, Container, Item);
	}
	template <typename T = void*> static T PopLast(Il2CppList<void*>* Container) {
		return ((T (*)(void *, Il2CppList<void*>*))(Il2CppBase() + 0xA07F74))(0, Container);
	}
	template <typename T = void> static T Swap(Il2CppArray<void*>* Container, int32_t IndexA, int32_t IndexB) {
		return ((T (*)(void *, Il2CppArray<void*>*, int32_t, int32_t))(Il2CppBase() + 0x996818))(0, Container, IndexA, IndexB);
	}
	template <typename T = void> static T Swap_1(Il2CppList<void*>* Container, int32_t IndexA, int32_t IndexB) {
		return ((T (*)(void *, Il2CppList<void*>*, int32_t, int32_t))(Il2CppBase() + 0x99677C))(0, Container, IndexA, IndexB);
	}
	template <typename T = void*> static T GetRandomItem(Il2CppArray<void*>* Container) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0xA07DD8))(0, Container);
	}
	template <typename T = void*> static T GetRandomItem_1(Il2CppList<void*>* Container) {
		return ((T (*)(void *, Il2CppList<void*>*))(Il2CppBase() + 0xA07C20))(0, Container);
	}
};
