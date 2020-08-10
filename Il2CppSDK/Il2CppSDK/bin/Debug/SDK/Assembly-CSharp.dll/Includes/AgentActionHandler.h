#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionHandler
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(AgentActionHandler*, void*, void*))(Il2CppBase() + 0x1DC650))(this, object, method);
	}
	template <typename T = void> T Invoke(void* a) {
		return ((T (*)(AgentActionHandler*, void*))(Il2CppBase() + 0x1DBB50))(this, a);
	}
	template <typename T = void*> T BeginInvoke(void* a, void* callback, void* object) {
		return ((T (*)(AgentActionHandler*, void*, void*, void*))(Il2CppBase() + 0x1DC664))(this, a, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(AgentActionHandler*, void*))(Il2CppBase() + 0x1DC690))(this, result);
	}
};
