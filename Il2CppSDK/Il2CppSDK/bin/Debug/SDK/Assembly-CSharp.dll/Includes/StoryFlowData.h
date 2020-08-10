#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoryFlowData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79858);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_UIDGenerator() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(StoryFlowData*))(Il2CppBase() + 0x266254))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_data() {
		return ((T (*)(StoryFlowData*))(Il2CppBase() + 0x266300))(this);
	}
	template <typename T = void*> T GetStory(int32_t storyId) {
		return ((T (*)(StoryFlowData*, int32_t))(Il2CppBase() + 0x266308))(this, storyId);
	}
	template <typename T = void*> T CreateNewStory() {
		return ((T (*)(StoryFlowData*))(Il2CppBase() + 0x266558))(this);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(StoryFlowData*))(Il2CppBase() + 0x266810))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(StoryFlowData*))(Il2CppBase() + 0x26694C))(this);
	}
	template <typename T = int32_t> static T Sortm__C(void* s1, void* s2) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x266950))(0, s1, s2);
	}
};
