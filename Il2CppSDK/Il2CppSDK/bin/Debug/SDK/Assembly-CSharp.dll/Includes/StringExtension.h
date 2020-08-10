#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringExtension
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = bool> static T HasValue(Il2CppString* this_) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x266AD4))(0, this_);
	}
	template <typename T = Il2CppString*> static T CollapseWhiteSpaces(Il2CppString* this_) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x266B80))(0, this_);
	}
	template <typename T = Il2CppString*> static T CollapseWhiteSpaces_1(Il2CppString* this_, bool trim) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x2670BC))(0, this_, trim);
	}
	template <typename T = Il2CppString*> static T CollapseWhiteSpaces_2(Il2CppString* this_, bool trim, bool condense) {
		return ((T (*)(void *, Il2CppString*, bool, bool))(Il2CppBase() + 0x266BA0))(0, this_, trim, condense);
	}
	template <typename T = Il2CppString*> static T AsciiOnly(Il2CppString* this_, bool includeExtendedAscii) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x2670D8))(0, this_, includeExtendedAscii);
	}
	template <typename T = bool> static T FastStartsWith(Il2CppString* this_, Il2CppString* pattern) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x267234))(0, this_, pattern);
	}
	template <typename T = bool> static T FastEndsWith(Il2CppString* this_, Il2CppString* pattern) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x267388))(0, this_, pattern);
	}
	template <typename T = int32_t> static T FastIndexOf(Il2CppString* this_, char ch) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0x2674F8))(0, this_, ch);
	}
	template <typename T = int32_t> static T FastCompareTo(Il2CppString* this_, Il2CppString* pattern) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2675A0))(0, this_, pattern);
	}
	template <typename T = Il2CppString*> static T Escape(Il2CppString* this_) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x267650))(0, this_);
	}
	template <typename T = Il2CppString*> static T Unescape(Il2CppString* this_) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x267F10))(0, this_);
	}
};
