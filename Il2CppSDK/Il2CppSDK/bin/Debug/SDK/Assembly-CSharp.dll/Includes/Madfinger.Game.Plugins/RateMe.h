#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace Madfinger { 
	namespace Game { 
		namespace Plugins { 
			class RateMe
			{
			public: 
				static Il2CppClass *StaticClass() {
					return *(Il2CppClass **)(Il2CppBase() + 0x0);
				}
				// Fields
				// Methods
				template <typename T = bool> static T get_IsInitialized() {
					return ((T (*)(void *))(Il2CppBase() + 0x3E0600))(0);
				}
				template <typename T = bool> static T get_IsShown() {
					return ((T (*)(void *))(Il2CppBase() + 0x3E06A0))(0);
				}
				template <typename T = void> static T Initialize() {
					return ((T (*)(void *))(Il2CppBase() + 0x3E0740))(0);
				}
				template <typename T = void> static T Deinitialize() {
					return ((T (*)(void *))(Il2CppBase() + 0x3E0850))(0);
				}
				template <typename T = void> static T ShowRateMe(int32_t titleID, int32_t messageID, Il2CppString* openUrl, int32_t rateButtonID, int32_t laterButtonID, int32_t neverButtonID, bool force, float daysToReminder, void* result) {
					return ((T (*)(void *, int32_t, int32_t, Il2CppString*, int32_t, int32_t, int32_t, bool, float, void*))(Il2CppBase() + 0x3E0854))(0, titleID, messageID, openUrl, rateButtonID, laterButtonID, neverButtonID, force, daysToReminder, result);
				}
				template <typename T = void> static T TryToShowDefault() {
					return ((T (*)(void *))(Il2CppBase() + 0x3E0B2C))(0);
				}
				template <typename T = void> static T Reset() {
					return ((T (*)(void *))(Il2CppBase() + 0x3E0CF0))(0);
				}
				template <typename T = bool> static T IsInitializedAndSupported() {
					return ((T (*)(void *))(Il2CppBase() + 0x3E0C00))(0);
				}
				template <typename T = void*> static T EnumTryParse(void* value, void* defaultValue) {
					return ((T (*)(void *, void*, void*))(Il2CppBase() + 0xA14CB8))(0, value, defaultValue);
				}
			};
		}
	}
}
