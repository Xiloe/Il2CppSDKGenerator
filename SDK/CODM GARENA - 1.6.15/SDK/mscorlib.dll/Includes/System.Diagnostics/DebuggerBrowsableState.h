#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class DebuggerBrowsableState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Diagnostics", "DebuggerBrowsableState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Never() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Collapsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& RootHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
