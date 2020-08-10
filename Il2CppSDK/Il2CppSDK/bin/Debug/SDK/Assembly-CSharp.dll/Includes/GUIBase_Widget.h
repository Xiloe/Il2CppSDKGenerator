#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseWidget
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD790C0);
	}
	// Fields
	template <typename T = void*> T& m_Material() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_FocusID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& m_InTexPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& m_InTexSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_GuiWidgetLayer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_InitProxyFlag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_VisibleOnLayoutShow() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = float> T& m_FadeAlpha() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppColor> T& m_Color() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_Width() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_Height() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_GuiRenderer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_IsVisible() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& m_UpdateDelegate() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Sprite() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_UnusedSpriteIndex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& m_ParentWidget() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> T& m_ParentPivot() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& m_ParentLayout() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_IsModified() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_TextScaleFix_HACK() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = Il2CppVector3> T& m_Pos() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector3> T& m_Scale() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_Rot() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppColor> T& m_ColorCached() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x3695FC))(this);
	}
	template <typename T = int32_t> T get_ReservedSpritesSize() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x3697B0))(this);
	}
	template <typename T = void> T Initialization(void* parentLayout, Il2CppVector2 layoutScale) {
		return ((T (*)(GUIBaseWidget*, void*, Il2CppVector2))(Il2CppBase() + 0x3697C4))(this, parentLayout, layoutScale);
	}
	template <typename T = void> T ChangeMaterial(void* inMaterial) {
		return ((T (*)(GUIBaseWidget*, void*))(Il2CppBase() + 0x367AA4))(this, inMaterial);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x369DE4))(this);
	}
	template <typename T = void> T RegisterUpdateDelegate(void* f) {
		return ((T (*)(GUIBaseWidget*, void*))(Il2CppBase() + 0x364E90))(this, f);
	}
	template <typename T = float> T GetWidth() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x365B08))(this);
	}
	template <typename T = float> T GetHeight() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x365B10))(this);
	}
	template <typename T = void*> T GetGuiRenderer() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x369DF0))(this);
	}
	template <typename T = Il2CppVector3> T GetOrigPos() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x368708))(this);
	}
	template <typename T = void*> T GetMaterial() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x369DF8))(this);
	}
	template <typename T = void*> T GetTexture() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x365B18))(this);
	}
	template <typename T = void> T CopyMaterialSettings(void* otherWidget) {
		return ((T (*)(GUIBaseWidget*, void*))(Il2CppBase() + 0x369E28))(this, otherWidget);
	}
	template <typename T = int32_t> T GetLayoutUniqueId() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x36A62C))(this);
	}
	template <typename T = void*> T AddSprite(Il2CppVector2 leftDown, float width, float height, float rotAngle, float depth, int32_t leftPixelX, int32_t bottomPixelY, int32_t pixelWidth, int32_t pixelHeight) {
		return ((T (*)(GUIBaseWidget*, Il2CppVector2, float, float, float, float, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x36A590))(this, leftDown, width, height, rotAngle, depth, leftPixelX, bottomPixelY, pixelWidth, pixelHeight);
	}
	template <typename T = void> T UpdateSprite(void* sprite, float rx, float ry, float width, float height, float rotAngle, float depth) {
		return ((T (*)(GUIBaseWidget*, void*, float, float, float, float, float, float))(Il2CppBase() + 0x36A678))(this, sprite, rx, ry, width, height, rotAngle, depth);
	}
	template <typename T = void> T ShowSprite(void* sprite) {
		return ((T (*)(GUIBaseWidget*, void*))(Il2CppBase() + 0x36A6D0))(this, sprite);
	}
	template <typename T = void> T HideSprite(void* sprite) {
		return ((T (*)(GUIBaseWidget*, void*))(Il2CppBase() + 0x36A600))(this, sprite);
	}
	template <typename T = void> T SetScreenSize(float sizeX, float sizeY) {
		return ((T (*)(GUIBaseWidget*, float, float))(Il2CppBase() + 0x36A6FC))(this, sizeX, sizeY);
	}
	template <typename T = void> T PlaySound(void* audioClip) {
		return ((T (*)(GUIBaseWidget*, void*))(Il2CppBase() + 0x36A708))(this, audioClip);
	}
	template <typename T = void*> T GetLayout() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x36A818))(this);
	}
	template <typename T = void> T GetTextureCoord(void** UVLeft, void** UVTop, void** UVWidth, void** UVHeight) {
		return ((T (*)(GUIBaseWidget*, void**, void**, void**, void**))(Il2CppBase() + 0x36A820))(this, UVLeft, UVTop, UVWidth, UVHeight);
	}
	template <typename T = Il2CppRect> T GetTextureCoord_1() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x36A84C))(this);
	}
	template <typename T = int32_t> T AddMainSprite() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x369A58))(this);
	}
	template <typename T = void> T ReserveSprites(int32_t size) {
		return ((T (*)(GUIBaseWidget*, int32_t))(Il2CppBase() + 0x36A88C))(this, size);
	}
	template <typename T = void> T ReallocateSprites(int32_t newSize) {
		return ((T (*)(GUIBaseWidget*, int32_t))(Il2CppBase() + 0x36A92C))(this, newSize);
	}
	template <typename T = int32_t> T AddSprite_1(Il2CppVector2 centerSpritePos, float width, float height, float scaleWidth, float scaleHeight, float rotAngle, int32_t texU, int32_t texV, int32_t texW, int32_t texH) {
		return ((T (*)(GUIBaseWidget*, Il2CppVector2, float, float, float, float, float, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x365B6C))(this, centerSpritePos, width, height, scaleWidth, scaleHeight, rotAngle, texU, texV, texW, texH);
	}
	template <typename T = void> T HACK_Label_RemoveSprite() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x3679F8))(this);
	}
	template <typename T = void*> T GetSprite(int32_t idx) {
		return ((T (*)(GUIBaseWidget*, int32_t))(Il2CppBase() + 0x36AAA8))(this, idx);
	}
	template <typename T = void> T UpdateSpritePosAndSize(int32_t idx, float posX, float posY, float width, float height) {
		return ((T (*)(GUIBaseWidget*, int32_t, float, float, float, float))(Il2CppBase() + 0x3660C0))(this, idx, posX, posY, width, height);
	}
	template <typename T = void> T SetSpritePos(Il2CppVector2 pos) {
		return ((T (*)(GUIBaseWidget*, Il2CppVector2))(Il2CppBase() + 0x36AAF0))(this, pos);
	}
	template <typename T = void> T RegisterCallback(void* obj, int32_t clbkTypes) {
		return ((T (*)(GUIBaseWidget*, void*, int32_t))(Il2CppBase() + 0x36580C))(this, obj, clbkTypes);
	}
	template <typename T = void> T PlayAnim(void* animation, void* widget, void* finishDelegate, int32_t customIdx) {
		return ((T (*)(GUIBaseWidget*, void*, void*, void*, int32_t))(Il2CppBase() + 0x366250))(this, animation, widget, finishDelegate, customIdx);
	}
	template <typename T = void> T StopAnim(void* animation) {
		return ((T (*)(GUIBaseWidget*, void*))(Il2CppBase() + 0x3662EC))(this, animation);
	}
	template <typename T = void> T SetModify() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x368FD4))(this);
	}
	template <typename T = void> T GUIUpdate(float parentAlpha) {
		return ((T (*)(GUIBaseWidget*, float))(Il2CppBase() + 0x36AB64))(this, parentAlpha);
	}
	template <typename T = void> T GetScreenCoords(void** x, void** y, void** w, void** h) {
		return ((T (*)(GUIBaseWidget*, void**, void**, void**, void**))(Il2CppBase() + 0x36B1D8))(this, x, y, w, h);
	}
	template <typename T = Il2CppRect> T GetRectInScreenCoords() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x36B2C4))(this);
	}
	template <typename T = bool> T IsTouchSensitive() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x36B398))(this);
	}
	template <typename T = bool> T IsVisible() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x366F9C))(this);
	}
	template <typename T = void> T SetSpriteProxyFlag(int32_t idx) {
		return ((T (*)(GUIBaseWidget*, int32_t))(Il2CppBase() + 0x36B3F0))(this, idx);
	}
	template <typename T = void> T ClearSpriteProxyFlag(int32_t idx) {
		return ((T (*)(GUIBaseWidget*, int32_t))(Il2CppBase() + 0x36B43C))(this, idx);
	}
	template <typename T = void> T Show(bool v, bool recursive) {
		return ((T (*)(GUIBaseWidget*, bool, bool))(Il2CppBase() + 0x365440))(this, v, recursive);
	}
	template <typename T = void> T ShowImmediate(bool v, bool recursive) {
		return ((T (*)(GUIBaseWidget*, bool, bool))(Il2CppBase() + 0x36B488))(this, v, recursive);
	}
	template <typename T = void> T ShowSprite_1(int32_t idx, bool showFlag) {
		return ((T (*)(GUIBaseWidget*, int32_t, bool))(Il2CppBase() + 0x365FB8))(this, idx, showFlag);
	}
	template <typename T = bool> T IsMouseOver(Il2CppVector2 clickPos) {
		return ((T (*)(GUIBaseWidget*, Il2CppVector2))(Il2CppBase() + 0x365254))(this, clickPos);
	}
	template <typename T = bool> T HandleTouchEvent(void* touchPhase, bool isMouseOver) {
		return ((T (*)(GUIBaseWidget*, void*, bool))(Il2CppBase() + 0x36B6C8))(this, touchPhase, isMouseOver);
	}
	template <typename T = float> T GetParentFadeAlpha() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x36B858))(this);
	}
	template <typename T = float> T GetFadeAlpha(bool recursive) {
		return ((T (*)(GUIBaseWidget*, bool))(Il2CppBase() + 0x36B930))(this, recursive);
	}
	template <typename T = void> T PrepareParent() {
		return ((T (*)(GUIBaseWidget*))(Il2CppBase() + 0x369C70))(this);
	}
};
