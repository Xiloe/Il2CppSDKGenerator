#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiEquipSelection
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD790F8);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& ScrollBarPrefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsInitialized() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Equip_Button() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Equip_Label() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ItemScroller() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_EquipedItem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_OnEquipDelegate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsShown() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& LastSelectedItem() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiEquipSelection*))(Il2CppBase() + 0x3794F8))(this);
	}
	template <typename T = bool> T get_IsShown() {
		return ((T (*)(GuiEquipSelection*))(Il2CppBase() + 0x3795BC))(this);
	}
	template <typename T = void> T set_IsShown(bool value) {
		return ((T (*)(GuiEquipSelection*, bool))(Il2CppBase() + 0x3795C4))(this, value);
	}
	template <typename T = void*> T get_LastSelectedItem() {
		return ((T (*)(GuiEquipSelection*))(Il2CppBase() + 0x375D24))(this);
	}
	template <typename T = void> T set_LastSelectedItem(void* value) {
		return ((T (*)(GuiEquipSelection*, void*))(Il2CppBase() + 0x3795CC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiEquipSelection*))(Il2CppBase() + 0x3795D4))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuiEquipSelection*))(Il2CppBase() + 0x379850))(this);
	}
	template <typename T = void> T InitGui() {
		return ((T (*)(GuiEquipSelection*))(Il2CppBase() + 0x374FBC))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiEquipSelection*))(Il2CppBase() + 0x3760A4))(this);
	}
	template <typename T = void> T Show(void* type, void* equipedId, void* skinTeam) {
		return ((T (*)(GuiEquipSelection*, void*, void*, void*))(Il2CppBase() + 0x379C3C))(this, type, equipedId, skinTeam);
	}
	template <typename T = void> T SetEquipedItem(void* equipedId) {
		return ((T (*)(GuiEquipSelection*, void*))(Il2CppBase() + 0x37A4EC))(this, equipedId);
	}
	template <typename T = void> T SelectItem(void* id) {
		return ((T (*)(GuiEquipSelection*, void*))(Il2CppBase() + 0x375D70))(this, id);
	}
	template <typename T = void> T OnEquipButton(bool inside) {
		return ((T (*)(GuiEquipSelection*, bool))(Il2CppBase() + 0x37A59C))(this, inside);
	}
	template <typename T = void> T UpdateScrollerView() {
		return ((T (*)(GuiEquipSelection*))(Il2CppBase() + 0x378F70))(this);
	}
	template <typename T = void> T OnSelectionChange() {
		return ((T (*)(GuiEquipSelection*))(Il2CppBase() + 0x37AFBC))(this);
	}
	template <typename T = void> T UpdateItemButtons() {
		return ((T (*)(GuiEquipSelection*))(Il2CppBase() + 0x378F98))(this);
	}
	template <typename T = void*> T GetCurrentSelection() {
		return ((T (*)(GuiEquipSelection*))(Il2CppBase() + 0x37B000))(this);
	}
};
