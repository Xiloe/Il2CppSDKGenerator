#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseMessage
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Mailbox() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_Sender() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_Message() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_RAWMessage() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_SendTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BaseMessage*))(Il2CppBase() + 0x2C283C))(this);
	}
	template <typename T = Il2CppString*> T get_msgType() {
		return ((T (*)(BaseMessage*))(Il2CppBase() + 0x2C487C))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(BaseMessage*))(Il2CppBase() + 0x2C48F4))(this);
	}
	template <typename T = bool> T get_isSpecialMessage() {
		return ((T (*)(BaseMessage*))(Il2CppBase() + 0x2C48FC))(this);
	}
};
