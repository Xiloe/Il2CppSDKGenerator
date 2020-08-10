#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SupportHelper
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SupportHelper*))(Il2CppBase() + 0x268DD4))(this);
	}
	template <typename T = void> static T ShowEulaTerms() {
		return ((T (*)(void *))(Il2CppBase() + 0x268DDC))(0);
	}
	template <typename T = void> static T ShowPrivacyTerms() {
		return ((T (*)(void *))(Il2CppBase() + 0x268EA4))(0);
	}
	template <typename T = void> static T ShowFeedbackPage() {
		return ((T (*)(void *))(Il2CppBase() + 0x268F6C))(0);
	}
	template <typename T = Il2CppString*> static T ToBase64(Il2CppString* data) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x269604))(0, data);
	}
};
