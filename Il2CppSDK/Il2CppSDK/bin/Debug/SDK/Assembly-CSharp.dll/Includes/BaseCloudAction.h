#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseCloudAction
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_UserID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_AsyncOp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& status() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& failInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& result() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& timeOut() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& createTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& activationTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, float inTimeOut) {
		return ((T (*)(BaseCloudAction*, void*, float))(Il2CppBase() + 0x1D84C8))(this, inUserID, inTimeOut);
	}
	template <typename T = void*> T get_status() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x1D85DC))(this);
	}
	template <typename T = void> T set_status(void* value) {
		return ((T (*)(BaseCloudAction*, void*))(Il2CppBase() + 0x1D85C4))(this, value);
	}
	template <typename T = bool> T get_isDone() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x1D6A98))(this);
	}
	template <typename T = bool> T get_isFailed() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x1D85E4))(this);
	}
	template <typename T = bool> T get_isSucceeded() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x1D85F8))(this);
	}
	template <typename T = Il2CppString*> T get_failInfo() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x1D860C))(this);
	}
	template <typename T = void> T set_failInfo(Il2CppString* value) {
		return ((T (*)(BaseCloudAction*, Il2CppString*))(Il2CppBase() + 0x1D85CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_result() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x1D8614))(this);
	}
	template <typename T = void> T set_result(Il2CppString* value) {
		return ((T (*)(BaseCloudAction*, Il2CppString*))(Il2CppBase() + 0x1D861C))(this, value);
	}
	template <typename T = float> T get_timeOut() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x1D8624))(this);
	}
	template <typename T = void> T set_timeOut(float value) {
		return ((T (*)(BaseCloudAction*, float))(Il2CppBase() + 0x1D85BC))(this, value);
	}
	template <typename T = float> T get_createTime() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x1D862C))(this);
	}
	template <typename T = void> T set_createTime(float value) {
		return ((T (*)(BaseCloudAction*, float))(Il2CppBase() + 0x1D85D4))(this, value);
	}
	template <typename T = float> T get_activationTime() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x1D8634))(this);
	}
	template <typename T = void> T set_activationTime(float value) {
		return ((T (*)(BaseCloudAction*, float))(Il2CppBase() + 0x1D863C))(this, value);
	}
	template <typename T = float> T get_lifeTime() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x1D8644))(this);
	}
	template <typename T = float> T get_activeTime() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x1D8670))(this);
	}
	template <typename T = void*> T PPIManager_Update() {
		return ((T (*)(BaseCloudAction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetStatus(void* inStatus) {
		return ((T (*)(BaseCloudAction*, void*))(Il2CppBase() + 0x1D86B4))(this, inStatus);
	}
};
