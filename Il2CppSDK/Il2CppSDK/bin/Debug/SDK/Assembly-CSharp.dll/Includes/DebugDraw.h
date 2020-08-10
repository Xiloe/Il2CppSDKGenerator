#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebugDraw
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD788A4);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> static T& DiamondCorner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<void*>*> static T& BoxCorner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& m_Steps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& m_AngleStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& m_AngleStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& m_DisplayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& m_DepthTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<void*>*> static T& m_SinTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> static T& m_CosTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<void*>*> static T& m_ToAxisRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DebugDraw*))(Il2CppBase() + 0x2F68FC))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F6904))(0);
	}
	template <typename T = float> static T get_DisplayTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F7058))(0);
	}
	template <typename T = void> static T set_DisplayTime(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2F7108))(0, value);
	}
	template <typename T = bool> static T get_DepthTest() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F7218))(0);
	}
	template <typename T = void> static T set_DepthTest(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2F72C8))(0, value);
	}
	template <typename T = void> static T Box(Il2CppColor Col, void* BoxColl, float Scale) {
		return ((T (*)(void *, Il2CppColor, void*, float))(Il2CppBase() + 0x2F737C))(0, Col, BoxColl, Scale);
	}
	template <typename T = void> static T Box_1(Il2CppColor Col, void* AxisAlignedBox) {
		return ((T (*)(void *, Il2CppColor, void*))(Il2CppBase() + 0x2F7944))(0, Col, AxisAlignedBox);
	}
	template <typename T = void> static T Box_2(Il2CppColor Col, Il2CppVector3 Min, Il2CppVector3 Max) {
		return ((T (*)(void *, Il2CppColor, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2F7A5C))(0, Col, Min, Max);
	}
	template <typename T = void> static T Box_3(Il2CppColor Col, float Width, float Height, float Depth, Il2CppVector3 Center) {
		return ((T (*)(void *, Il2CppColor, float, float, float, Il2CppVector3))(Il2CppBase() + 0x2F8250))(0, Col, Width, Height, Depth, Center);
	}
	template <typename T = void> static T Box_4(Il2CppColor Col, Il2CppVector3 Extents, void* Local2World) {
		return ((T (*)(void *, Il2CppColor, Il2CppVector3, void*))(Il2CppBase() + 0x2F84C8))(0, Col, Extents, Local2World);
	}
	template <typename T = void> static T Box_5(Il2CppColor Col, float Width, float Height, float Depth, void* Local2World) {
		return ((T (*)(void *, Il2CppColor, float, float, float, void*))(Il2CppBase() + 0x2F7658))(0, Col, Width, Height, Depth, Local2World);
	}
	template <typename T = void> static T Box_6(Il2CppColor Col, Il2CppArray<void*>* Corners) {
		return ((T (*)(void *, Il2CppColor, Il2CppArray<void*>*))(Il2CppBase() + 0x2F7D54))(0, Col, Corners);
	}
	template <typename T = void> static T Capsule(Il2CppColor Col, void* CapColl, float Scale) {
		return ((T (*)(void *, Il2CppColor, void*, float))(Il2CppBase() + 0x2F88D8))(0, Col, CapColl, Scale);
	}
	template <typename T = void> static T Capsule_1(Il2CppColor Col, float Radius, Il2CppVector3 From, Il2CppVector3 To) {
		return ((T (*)(void *, Il2CppColor, float, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2FA4D8))(0, Col, Radius, From, To);
	}
	template <typename T = void> static T Capsule_2(Il2CppColor Col, float Radius, float Height, void* Local2World) {
		return ((T (*)(void *, Il2CppColor, float, float, void*))(Il2CppBase() + 0x2F8EA4))(0, Col, Radius, Height, Local2World);
	}
	template <typename T = void> static T Collider(Il2CppColor Col, void* Coll, float Scale) {
		return ((T (*)(void *, Il2CppColor, void*, float))(Il2CppBase() + 0x2FAC30))(0, Col, Coll, Scale);
	}
	template <typename T = void> static T Cone(Il2CppColor Col, float Height, float Radius, void* Local2World) {
		return ((T (*)(void *, Il2CppColor, float, float, void*))(Il2CppBase() + 0x2FB15C))(0, Col, Height, Radius, Local2World);
	}
	template <typename T = void> static T Cone_1(Il2CppColor Col, float Height, float RadiusA, float RadiusB, void* Local2World) {
		return ((T (*)(void *, Il2CppColor, float, float, float, void*))(Il2CppBase() + 0x2FB2E8))(0, Col, Height, RadiusA, RadiusB, Local2World);
	}
	template <typename T = void> static T ConeSphere(Il2CppColor Col, float Height, float RadiusA, float RadiusB, void* Local2World) {
		return ((T (*)(void *, Il2CppColor, float, float, float, void*))(Il2CppBase() + 0x2FBEB4))(0, Col, Height, RadiusA, RadiusB, Local2World);
	}
	template <typename T = void> static T Cylinder(Il2CppColor Col, float Radius, Il2CppVector3 From, Il2CppVector3 To) {
		return ((T (*)(void *, Il2CppColor, float, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2FD674))(0, Col, Radius, From, To);
	}
	template <typename T = void> static T Cylinder_1(Il2CppColor Col, float Height, float Radius, void* Local2World) {
		return ((T (*)(void *, Il2CppColor, float, float, void*))(Il2CppBase() + 0x2FD9E8))(0, Col, Height, Radius, Local2World);
	}
	template <typename T = void> static T CoordSystem(float Size, void* Local2World) {
		return ((T (*)(void *, float, void*))(Il2CppBase() + 0x2FE440))(0, Size, Local2World);
	}
	template <typename T = void> static T Diamond(Il2CppColor Col, float Size, Il2CppVector3 Center) {
		return ((T (*)(void *, Il2CppColor, float, Il2CppVector3))(Il2CppBase() + 0x2FE93C))(0, Col, Size, Center);
	}
	template <typename T = void> static T Line(Il2CppColor Col, Il2CppVector3 From, Il2CppVector3 To) {
		return ((T (*)(void *, Il2CppColor, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2F8744))(0, Col, From, To);
	}
	template <typename T = void> static T Line_1(Il2CppColor Col, Il2CppVector3 From, Il2CppVector3 To, void* Local2World) {
		return ((T (*)(void *, Il2CppColor, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x2FF018))(0, Col, From, To, Local2World);
	}
	template <typename T = void> static T LineOriented(Il2CppColor Col, Il2CppVector3 From, Il2CppVector3 To, float ArrowSize) {
		return ((T (*)(void *, Il2CppColor, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x2FF1AC))(0, Col, From, To, ArrowSize);
	}
	template <typename T = void> static T LineOriented_1(Il2CppColor Col, Il2CppVector3 From, Il2CppVector3 To, void* Local2World) {
		return ((T (*)(void *, Il2CppColor, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x2FF638))(0, Col, From, To, Local2World);
	}
	template <typename T = void> static T Sphere(Il2CppColor Col, void* SphColl, float Scale) {
		return ((T (*)(void *, Il2CppColor, void*, float))(Il2CppBase() + 0x2FAEB4))(0, Col, SphColl, Scale);
	}
	template <typename T = void> static T Sphere_1(Il2CppColor Col, float Radius, Il2CppVector3 Center) {
		return ((T (*)(void *, Il2CppColor, float, Il2CppVector3))(Il2CppBase() + 0x2FFFD4))(0, Col, Radius, Center);
	}
	template <typename T = void> static T Sphere_2(Il2CppColor Col, float Radius, void* Local2World) {
		return ((T (*)(void *, Il2CppColor, float, void*))(Il2CppBase() + 0x2FF7D0))(0, Col, Radius, Local2World);
	}
	template <typename T = int32_t> static T GetDetailSteps(float Radius) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x30015C))(0, Radius);
	}
	template <typename T = int32_t> static T SetDetails(float Radius) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2FA84C))(0, Radius);
	}
	template <typename T = int32_t> static T SetDetails_1(float Radius, float Start, float Range) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x2FD4C8))(0, Radius, Start, Range);
	}
	template <typename T = float> static T GetSin(int32_t Idx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2FAA88))(0, Idx);
	}
	template <typename T = float> static T GetCos(int32_t Idx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2FA978))(0, Idx);
	}
	template <typename T = void> static T TransformToWorld(float X, float Y, float Z, void* Mat, void* Res) {
		return ((T (*)(void *, float, float, float, void*, void*))(Il2CppBase() + 0x2FAB98))(0, X, Y, Z, Mat, Res);
	}
};
