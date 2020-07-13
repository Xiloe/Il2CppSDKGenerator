#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class HMACSHA384
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "HMACSHA384"));
	}

	template <typename T = bool> static T& legacy_mode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& legacy() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T set_ProduceLegacyHmacValues(bool value) {
		return ((T (*)(HMACSHA384*, bool))(Il2CppBase() + 0x3042970))(this, value);
	}

};

}
