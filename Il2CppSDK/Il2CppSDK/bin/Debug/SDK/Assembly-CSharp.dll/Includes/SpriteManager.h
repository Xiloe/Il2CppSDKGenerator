#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpriteManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& material() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& allocBlockSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& plane() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& winding() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& autoUpdateBounds() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& availableBlocks() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& vertsChanged() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& uvsChanged() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& colorsChanged() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& vertCountChanged() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = bool> T& updateBounds() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<void*>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& activeBlocks() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& activeBillboards() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& boundUpdateInterval() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& meshFilter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& meshRenderer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& mesh() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<void*>*> T& vertices() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<void*>*> T& triIndices() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<void*>*> T& UVs() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<void*>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpriteManager*))(Il2CppBase() + 0x25B08C))(this);
	}
	template <typename T = Il2CppVector2> T PixelSpaceToUVSpace(Il2CppVector2 xy) {
		return ((T (*)(SpriteManager*, Il2CppVector2))(Il2CppBase() + 0x25B160))(this, xy);
	}
	template <typename T = Il2CppVector2> T PixelSpaceToUVSpace_1(int32_t x, int32_t y) {
		return ((T (*)(SpriteManager*, int32_t, int32_t))(Il2CppBase() + 0x25B2C0))(this, x, y);
	}
	template <typename T = Il2CppVector2> T PixelCoordToUVCoord(Il2CppVector2 xy) {
		return ((T (*)(SpriteManager*, Il2CppVector2))(Il2CppBase() + 0x25B320))(this, xy);
	}
	template <typename T = Il2CppVector2> T PixelCoordToUVCoord_1(int32_t x, int32_t y) {
		return ((T (*)(SpriteManager*, int32_t, int32_t))(Il2CppBase() + 0x25B358))(this, x, y);
	}
	template <typename T = void> T SetMaterial(void* mat) {
		return ((T (*)(SpriteManager*, void*))(Il2CppBase() + 0x25B3D0))(this, mat);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpriteManager*))(Il2CppBase() + 0x25B484))(this);
	}
	template <typename T = void> T InitArrays() {
		return ((T (*)(SpriteManager*))(Il2CppBase() + 0x25C370))(this);
	}
	template <typename T = int32_t> T EnlargeArrays(int32_t count) {
		return ((T (*)(SpriteManager*, int32_t))(Il2CppBase() + 0x25B8C4))(this, count);
	}
	template <typename T = void*> T AddSprite(void* client, float width, float height, int32_t leftPixelX, int32_t bottomPixelY, int32_t pixelWidth, int32_t pixelHeight, bool billboarded) {
		return ((T (*)(SpriteManager*, void*, float, float, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x25A910))(this, client, width, height, leftPixelX, bottomPixelY, pixelWidth, pixelHeight, billboarded);
	}
	template <typename T = void*> T AddSprite_1(void* client, float width, float height, Il2CppVector2 lowerLeftUV, Il2CppVector2 UVDimensions, bool billboarded) {
		return ((T (*)(SpriteManager*, void*, float, float, Il2CppVector2, Il2CppVector2, bool))(Il2CppBase() + 0x25C61C))(this, client, width, height, lowerLeftUV, UVDimensions, billboarded);
	}
	template <typename T = void> T SetBillboarded(void* sprite) {
		return ((T (*)(SpriteManager*, void*))(Il2CppBase() + 0x25CA84))(this, sprite);
	}
	template <typename T = void> T RemoveSprite(void* sprite) {
		return ((T (*)(SpriteManager*, void*))(Il2CppBase() + 0x25A408))(this, sprite);
	}
	template <typename T = void> T HideSprite(void* sprite) {
		return ((T (*)(SpriteManager*, void*))(Il2CppBase() + 0x258208))(this, sprite);
	}
	template <typename T = void> T ShowSprite(void* sprite) {
		return ((T (*)(SpriteManager*, void*))(Il2CppBase() + 0x2583C8))(this, sprite);
	}
	template <typename T = void*> T GetSprite(int32_t i) {
		return ((T (*)(SpriteManager*, int32_t))(Il2CppBase() + 0x25CB24))(this, i);
	}
	template <typename T = void> T Transform(void* sprite) {
		return ((T (*)(SpriteManager*, void*))(Il2CppBase() + 0x25CB70))(this, sprite);
	}
	template <typename T = void> T TransformToGround(void* sprite) {
		return ((T (*)(SpriteManager*, void*))(Il2CppBase() + 0x25CBA4))(this, sprite);
	}
	template <typename T = void> T TransformBillboarded(void* sprite) {
		return ((T (*)(SpriteManager*, void*))(Il2CppBase() + 0x25CBD8))(this, sprite);
	}
	template <typename T = void> T UpdatePositions() {
		return ((T (*)(SpriteManager*))(Il2CppBase() + 0x258DB0))(this);
	}
	template <typename T = void> T UpdateUV(void* sprite) {
		return ((T (*)(SpriteManager*, void*))(Il2CppBase() + 0x257F40))(this, sprite);
	}
	template <typename T = void> T UpdateColors(void* sprite) {
		return ((T (*)(SpriteManager*, void*))(Il2CppBase() + 0x2593B8))(this, sprite);
	}
	template <typename T = void> T UpdateBounds() {
		return ((T (*)(SpriteManager*))(Il2CppBase() + 0x25CE88))(this);
	}
	template <typename T = void> T ScheduleBoundsUpdate(float seconds) {
		return ((T (*)(SpriteManager*, float))(Il2CppBase() + 0x25CE94))(this, seconds);
	}
	template <typename T = void> T CancelBoundsUpdate() {
		return ((T (*)(SpriteManager*))(Il2CppBase() + 0x25CF44))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SpriteManager*))(Il2CppBase() + 0x25CFCC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpriteManager*))(Il2CppBase() + 0x25CFD0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(SpriteManager*))(Il2CppBase() + 0x25D130))(this);
	}
};
