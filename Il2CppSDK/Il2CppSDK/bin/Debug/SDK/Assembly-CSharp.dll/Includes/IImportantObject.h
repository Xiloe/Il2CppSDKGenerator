#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IImportantObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F74);
	}
	// Methods
	template <typename T = void*> T GetImportantObjectType() {
		return ((T (*)(IImportantObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T GetGameObject() {
		return ((T (*)(IImportantObject*))(Il2CppBase() + 0x0))(this);
	}
};
