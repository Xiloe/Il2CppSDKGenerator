#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShopBuyAction
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, int32_t itemID) {
		return ((T (*)(ShopBuyAction*, void*, int32_t))(Il2CppBase() + 0x239150))(this, inUserID, itemID);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(ShopBuyAction*))(Il2CppBase() + 0x239178))(this);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(ShopBuyAction*))(Il2CppBase() + 0x23921C))(this);
	}
};
