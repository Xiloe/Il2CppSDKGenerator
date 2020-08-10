#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitDetection
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78D68);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> static T& m_RPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_RPoolIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<void*>*> static T& m_HPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& m_HPoolIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<void*>*> static T& m_RawHits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HitDetection*))(Il2CppBase() + 0x39D60C))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x39D614))(0);
	}
	template <typename T = Il2CppList<void*>*> static T RayCast(Il2CppVector3 origin, Il2CppVector3 direction, float distance, int32_t layersMask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x39D888))(0, origin, direction, distance, layersMask);
	}
	template <typename T = Il2CppList<void*>*> static T SphereCast(Il2CppVector3 origin, float radius, Il2CppVector3 direction, float distance, int32_t layersMask) {
		return ((T (*)(void *, Il2CppVector3, float, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x39E058))(0, origin, radius, direction, distance, layersMask);
	}
	template <typename T = void> static T Update() {
		return ((T (*)(void *))(Il2CppBase() + 0x39E4A8))(0);
	}
	template <typename T = Il2CppList<void*>*> static T GetPooledResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x39DCC8))(0);
	}
	template <typename T = void*> static T GetPooledHit() {
		return ((T (*)(void *))(Il2CppBase() + 0x39DE14))(0);
	}
};
