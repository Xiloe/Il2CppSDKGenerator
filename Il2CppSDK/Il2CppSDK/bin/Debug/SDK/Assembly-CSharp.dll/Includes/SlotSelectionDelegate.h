#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotSelectionDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(SlotSelectionDelegate*, void*, void*))(Il2CppBase() + 0x375350))(this, object, method);
	}
	template <typename T = void> T Invoke(int32_t slotIndex) {
		return ((T (*)(SlotSelectionDelegate*, int32_t))(Il2CppBase() + 0x37B760))(this, slotIndex);
	}
	template <typename T = void*> T BeginInvoke(int32_t slotIndex, void* callback, void* object) {
		return ((T (*)(SlotSelectionDelegate*, int32_t, void*, void*))(Il2CppBase() + 0x37B7E0))(this, slotIndex, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(SlotSelectionDelegate*, void*))(Il2CppBase() + 0x37B89C))(this, result);
	}
};
