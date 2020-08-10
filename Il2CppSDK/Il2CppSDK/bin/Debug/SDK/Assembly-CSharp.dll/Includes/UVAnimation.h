#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UVAnimation
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79804);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& frames() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& curFrame() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& stepDir() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& numLoops() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& loopCycles() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& loopReverse() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& framerate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UVAnimation*))(Il2CppBase() + 0x279F28))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UVAnimation*))(Il2CppBase() + 0x259868))(this);
	}
	template <typename T = void> T PlayInReverse() {
		return ((T (*)(UVAnimation*))(Il2CppBase() + 0x259BB8))(this);
	}
	template <typename T = bool> T GetNextFrame(void* uv) {
		return ((T (*)(UVAnimation*, void*))(Il2CppBase() + 0x2595FC))(this, uv);
	}
	template <typename T = Il2CppArray<void*>*> T BuildUVAnim(Il2CppVector2 start, Il2CppVector2 cellSize, int32_t cols, int32_t rows, int32_t totalCells, float fps) {
		return ((T (*)(UVAnimation*, Il2CppVector2, Il2CppVector2, int32_t, int32_t, int32_t, float))(Il2CppBase() + 0x279F38))(this, start, cellSize, cols, rows, totalCells, fps);
	}
	template <typename T = void> T SetAnim(Il2CppArray<void*>* anim) {
		return ((T (*)(UVAnimation*, Il2CppArray<void*>*))(Il2CppBase() + 0x27A128))(this, anim);
	}
	template <typename T = void> T AppendAnim(Il2CppArray<void*>* anim) {
		return ((T (*)(UVAnimation*, Il2CppArray<void*>*))(Il2CppBase() + 0x27A130))(this, anim);
	}
};
