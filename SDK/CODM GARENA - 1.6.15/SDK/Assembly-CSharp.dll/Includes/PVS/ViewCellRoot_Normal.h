#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVS {

class ViewCellRootNormal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVS", "ViewCellRoot_Normal"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& ColliderList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildObjectSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnBuildObjectSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T BuildObjectSet(Il2CppArray<uintptr_t>* rootList) {
		return ((T (*)(ViewCellRootNormal*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3DB1DF4))(this, rootList);
	}
	template <typename T = void> T UnBuildObjectSet() {
		return ((T (*)(ViewCellRootNormal*))(Il2CppBase() + 0x3DB2330))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_BuildObjectSet(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(ViewCellRootNormal*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3DB25DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UnBuildObjectSet() {
		return ((T (*)(ViewCellRootNormal*))(Il2CppBase() + 0x3DB25E0))(this);
	}

};

}
