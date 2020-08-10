#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyTypeSkinsInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& skinValues() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyTypeSkinsInfo*))(Il2CppBase() + 0x25078C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(EnemyTypeSkinsInfo*))(Il2CppBase() + 0x253B74))(this);
	}
	template <typename T = bool> T HasSkinInList(Il2CppString* name) {
		return ((T (*)(EnemyTypeSkinsInfo*, Il2CppString*))(Il2CppBase() + 0x2520D8))(this, name);
	}
	template <typename T = void> T AddSkinValue(Il2CppString* name, float value) {
		return ((T (*)(EnemyTypeSkinsInfo*, Il2CppString*, float))(Il2CppBase() + 0x2514D4))(this, name, value);
	}
	template <typename T = Il2CppString*> T GetRandomSkinWithBestValue(void** skinCount) {
		return ((T (*)(EnemyTypeSkinsInfo*, void**))(Il2CppBase() + 0x251D1C))(this, skinCount);
	}
	template <typename T = void*> T GetList() {
		return ((T (*)(EnemyTypeSkinsInfo*))(Il2CppBase() + 0x253A0C))(this);
	}
	template <typename T = void*> T GetSortedList() {
		return ((T (*)(EnemyTypeSkinsInfo*))(Il2CppBase() + 0x2520C0))(this);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(EnemyTypeSkinsInfo*))(Il2CppBase() + 0x253C14))(this);
	}
	template <typename T = int32_t> static T Sortm__1A(void* value1, void* value2) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x253D50))(0, value1, value2);
	}
};
