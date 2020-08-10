#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileTrail
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_BeamNoFadeDuration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_BeamFadeDuration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_AngleLimitForNewSegment() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_InitTimer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_FadeOutTimer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_LineRenderer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_TrailInitPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_VertexCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_TrailAPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_TrailBPos() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileTrail*))(Il2CppBase() + 0x2178D4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProjectileTrail*))(Il2CppBase() + 0x2178F4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ProjectileTrail*))(Il2CppBase() + 0x217974))(this);
	}
	template <typename T = void> T InitTrail(Il2CppVector3 inPos) {
		return ((T (*)(ProjectileTrail*, Il2CppVector3))(Il2CppBase() + 0x217BE4))(this, inPos);
	}
	template <typename T = void> T AddTrailPos(Il2CppVector3 inPos) {
		return ((T (*)(ProjectileTrail*, Il2CppVector3))(Il2CppBase() + 0x217DE4))(this, inPos);
	}
	template <typename T = void> T UpdateTrailPos(Il2CppVector3 inPos) {
		return ((T (*)(ProjectileTrail*, Il2CppVector3))(Il2CppBase() + 0x217EBC))(this, inPos);
	}
	template <typename T = void> T UpdateAddTrailPos(Il2CppVector3 inPos) {
		return ((T (*)(ProjectileTrail*, Il2CppVector3))(Il2CppBase() + 0x217F34))(this, inPos);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(ProjectileTrail*))(Il2CppBase() + 0x218094))(this);
	}
	template <typename T = bool> T IsVisible() {
		return ((T (*)(ProjectileTrail*))(Il2CppBase() + 0x2180B4))(this);
	}
};
