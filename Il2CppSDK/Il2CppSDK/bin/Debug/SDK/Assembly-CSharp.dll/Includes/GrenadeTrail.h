#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GrenadeTrail
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
	template <typename T = float> T& m_MaxSegments() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_SegmentLength() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_InitTimer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_FadeOutTimer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_LineRenderer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_TrailInitPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_VertexCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_TrailAPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GrenadeTrail*))(Il2CppBase() + 0x354620))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GrenadeTrail*))(Il2CppBase() + 0x354644))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GrenadeTrail*))(Il2CppBase() + 0x3546CC))(this);
	}
	template <typename T = void> T InitTrail(Il2CppVector3 inPos) {
		return ((T (*)(GrenadeTrail*, Il2CppVector3))(Il2CppBase() + 0x35493C))(this, inPos);
	}
	template <typename T = void> T AddTrailPos(Il2CppVector3 inPos) {
		return ((T (*)(GrenadeTrail*, Il2CppVector3))(Il2CppBase() + 0x354B30))(this, inPos);
	}
	template <typename T = void> T UpdateTrailPos(Il2CppVector3 inPos) {
		return ((T (*)(GrenadeTrail*, Il2CppVector3))(Il2CppBase() + 0x354BFC))(this, inPos);
	}
	template <typename T = void> T UpdateAddTrailPos(Il2CppVector3 inPos) {
		return ((T (*)(GrenadeTrail*, Il2CppVector3))(Il2CppBase() + 0x354C74))(this, inPos);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(GrenadeTrail*))(Il2CppBase() + 0x354E1C))(this);
	}
	template <typename T = bool> T IsVisible() {
		return ((T (*)(GrenadeTrail*))(Il2CppBase() + 0x354E3C))(this);
	}
};
