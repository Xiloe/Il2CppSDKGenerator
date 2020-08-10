#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PCMReaderCallback
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(PCMReaderCallback*, void*, void*))(Il2CppBase() + 0x8EF194))(this, object, method);
	}
	template <typename T = void> T Invoke(Il2CppArray<void*>* data) {
		return ((T (*)(PCMReaderCallback*, Il2CppArray<void*>*))(Il2CppBase() + 0x8EF078))(this, data);
	}
	template <typename T = void*> T BeginInvoke(Il2CppArray<void*>* data, void* callback, void* object) {
		return ((T (*)(PCMReaderCallback*, Il2CppArray<void*>*, void*, void*))(Il2CppBase() + 0x8EF1DC))(this, data, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(PCMReaderCallback*, void*))(Il2CppBase() + 0x8EF208))(this, result);
	}
};
