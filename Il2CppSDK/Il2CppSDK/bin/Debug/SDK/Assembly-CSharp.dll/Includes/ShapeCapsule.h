#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShapeCapsule
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78DDC);
	}
	// Fields
	template <typename T = Il2CppVector3> T& m_Center() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Axis() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Radius() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_Length() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_Scale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_RadiusScaled() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_LengthHalfScaled() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<void*>*> static T& m_Intersection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ShapeCapsule*))(Il2CppBase() + 0x2355EC))(this);
	}
	template <typename T = void> T _ctor_1(float Length, float Radius) {
		return ((T (*)(ShapeCapsule*, float, float))(Il2CppBase() + 0x235690))(this, Length, Radius);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2357A0))(0);
	}
	template <typename T = void> T SetFrame(void* Frame, int32_t Dir) {
		return ((T (*)(ShapeCapsule*, void*, int32_t))(Il2CppBase() + 0x235844))(this, Frame, Dir);
	}
	template <typename T = void> T SetLength(float Length) {
		return ((T (*)(ShapeCapsule*, float))(Il2CppBase() + 0x235780))(this, Length);
	}
	template <typename T = void> T SetRadius(float Radius) {
		return ((T (*)(ShapeCapsule*, float))(Il2CppBase() + 0x235768))(this, Radius);
	}
	template <typename T = void> T SetScale(float Scale) {
		return ((T (*)(ShapeCapsule*, float))(Il2CppBase() + 0x235B7C))(this, Scale);
	}
	template <typename T = int32_t> T RayCast(Il2CppVector3 Origin, Il2CppVector3 Direction, Il2CppArray<void*>* Hits) {
		return ((T (*)(ShapeCapsule*, Il2CppVector3, Il2CppVector3, Il2CppArray<void*>*))(Il2CppBase() + 0x235BA8))(this, Origin, Direction, Hits);
	}
	template <typename T = int32_t> T ComputeIntersection(Il2CppVector3 Origin, Il2CppVector3 Direction) {
		return ((T (*)(ShapeCapsule*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x235FBC))(this, Origin, Direction);
	}
	template <typename T = int32_t> T SphereCast(Il2CppVector3 Origin, Il2CppVector3 Direction, float Radius, Il2CppArray<void*>* Hits) {
		return ((T (*)(ShapeCapsule*, Il2CppVector3, Il2CppVector3, float, Il2CppArray<void*>*))(Il2CppBase() + 0x237A6C))(this, Origin, Direction, Radius, Hits);
	}
	template <typename T = void> T UpdateBBox() {
		return ((T (*)(ShapeCapsule*))(Il2CppBase() + 0x237BF8))(this);
	}
	template <typename T = void> T Draw(Il2CppColor Col) {
		return ((T (*)(ShapeCapsule*, Il2CppColor))(Il2CppBase() + 0x237E64))(this, Col);
	}
	template <typename T = void> T Draw_1(Il2CppColor Col, Il2CppColor BoundsCol) {
		return ((T (*)(ShapeCapsule*, Il2CppColor, Il2CppColor))(Il2CppBase() + 0x23810C))(this, Col, BoundsCol);
	}
};
