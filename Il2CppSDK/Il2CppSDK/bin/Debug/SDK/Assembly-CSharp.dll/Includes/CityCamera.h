#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityCamera
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& finishingMove() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& finishingMoveActive() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& finishingTimeActual() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& finishingTimeMax() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& lastDragMove() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& userMovement() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_MoveEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& requestedPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CityCamera*))(Il2CppBase() + 0x297740))(this);
	}
	template <typename T = void> T RegisterMoveEvent(void* listener) {
		return ((T (*)(CityCamera*, void*))(Il2CppBase() + 0x297750))(this, listener);
	}
	template <typename T = Il2CppVector3> T get_position() {
		return ((T (*)(CityCamera*))(Il2CppBase() + 0x297758))(this);
	}
	template <typename T = Il2CppVector3> T WorldToScreenPoint(Il2CppVector3 point) {
		return ((T (*)(CityCamera*, Il2CppVector3))(Il2CppBase() + 0x2977A8))(this, point);
	}
	template <typename T = Il2CppVector3> T ScreenToWorldPoint(Il2CppVector3 point) {
		return ((T (*)(CityCamera*, Il2CppVector3))(Il2CppBase() + 0x297808))(this, point);
	}
	template <typename T = bool> static T DoLineAndRectangleIntersect(void* l1, void* rect1, void* rect2, void* rect3, void* rect4, void** ptIntersection) {
		return ((T (*)(void *, void*, void*, void*, void*, void*, void**))(Il2CppBase() + 0x297868))(0, l1, rect1, rect2, rect3, rect4, ptIntersection);
	}
	template <typename T = bool> static T DoLinesIntersect(void* l1, void* l2, void** ptIntersection) {
		return ((T (*)(void *, void*, void*, void**))(Il2CppBase() + 0x2978E4))(0, l1, l2, ptIntersection);
	}
	template <typename T = void> T CenterCameraOn(Il2CppVector3 pos) {
		return ((T (*)(CityCamera*, Il2CppVector3))(Il2CppBase() + 0x297AD0))(this, pos);
	}
	template <typename T = void> T MoveCameraCloserTo(Il2CppVector3 pos) {
		return ((T (*)(CityCamera*, Il2CppVector3))(Il2CppBase() + 0x297C14))(this, pos);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CityCamera*))(Il2CppBase() + 0x297F24))(this);
	}
	template <typename T = void> T DragEvent(Il2CppVector3 dragVect, bool finished) {
		return ((T (*)(CityCamera*, Il2CppVector3, bool))(Il2CppBase() + 0x29817C))(this, dragVect, finished);
	}
	template <typename T = void> T RequestCameraMoveScreen(Il2CppVector3 newDeltaScreenPos) {
		return ((T (*)(CityCamera*, Il2CppVector3))(Il2CppBase() + 0x2984B8))(this, newDeltaScreenPos);
	}
	template <typename T = void> T RequestCameraWorldMove(Il2CppVector3 newPos) {
		return ((T (*)(CityCamera*, Il2CppVector3))(Il2CppBase() + 0x297BFC))(this, newPos);
	}
	template <typename T = void> T ClampCameraPos(void* pos) {
		return ((T (*)(CityCamera*, void*))(Il2CppBase() + 0x29864C))(this, pos);
	}
	template <typename T = void> T SmoothCameraMove(float deltaTime) {
		return ((T (*)(CityCamera*, float))(Il2CppBase() + 0x298744))(this, deltaTime);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CityCamera*))(Il2CppBase() + 0x298BAC))(this);
	}
};
