#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudContest
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7915C);
	}
	// Fields
	template <typename T = Il2CppColor> static T& SuccessColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppColor> static T& FailColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppColor> static T& DefaultColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> T& m_ContestCamera() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_HudTimeFromStart() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Main() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<void*>*> T& m_ContestResources() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<void*>*> T& m_Contest() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_TimeFromStart() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_ContestState() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A4904))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A49CC))(0);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A4B04))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A4B0C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A5DB4))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudContest*, float))(Il2CppBase() + 0x3A5DB8))(this, deltaTime);
	}
	template <typename T = void> T StartContest(Il2CppArray<void*>* objects, void* callback) {
		return ((T (*)(HudContest*, Il2CppArray<void*>*, void*))(Il2CppBase() + 0x3A6A58))(this, objects, callback);
	}
	template <typename T = void> T StopContest() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A6A4C))(this);
	}
	template <typename T = void> T SimulateIngameAction() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A70B0))(this);
	}
	template <typename T = void> T CheckContestButtonActivation() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A6084))(this);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudContest*, bool))(Il2CppBase() + 0x3A7678))(this, on);
	}
	template <typename T = void> T ContestButton1Delegate() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A7D9C))(this);
	}
	template <typename T = void> T ContestButton2Delegate() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A7DA4))(this);
	}
	template <typename T = void> T ContestButton3Delegate() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A7DAC))(this);
	}
	template <typename T = void> T ContestButton4Delegate() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A7DB4))(this);
	}
	template <typename T = void> T ContestButton5Delegate() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A7DBC))(this);
	}
	template <typename T = void> T ContestButtonDelegate(int32_t buttonID) {
		return ((T (*)(HudContest*, int32_t))(Il2CppBase() + 0x3A7314))(this, buttonID);
	}
	template <typename T = void> T HandleContest(void* element) {
		return ((T (*)(HudContest*, void*))(Il2CppBase() + 0x3A62F0))(this, element);
	}
	template <typename T = void> T StopContestInternal() {
		return ((T (*)(HudContest*))(Il2CppBase() + 0x3A67A8))(this);
	}
};
