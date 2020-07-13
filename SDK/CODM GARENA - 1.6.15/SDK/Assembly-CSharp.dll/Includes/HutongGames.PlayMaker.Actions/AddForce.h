#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AddForce
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AddForce"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& atPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& vector() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& x() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& y() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& z() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& forceMode() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AddForce*))(Il2CppBase() + 0x476C6AC))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(AddForce*))(Il2CppBase() + 0x476C844))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AddForce*))(Il2CppBase() + 0x476C878))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(AddForce*))(Il2CppBase() + 0x476CBB8))(this);
	}
	template <typename T = void> T DoAddForce() {
		return ((T (*)(AddForce*))(Il2CppBase() + 0x476C8A4))(this);
	}

};

}
