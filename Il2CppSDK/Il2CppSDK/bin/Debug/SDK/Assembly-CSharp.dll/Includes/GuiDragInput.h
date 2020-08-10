#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiDragInput
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79944);
	}
	// Fields
	template <typename T = bool> T& isHorizontal() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Velocity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& timeTouchPhaseEnded() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& touchBeginTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& touchBeginPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_LastUpdateTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& notMovedSinceTouch() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_FingerId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& lastMouseDragPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& lastDragPos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<float>*> T& lastValues() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppRect> T& m_ActiveArea() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& tapEvent() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& tapEventPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isHolding() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& holdingPos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector2> T& ScrollDelta() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& IsDragging() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x3725C4))(this);
	}
	template <typename T = float> T get_MinSpeed() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x37268C))(this);
	}
	template <typename T = bool> T get_tapEvent() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x372698))(this);
	}
	template <typename T = void> T set_tapEvent(bool value) {
		return ((T (*)(GuiDragInput*, bool))(Il2CppBase() + 0x3726A0))(this, value);
	}
	template <typename T = float> T get_tapEventPos() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x3726A8))(this);
	}
	template <typename T = void> T set_tapEventPos(float value) {
		return ((T (*)(GuiDragInput*, float))(Il2CppBase() + 0x3726B0))(this, value);
	}
	template <typename T = bool> T get_isHolding() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x3726B8))(this);
	}
	template <typename T = void> T set_isHolding(bool value) {
		return ((T (*)(GuiDragInput*, bool))(Il2CppBase() + 0x3726C0))(this, value);
	}
	template <typename T = float> T get_holdingPos() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x3726C8))(this);
	}
	template <typename T = void> T set_holdingPos(float value) {
		return ((T (*)(GuiDragInput*, float))(Il2CppBase() + 0x3726D0))(this, value);
	}
	template <typename T = Il2CppVector2> T get_ScrollDelta() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x3726D8))(this);
	}
	template <typename T = void> T set_ScrollDelta(Il2CppVector2 value) {
		return ((T (*)(GuiDragInput*, Il2CppVector2))(Il2CppBase() + 0x3726EC))(this, value);
	}
	template <typename T = bool> T get_IsDragging() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x3726F8))(this);
	}
	template <typename T = void> T set_IsDragging(bool value) {
		return ((T (*)(GuiDragInput*, bool))(Il2CppBase() + 0x372684))(this, value);
	}
	template <typename T = float> T get_MoveSpeed() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x372700))(this);
	}
	template <typename T = void> T SetActiveArea(Il2CppRect rect) {
		return ((T (*)(GuiDragInput*, Il2CppRect))(Il2CppBase() + 0x3727AC))(this, rect);
	}
	template <typename T = void> T ClearTapEvent() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x3727C4))(this);
	}
	template <typename T = void> T AddInertia(float inr) {
		return ((T (*)(GuiDragInput*, float))(Il2CppBase() + 0x3727D4))(this, inr);
	}
	template <typename T = float> T GetInertia() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x3728D8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x372A40))(this);
	}
	template <typename T = void> T TouchUpdate() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x372C04))(this);
	}
	template <typename T = void> T CleanTouch() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x373984))(this);
	}
	template <typename T = void> T OnDragBegin(float startPos) {
		return ((T (*)(GuiDragInput*, float))(Il2CppBase() + 0x3735A4))(this, startPos);
	}
	template <typename T = void> T OnTouchUpdate(float curPos) {
		return ((T (*)(GuiDragInput*, float))(Il2CppBase() + 0x373860))(this, curPos);
	}
	template <typename T = void> T OnDragMove(float deltaPos, float deltaTime) {
		return ((T (*)(GuiDragInput*, float, float))(Il2CppBase() + 0x373608))(this, deltaPos, deltaTime);
	}
	template <typename T = void> T OnDragEnd(float deltaPos, float deltaTime, float curPos) {
		return ((T (*)(GuiDragInput*, float, float, float))(Il2CppBase() + 0x3736BC))(this, deltaPos, deltaTime, curPos);
	}
	template <typename T = bool> T HasMomentum() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x3739A8))(this);
	}
	template <typename T = void> T OnDragCancel() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x3735E4))(this);
	}
	template <typename T = void> T MouseUpdate() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x372F88))(this);
	}
	template <typename T = float> T GetFriction() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x3739D4))(this);
	}
	template <typename T = void> T UpdateVelocity() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x373494))(this);
	}
	template <typename T = void> T UpdateFrictionProportional() {
		return ((T (*)(GuiDragInput*))(Il2CppBase() + 0x373AD8))(this);
	}
	template <typename T = void> T UpdateFrictionConstant(float inDeltaTime) {
		return ((T (*)(GuiDragInput*, float))(Il2CppBase() + 0x373B08))(this, inDeltaTime);
	}
};
