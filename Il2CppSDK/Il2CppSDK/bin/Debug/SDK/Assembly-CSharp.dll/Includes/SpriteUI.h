#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpriteUI
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& DrawDepth() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& UILayer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& ZeroLocation() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& ScreenOrientation() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& _uiCamera() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& _uiCameraHolder() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& _xOffset() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& _yOffset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpriteUI*))(Il2CppBase() + 0x25D29C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpriteUI*))(Il2CppBase() + 0x25D2DC))(this);
	}
	template <typename T = void> T UpdateUISize() {
		return ((T (*)(SpriteUI*))(Il2CppBase() + 0x25D5D8))(this);
	}
	template <typename T = void*> T AddElement(Il2CppVector2 leftDown, float width, float height, float depth, int32_t leftPixelX, int32_t bottomPixelY, int32_t pixelWidth, int32_t pixelHeight) {
		return ((T (*)(SpriteUI*, Il2CppVector2, float, float, float, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x25D630))(this, leftDown, width, height, depth, leftPixelX, bottomPixelY, pixelWidth, pixelHeight);
	}
	template <typename T = void*> T AddElement_1(Il2CppVector2 leftDown, float width, float height, float depth, Il2CppVector2 lowerLeftUV, Il2CppVector2 uvSize) {
		return ((T (*)(SpriteUI*, Il2CppVector2, float, float, float, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x25D6C0))(this, leftDown, width, height, depth, lowerLeftUV, uvSize);
	}
	template <typename T = void*> T AddUIElement(Il2CppVector2 leftDown, float width, float height, float depth, Il2CppVector2 lowerLeftUV, Il2CppVector2 uvSize, void* manager, bool isActive) {
		return ((T (*)(SpriteUI*, Il2CppVector2, float, float, float, Il2CppVector2, Il2CppVector2, void*, bool))(Il2CppBase() + 0x25D710))(this, leftDown, width, height, depth, lowerLeftUV, uvSize, manager, isActive);
	}
	template <typename T = void> T UpdateSpriteSize(void* sprite, Il2CppVector2 upperLeft, float width, float height) {
		return ((T (*)(SpriteUI*, void*, Il2CppVector2, float, float))(Il2CppBase() + 0x25D938))(this, sprite, upperLeft, width, height);
	}
	template <typename T = void> T UpdateSpriteSize_1(void* sprite, Il2CppVector2 leftDown, float width, float height, int32_t leftPixelX, int32_t bottomPixelY, int32_t pixelWidth, int32_t pixelHeight) {
		return ((T (*)(SpriteUI*, void*, Il2CppVector2, float, float, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x25DA20))(this, sprite, leftDown, width, height, leftPixelX, bottomPixelY, pixelWidth, pixelHeight);
	}
	template <typename T = void> T UpdateSpriteSize_2(void* sprite, Il2CppVector2 leftDown, float width, float height, Il2CppVector2 lowerLeftUV, Il2CppVector2 uvSize) {
		return ((T (*)(SpriteUI*, void*, Il2CppVector2, float, float, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x25DAA8))(this, sprite, leftDown, width, height, lowerLeftUV, uvSize);
	}
	template <typename T = void> T SetSpritePosition(void* s, Il2CppVector2 leftDown) {
		return ((T (*)(SpriteUI*, void*, Il2CppVector2))(Il2CppBase() + 0x25DBB8))(this, s, leftDown);
	}
	template <typename T = void> T SetSpriteCenterPosition(void* s, Il2CppVector2 center) {
		return ((T (*)(SpriteUI*, void*, Il2CppVector2))(Il2CppBase() + 0x25DC7C))(this, s, center);
	}
	template <typename T = void*> T MoveSprite(void* s, float time, float delay, Il2CppVector2 leftDown) {
		return ((T (*)(SpriteUI*, void*, float, float, Il2CppVector2))(Il2CppBase() + 0x25DD24))(this, s, time, delay, leftDown);
	}
};
