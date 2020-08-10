#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameEvents
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78EE0);
	}
	// Fields
	template <typename T = Il2CppList<Il2CppString*>*> T& _Names() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& _States() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& EventHandlers() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameEvents*))(Il2CppBase() + 0x328030))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_Names() {
		return ((T (*)(GameEvents*))(Il2CppBase() + 0x32B754))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(GameEvents*))(Il2CppBase() + 0x32816C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(GameEvents*))(Il2CppBase() + 0x32B75C))(this);
	}
	template <typename T = bool> T Add(Il2CppString* name, void* state) {
		return ((T (*)(GameEvents*, Il2CppString*, void*))(Il2CppBase() + 0x3283B0))(this, name, state);
	}
	template <typename T = void> T Remove(Il2CppString* name) {
		return ((T (*)(GameEvents*, Il2CppString*))(Il2CppBase() + 0x32B83C))(this, name);
	}
	template <typename T = void> T Update(Il2CppString* name, void* state) {
		return ((T (*)(GameEvents*, Il2CppString*, void*))(Il2CppBase() + 0x32BA6C))(this, name, state);
	}
	template <typename T = void*> T GetState(Il2CppString* name) {
		return ((T (*)(GameEvents*, Il2CppString*))(Il2CppBase() + 0x3140B4))(this, name);
	}
	template <typename T = int32_t> T FindIndex(Il2CppString* s) {
		return ((T (*)(GameEvents*, Il2CppString*))(Il2CppBase() + 0x32B924))(this, s);
	}
	template <typename T = bool> T Exist(Il2CppString* inEventName) {
		return ((T (*)(GameEvents*, Il2CppString*))(Il2CppBase() + 0x32BC84))(this, inEventName);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_EventNames() {
		return ((T (*)(GameEvents*))(Il2CppBase() + 0x32BCA4))(this);
	}
	template <typename T = void> T AddEventChangeHandler(Il2CppString* name, void* handler) {
		return ((T (*)(GameEvents*, Il2CppString*, void*))(Il2CppBase() + 0x313370))(this, name, handler);
	}
	template <typename T = void> T RemoveEventChangeHandler(Il2CppString* name, void* handler) {
		return ((T (*)(GameEvents*, Il2CppString*, void*))(Il2CppBase() + 0x3139FC))(this, name, handler);
	}
	template <typename T = void> T Save_Save() {
		return ((T (*)(GameEvents*))(Il2CppBase() + 0x3284F8))(this);
	}
	template <typename T = void> T Save_Load() {
		return ((T (*)(GameEvents*))(Il2CppBase() + 0x328738))(this);
	}
};
