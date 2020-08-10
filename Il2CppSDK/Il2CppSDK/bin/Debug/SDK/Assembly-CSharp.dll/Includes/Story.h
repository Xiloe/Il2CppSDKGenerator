#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Story
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& storyCaption() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& storyPages() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& storyPicture() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& storyText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& debriefPages() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& debriefPicture() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& objectiveText() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& missionsRequired() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& rankToProgress() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_UID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Story*))(Il2CppBase() + 0x2666D4))(this);
	}
	template <typename T = int32_t> T get_uid() {
		return ((T (*)(Story*))(Il2CppBase() + 0x266ACC))(this);
	}
};
