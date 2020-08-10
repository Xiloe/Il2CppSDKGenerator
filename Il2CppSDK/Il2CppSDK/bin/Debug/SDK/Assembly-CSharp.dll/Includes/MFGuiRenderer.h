#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MFGuiRenderer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79434);
	}
	// Fields
	template <typename T = void*> T& UILayer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& ZeroLocation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& _xOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _yOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Material() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& allocBlockSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& plane() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<void*>*> T& availableBlocks() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& countChanged() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& vertsChanged() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& uvsChanged() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = bool> T& colorsChanged() {
		return *(T*)((uintptr_t)this + 0x33);
	}
	template <typename T = Il2CppArray<void*>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<void*>*> T& activeBlocks() {
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
	template <typename T = int32_t> static T& s_RenderersCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_RegisterdWidgetsCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MFGuiRenderer*))(Il2CppBase() + 0x3F1C38))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F1D20))(0);
	}
	template <typename T = Il2CppVector2> T PixelSpaceToUVSpace(Il2CppVector2 xy) {
		return ((T (*)(MFGuiRenderer*, Il2CppVector2))(Il2CppBase() + 0x3F1D24))(this, xy);
	}
	template <typename T = Il2CppVector2> T PixelSpaceToUVSpace_1(int32_t x, int32_t y) {
		return ((T (*)(MFGuiRenderer*, int32_t, int32_t))(Il2CppBase() + 0x3F1E84))(this, x, y);
	}
	template <typename T = Il2CppVector2> T PixelCoordToUVCoord(Il2CppVector2 xy) {
		return ((T (*)(MFGuiRenderer*, Il2CppVector2))(Il2CppBase() + 0x3F1EE4))(this, xy);
	}
	template <typename T = Il2CppVector2> T PixelCoordToUVCoord_1(int32_t x, int32_t y) {
		return ((T (*)(MFGuiRenderer*, int32_t, int32_t))(Il2CppBase() + 0x3F1F1C))(this, x, y);
	}
	template <typename T = void> T SetMaterial(void* mat) {
		return ((T (*)(MFGuiRenderer*, void*))(Il2CppBase() + 0x3EF060))(this, mat);
	}
	template <typename T = void*> T GetMaterial() {
		return ((T (*)(MFGuiRenderer*))(Il2CppBase() + 0x3F1F94))(this);
	}
	template <typename T = bool> T IsAnySpriteActive() {
		return ((T (*)(MFGuiRenderer*))(Il2CppBase() + 0x3F0EA8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MFGuiRenderer*))(Il2CppBase() + 0x3F1F9C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MFGuiRenderer*))(Il2CppBase() + 0x3F2AA0))(this);
	}
	template <typename T = void> T UpdateUISize() {
		return ((T (*)(MFGuiRenderer*))(Il2CppBase() + 0x3F2A48))(this);
	}
	template <typename T = void> T InitArrays() {
		return ((T (*)(MFGuiRenderer*))(Il2CppBase() + 0x3F2B90))(this);
	}
	template <typename T = int32_t> T EnlargeArrays(int32_t count) {
		return ((T (*)(MFGuiRenderer*, int32_t))(Il2CppBase() + 0x3F24B0))(this, count);
	}
	template <typename T = int32_t> T RegisterWidget(void* inWidget) {
		return ((T (*)(MFGuiRenderer*, void*))(Il2CppBase() + 0x3EF790))(this, inWidget);
	}
	template <typename T = int32_t> T UnRegisterWidget(void* inWidget) {
		return ((T (*)(MFGuiRenderer*, void*))(Il2CppBase() + 0x3EFB24))(this, inWidget);
	}
	template <typename T = void*> T AddSprite(void* client, void* matrix, float width, float height, float rotAngle, float depth, Il2CppVector2 lowerLeftUV, Il2CppVector2 UVDimensions) {
		return ((T (*)(MFGuiRenderer*, void*, void*, float, float, float, float, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x3F2E1C))(this, client, matrix, width, height, rotAngle, depth, lowerLeftUV, UVDimensions);
	}
	template <typename T = void> T RemoveSprite(void* sprite) {
		return ((T (*)(MFGuiRenderer*, void*))(Il2CppBase() + 0x3F3B6C))(this, sprite);
	}
	template <typename T = void> T HideSprite(void* sprite) {
		return ((T (*)(MFGuiRenderer*, void*))(Il2CppBase() + 0x3F0B80))(this, sprite);
	}
	template <typename T = void> T ShowSprite(void* sprite) {
		return ((T (*)(MFGuiRenderer*, void*))(Il2CppBase() + 0x3F13C0))(this, sprite);
	}
	template <typename T = void*> T GetSprite(int32_t i) {
		return ((T (*)(MFGuiRenderer*, int32_t))(Il2CppBase() + 0x3F3F2C))(this, i);
	}
	template <typename T = void> T Transform(void* sprite) {
		return ((T (*)(MFGuiRenderer*, void*))(Il2CppBase() + 0x3F3F78))(this, sprite);
	}
	template <typename T = void> T UpdatePositions() {
		return ((T (*)(MFGuiRenderer*))(Il2CppBase() + 0x3F3FB4))(this);
	}
	template <typename T = void> T UpdateUV(void* sprite) {
		return ((T (*)(MFGuiRenderer*, void*))(Il2CppBase() + 0x3F3FC0))(this, sprite);
	}
	template <typename T = void> T UpdateColors(void* sprite) {
		return ((T (*)(MFGuiRenderer*, void*))(Il2CppBase() + 0x3F41E0))(this, sprite);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(MFGuiRenderer*))(Il2CppBase() + 0x3F42E4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(MFGuiRenderer*))(Il2CppBase() + 0x3F43E0))(this);
	}
	template <typename T = void> T UpdateMeshIfNeeded() {
		return ((T (*)(MFGuiRenderer*))(Il2CppBase() + 0x3F42E8))(this);
	}
	template <typename T = void*> T AddElement(Il2CppVector2 leftDown, float width, float height, float rotAngle, float depth, int32_t leftPixelX, int32_t bottomPixelY, int32_t pixelWidth, int32_t pixelHeight) {
		return ((T (*)(MFGuiRenderer*, Il2CppVector2, float, float, float, float, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3F16F0))(this, leftDown, width, height, rotAngle, depth, leftPixelX, bottomPixelY, pixelWidth, pixelHeight);
	}
	template <typename T = void*> T AddElement_1(Il2CppVector2 leftDown, float width, float height, float rotAngle, float depth, Il2CppVector2 lowerLeftUV, Il2CppVector2 uvSize) {
		return ((T (*)(MFGuiRenderer*, Il2CppVector2, float, float, float, float, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x3F43E4))(this, leftDown, width, height, rotAngle, depth, lowerLeftUV, uvSize);
	}
	template <typename T = void> T UpdateSpritePosSize(void* sprite, float rx, float ry, float width, float height, float rotAngle, float depth) {
		return ((T (*)(MFGuiRenderer*, void*, float, float, float, float, float, float))(Il2CppBase() + 0x3F45C8))(this, sprite, rx, ry, width, height, rotAngle, depth);
	}
	template <typename T = void> static T LogFuncCall(Il2CppString* funcName, Il2CppString* rendererId) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3F4880))(0, funcName, rendererId);
	}
};
