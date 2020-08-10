#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Teleport
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Destination() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& TeleportDelay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FadeOUtTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FadeInTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Sound() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Teleport*))(Il2CppBase() + 0x26AFE4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Teleport*))(Il2CppBase() + 0x26AFF8))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(Teleport*))(Il2CppBase() + 0x26AFFC))(this);
	}
	template <typename T = void> T OnTriggerEnter(void* other) {
		return ((T (*)(Teleport*, void*))(Il2CppBase() + 0x26B294))(this, other);
	}
};
