#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Shape
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_BBox() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Shape*))(Il2CppBase() + 0x233610))(this);
	}
	template <typename T = int32_t> T RayCast(Il2CppVector3 Origin, Il2CppVector3 Direction, Il2CppArray<void*>* Hits) {
		return ((T (*)(Shape*, Il2CppVector3, Il2CppVector3, Il2CppArray<void*>*))(Il2CppBase() + 0x2336B0))(this, Origin, Direction, Hits);
	}
	template <typename T = int32_t> T SphereCast(Il2CppVector3 Origin, Il2CppVector3 Direction, float Radius, Il2CppArray<void*>* Hits) {
		return ((T (*)(Shape*, Il2CppVector3, Il2CppVector3, float, Il2CppArray<void*>*))(Il2CppBase() + 0x2336B8))(this, Origin, Direction, Radius, Hits);
	}
	template <typename T = void> T UpdateBBox() {
		return ((T (*)(Shape*))(Il2CppBase() + 0x2336C0))(this);
	}
};
