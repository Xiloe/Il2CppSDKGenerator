#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core.Enums {

class UpdateNotice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core.Enums", "UpdateNotice"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& RewindStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
