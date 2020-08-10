#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseList
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_FirstListLine() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_NumOfLines() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& m_LinesOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<void*>*> T& m_Lines() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseList*))(Il2CppBase() + 0x361D60))(this);
	}
	template <typename T = void*> T get_Widget() {
		return ((T (*)(GUIBaseList*))(Il2CppBase() + 0x361E14))(this);
	}
	template <typename T = int32_t> T get_numOfLines() {
		return ((T (*)(GUIBaseList*))(Il2CppBase() + 0x361E1C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseList*))(Il2CppBase() + 0x361EB4))(this);
	}
	template <typename T = void*> T GetWidgetOnLine(int32_t inLineIndex) {
		return ((T (*)(GUIBaseList*, int32_t))(Il2CppBase() + 0x3625CC))(this, inLineIndex);
	}
	template <typename T = void> T InitializeChilds() {
		return ((T (*)(GUIBaseList*))(Il2CppBase() + 0x361F70))(this);
	}
};
