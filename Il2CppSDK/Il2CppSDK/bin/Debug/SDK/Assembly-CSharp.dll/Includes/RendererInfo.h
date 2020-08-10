#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RendererInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Renderer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& LightmapIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = void*> T& LightmapOffsetScale() {
		return *(T*)((uintptr_t)this + 0x8);
	}
};
