#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShapeSphere
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78DF4);
	}
	// Fields
	template <typename T = Il2CppVector3> T& m_Center() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_Radius() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_RadiusScaled() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_Scale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ShapeSphere*))(Il2CppBase() + 0x238354))(this);
	}
	template <typename T = void> T _ctor_1(float Radius) {
		return ((T (*)(ShapeSphere*, float))(Il2CppBase() + 0x238360))(this, Radius);
	}
	template <typename T = void> T SetPos(Il2CppVector3 Pos) {
		return ((T (*)(ShapeSphere*, Il2CppVector3))(Il2CppBase() + 0x238388))(this, Pos);
	}
	template <typename T = void> T SetRot(Il2CppQuaternion Rot) {
		return ((T (*)(ShapeSphere*, Il2CppQuaternion))(Il2CppBase() + 0x238394))(this, Rot);
	}
	template <typename T = void> T SetFrame(void* Frame) {
		return ((T (*)(ShapeSphere*, void*))(Il2CppBase() + 0x238398))(this, Frame);
	}
	template <typename T = void> T SetRadius(float Radius) {
		return ((T (*)(ShapeSphere*, float))(Il2CppBase() + 0x238440))(this, Radius);
	}
	template <typename T = void> T SetScale(float Scale) {
		return ((T (*)(ShapeSphere*, float))(Il2CppBase() + 0x238458))(this, Scale);
	}
	template <typename T = int32_t> T RayCast(Il2CppVector3 Origin, Il2CppVector3 Direction, Il2CppArray<void*>* Hits) {
		return ((T (*)(ShapeSphere*, Il2CppVector3, Il2CppVector3, Il2CppArray<void*>*))(Il2CppBase() + 0x238470))(this, Origin, Direction, Hits);
	}
	template <typename T = int32_t> T SphereCast(Il2CppVector3 Origin, Il2CppVector3 Direction, float Radius, Il2CppArray<void*>* Hits) {
		return ((T (*)(ShapeSphere*, Il2CppVector3, Il2CppVector3, float, Il2CppArray<void*>*))(Il2CppBase() + 0x23886C))(this, Origin, Direction, Radius, Hits);
	}
	template <typename T = void> T SetupRayHit(void* Info, Il2CppVector3 Origin, Il2CppVector3 Direction, float HitTime) {
		return ((T (*)(ShapeSphere*, void*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x238784))(this, Info, Origin, Direction, HitTime);
	}
	template <typename T = void> T SetupSphereHit(void* Info, Il2CppVector3 Origin, Il2CppVector3 Direction, float HitTime) {
		return ((T (*)(ShapeSphere*, void*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x238B88))(this, Info, Origin, Direction, HitTime);
	}
	template <typename T = void> T UpdateBBox() {
		return ((T (*)(ShapeSphere*))(Il2CppBase() + 0x238CBC))(this);
	}
	template <typename T = void> T Draw(Il2CppColor Col) {
		return ((T (*)(ShapeSphere*, Il2CppColor))(Il2CppBase() + 0x238E00))(this, Col);
	}
	template <typename T = void> T Draw_1(Il2CppColor Col, Il2CppColor BoundsCol) {
		return ((T (*)(ShapeSphere*, Il2CppColor, Il2CppColor))(Il2CppBase() + 0x238F08))(this, Col, BoundsCol);
	}
};
