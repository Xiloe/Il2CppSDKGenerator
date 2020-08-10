#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentGadgets
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& HandR() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& AgentActionUseItem() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& Gadgets() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ComponentGadgets*))(Il2CppBase() + 0x2DABF4))(this);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T get_Gadgets() {
		return ((T (*)(ComponentGadgets*))(Il2CppBase() + 0x2DABFC))(this);
	}
	template <typename T = void> T set_Gadgets(Il2CppDictionary<void*, void*>* value) {
		return ((T (*)(ComponentGadgets*, Il2CppDictionary<void*, void*>*))(Il2CppBase() + 0x2DAC04))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ComponentGadgets*))(Il2CppBase() + 0x2DAC0C))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(ComponentGadgets*))(Il2CppBase() + 0x2DAEA0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ComponentGadgets*))(Il2CppBase() + 0x2DB51C))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(ComponentGadgets*))(Il2CppBase() + 0x2DB948))(this);
	}
	template <typename T = void> T AddGadget(void* newItem, int32_t count) {
		return ((T (*)(ComponentGadgets*, void*, int32_t))(Il2CppBase() + 0x2DBC00))(this, newItem, count);
	}
	template <typename T = void> T RemoveGadget(void* oldItem) {
		return ((T (*)(ComponentGadgets*, void*))(Il2CppBase() + 0x2DC290))(this, oldItem);
	}
	template <typename T = void> T HandleAction(void* action) {
		return ((T (*)(ComponentGadgets*, void*))(Il2CppBase() + 0x2DC994))(this, action);
	}
	template <typename T = bool> T IsGadgetAvailableForUse(void* id) {
		return ((T (*)(ComponentGadgets*, void*))(Il2CppBase() + 0x2DCA64))(this, id);
	}
	template <typename T = bool> T IsGadgetAvailableWithBehaviour(void* behaviour) {
		return ((T (*)(ComponentGadgets*, void*))(Il2CppBase() + 0x2DCB9C))(this, behaviour);
	}
	template <typename T = void*> T GetGadgetAvailableWithBehaviour(void* behaviour) {
		return ((T (*)(ComponentGadgets*, void*))(Il2CppBase() + 0x2DCEB8))(this, behaviour);
	}
	template <typename T = void*> T GetGadget(void* id) {
		return ((T (*)(ComponentGadgets*, void*))(Il2CppBase() + 0x2DB868))(this, id);
	}
};
