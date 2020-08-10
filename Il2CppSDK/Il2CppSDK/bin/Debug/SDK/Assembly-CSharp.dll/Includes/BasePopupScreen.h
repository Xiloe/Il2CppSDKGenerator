#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BasePopupScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79190);
	}
	// Fields
	template <typename T = void*> T& m_ResultHandler() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BasePopupScreen*))(Il2CppBase() + 0x1D412C))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(BasePopupScreen*, Il2CppString*))(Il2CppBase() + 0x0))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(BasePopupScreen*, Il2CppString*))(Il2CppBase() + 0x0))(this, inText);
	}
	template <typename T = void> T SetHandler(void* inHandler) {
		return ((T (*)(BasePopupScreen*, void*))(Il2CppBase() + 0x1DAE08))(this, inHandler);
	}
	template <typename T = void> T SendResult(void* inResult) {
		return ((T (*)(BasePopupScreen*, void*))(Il2CppBase() + 0x1D4F18))(this, inResult);
	}
};
