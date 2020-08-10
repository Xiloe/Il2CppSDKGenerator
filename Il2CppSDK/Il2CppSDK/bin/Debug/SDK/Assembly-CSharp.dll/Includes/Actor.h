#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Actor
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& LeaveTransform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& StartTransform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Agent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& AnimatedGameObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(void* agent, void* go, void* animation, void* startTransform, void* leaveTransform) {
		return ((T (*)(Actor*, void*, void*, void*, void*, void*))(Il2CppBase() + 0x1F6374))(this, agent, go, animation, startTransform, leaveTransform);
	}
};
