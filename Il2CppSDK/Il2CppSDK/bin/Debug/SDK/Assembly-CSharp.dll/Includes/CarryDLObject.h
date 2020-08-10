#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CarryDLObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& Instances() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& PickUpSound() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& PutDownSound() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_State() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_PickUp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_PutDown() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_Activated() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_PickUpTrigger() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_PutDownTrigger() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_Instances() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_PickUp_Box() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_PutDown_Target() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_PutDown_Box() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CarryDLObject*))(Il2CppBase() + 0x28AB64))(this);
	}
	template <typename T = void> T Activate(void* pickUp, void* putDown) {
		return ((T (*)(CarryDLObject*, void*, void*))(Il2CppBase() + 0x28AB74))(this, pickUp, putDown);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(CarryDLObject*))(Il2CppBase() + 0x28AE98))(this);
	}
	template <typename T = void*> T Source() {
		return ((T (*)(CarryDLObject*))(Il2CppBase() + 0x28AF20))(this);
	}
	template <typename T = void*> T Target() {
		return ((T (*)(CarryDLObject*))(Il2CppBase() + 0x28AF28))(this);
	}
	template <typename T = int32_t> T UsableInstances() {
		return ((T (*)(CarryDLObject*))(Il2CppBase() + 0x28AF30))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CarryDLObject*))(Il2CppBase() + 0x28AF38))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CarryDLObject*))(Il2CppBase() + 0x28BB68))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CarryDLObject*))(Il2CppBase() + 0x28BB6C))(this);
	}
	template <typename T = void> T PickUp() {
		return ((T (*)(CarryDLObject*))(Il2CppBase() + 0x28BB70))(this);
	}
	template <typename T = void> T PutDown() {
		return ((T (*)(CarryDLObject*))(Il2CppBase() + 0x28BD14))(this);
	}
	template <typename T = void> T ApplyState() {
		return ((T (*)(CarryDLObject*))(Il2CppBase() + 0x28AC0C))(this);
	}
};
