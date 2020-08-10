#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DirectionalMeshSensor
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_MaxLength() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IgnoreTriggers() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_LayerMask() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_XForm() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Renderer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_HitInfo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DirectionalMeshSensor*))(Il2CppBase() + 0x305B10))(this);
	}
	template <typename T = bool> T get_HitFound() {
		return ((T (*)(DirectionalMeshSensor*))(Il2CppBase() + 0x305BC0))(this);
	}
	template <typename T = void*> T get_HitInfo() {
		return ((T (*)(DirectionalMeshSensor*))(Il2CppBase() + 0x305C08))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DirectionalMeshSensor*))(Il2CppBase() + 0x305C10))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DirectionalMeshSensor*))(Il2CppBase() + 0x305CEC))(this);
	}
};
