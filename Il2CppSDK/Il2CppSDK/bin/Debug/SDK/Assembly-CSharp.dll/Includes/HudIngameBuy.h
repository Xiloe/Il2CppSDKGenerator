#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudIngameBuy
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7916C);
	}
	// Fields
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Parent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_ShowIngameBuy() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_IngameBuyComponent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_Description() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_Money() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_NotEnoughMoney() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_Cost() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_Image() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_BuyButton() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_ButtonText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& s_PivotMainName() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& s_LayoutMainName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudIngameBuy*))(Il2CppBase() + 0x3B1AD0))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudIngameBuy*))(Il2CppBase() + 0x3B1B6C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudIngameBuy*))(Il2CppBase() + 0x3B1B74))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudIngameBuy*))(Il2CppBase() + 0x3B20C8))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudIngameBuy*, float))(Il2CppBase() + 0x3B20CC))(this, deltaTime);
	}
	template <typename T = void> T LateUpdate200ms() {
		return ((T (*)(HudIngameBuy*))(Il2CppBase() + 0x3B20D0))(this);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudIngameBuy*, bool))(Il2CppBase() + 0x3B2578))(this, on);
	}
	template <typename T = void> T ShowIngameBuy(void* ingameBuy, void* closeCallback) {
		return ((T (*)(HudIngameBuy*, void*, void*))(Il2CppBase() + 0x3B26EC))(this, ingameBuy, closeCallback);
	}
	template <typename T = void> T HideIngameBuy() {
		return ((T (*)(HudIngameBuy*))(Il2CppBase() + 0x3B2A7C))(this);
	}
	template <typename T = void> T SimulateIngameBuyAccept() {
		return ((T (*)(HudIngameBuy*))(Il2CppBase() + 0x3B2A9C))(this);
	}
	template <typename T = void> T CloseDialog() {
		return ((T (*)(HudIngameBuy*))(Il2CppBase() + 0x3B2AB4))(this);
	}
	template <typename T = void> T UpdateIngameBuyData(bool forceUpdate) {
		return ((T (*)(HudIngameBuy*, bool))(Il2CppBase() + 0x3B20F0))(this, forceUpdate);
	}
	template <typename T = void> T ShowIngameBuy_1(bool show) {
		return ((T (*)(HudIngameBuy*, bool))(Il2CppBase() + 0x3B27E4))(this, show);
	}
	template <typename T = void*> T GetChildByName(void* widget, Il2CppString* name) {
		return ((T (*)(HudIngameBuy*, void*, Il2CppString*))(Il2CppBase() + 0xA08E2C))(this, widget, name);
	}
};
