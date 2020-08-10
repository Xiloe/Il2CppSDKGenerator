#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ColliderExtension
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = bool> static T IsPointInside(void* C, Il2CppVector3 P) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x2D5548))(0, C, P);
	}
	template <typename T = bool> static T IsPointInside_1(void* C, Il2CppVector3 P) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x2D55D0))(0, C, P);
	}
	template <typename T = bool> static T IsPointInside_2(void* C, Il2CppVector3 P) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x2D5658))(0, C, P);
	}
	template <typename T = void> static T Scale(void* C, float Scale) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x2D56E0))(0, C, Scale);
	}
	template <typename T = void> static T Scale_1(void* C, float Scale) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x2D5768))(0, C, Scale);
	}
	template <typename T = void> static T Scale_2(void* C, float Scale) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x2D57E4))(0, C, Scale);
	}
	template <typename T = void> static T Scale_3(void* C, float Scale) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x2D583C))(0, C, Scale);
	}
};
