#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetingSystem
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_PartsSettings() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_RotSettings() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_SndSettings() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_State() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_InTolerance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_TimerInTolerance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_TimerNotInTolerance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_HMotor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_VMotor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Dir() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TargetingSystem*))(Il2CppBase() + 0x269B84))(this);
	}
	template <typename T = Il2CppVector3> T get_Dir() {
		return ((T (*)(TargetingSystem*))(Il2CppBase() + 0x269D04))(this);
	}
	template <typename T = bool> T get_DirInTolerance() {
		return ((T (*)(TargetingSystem*))(Il2CppBase() + 0x269D50))(this);
	}
	template <typename T = Il2CppVector3> T get_Origin() {
		return ((T (*)(TargetingSystem*))(Il2CppBase() + 0x269D58))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TargetingSystem*))(Il2CppBase() + 0x269D8C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(TargetingSystem*))(Il2CppBase() + 0x26A590))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TargetingSystem*))(Il2CppBase() + 0x26A59C))(this);
	}
	template <typename T = void> T ChangeState(void* NewState) {
		return ((T (*)(TargetingSystem*, void*))(Il2CppBase() + 0x26A9E0))(this, NewState);
	}
	template <typename T = Il2CppVector3> T GetDir(void* Dir) {
		return ((T (*)(TargetingSystem*, void*))(Il2CppBase() + 0x26A538))(this, Dir);
	}
	template <typename T = void> T SetCurrentDir(Il2CppVector3 Dir, bool ResetTargetDir) {
		return ((T (*)(TargetingSystem*, Il2CppVector3, bool))(Il2CppBase() + 0x26AC70))(this, Dir, ResetTargetDir);
	}
	template <typename T = void> T SetTargetDir(Il2CppVector3 Dir) {
		return ((T (*)(TargetingSystem*, Il2CppVector3))(Il2CppBase() + 0x26ADC0))(this, Dir);
	}
	template <typename T = void> T SetTargetDirByPos(Il2CppVector3 Pos) {
		return ((T (*)(TargetingSystem*, Il2CppVector3))(Il2CppBase() + 0x26AEA8))(this, Pos);
	}
	template <typename T = void> T SetTargetDirByAngleDiffs(float HChange, float VChange) {
		return ((T (*)(TargetingSystem*, float, float))(Il2CppBase() + 0x25E68C))(this, HChange, VChange);
	}
	template <typename T = void> T ComputeDirs() {
		return ((T (*)(TargetingSystem*))(Il2CppBase() + 0x26A03C))(this);
	}
};
