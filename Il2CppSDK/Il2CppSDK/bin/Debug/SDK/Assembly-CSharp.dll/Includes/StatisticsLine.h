#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatisticsLine
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppColor> T& HIGHLIGHT_COLOR() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppColor> T& DEFAULT_COLOR() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Line() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_PlayerValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_FriendValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_FriendName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor(void* inLine) {
		return ((T (*)(StatisticsLine*, void*))(Il2CppBase() + 0x265440))(this, inLine);
	}
	template <typename T = Il2CppVector3> T get_spritePos() {
		return ((T (*)(StatisticsLine*))(Il2CppBase() + 0x265B98))(this);
	}
	template <typename T = void> T Update(void* inItem, void* inStatisticMode) {
		return ((T (*)(StatisticsLine*, void*, void*))(Il2CppBase() + 0x265640))(this, inItem, inStatisticMode);
	}
	template <typename T = void> T Show() {
		return ((T (*)(StatisticsLine*))(Il2CppBase() + 0x26560C))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(StatisticsLine*))(Il2CppBase() + 0x265900))(this);
	}
	template <typename T = void> T Update_1(void* inItem, void* inStatisticMode) {
		return ((T (*)(StatisticsLine*, void*, void*))(Il2CppBase() + 0x265BE0))(this, inItem, inStatisticMode);
	}
	template <typename T = void> T Update_2(void* inItem, void* inStatisticMode) {
		return ((T (*)(StatisticsLine*, void*, void*))(Il2CppBase() + 0x265D50))(this, inItem, inStatisticMode);
	}
	template <typename T = void> T Update_3(void* inItem, void* inStatisticMode) {
		return ((T (*)(StatisticsLine*, void*, void*))(Il2CppBase() + 0x265EC0))(this, inItem, inStatisticMode);
	}
	template <typename T = void> T UpdateLine(Il2CppString* inText, Il2CppString* inVal1, Il2CppString* inVal2, Il2CppString* inVal3, bool inHighlightPlayer, bool inHighlightFriend) {
		return ((T (*)(StatisticsLine*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x265FF4))(this, inText, inVal1, inVal2, inVal3, inHighlightPlayer, inHighlightFriend);
	}
	template <typename T = void> T UpdateLine_1(int32_t inTextID, Il2CppString* inVal1, Il2CppString* inVal2, Il2CppString* inVal3, bool inHighlightPlayer, bool inHighlightFriend) {
		return ((T (*)(StatisticsLine*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x266124))(this, inTextID, inVal1, inVal2, inVal3, inHighlightPlayer, inHighlightFriend);
	}
};
