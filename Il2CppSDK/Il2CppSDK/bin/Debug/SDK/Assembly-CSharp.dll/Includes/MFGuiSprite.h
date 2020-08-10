#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MFGuiSprite
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7943C);
	}
	// Fields
	template <typename T = float> T& m_width() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_height() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_depth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_lowerLeftUV() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& m_UVDimensions() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_HasClient() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_GuiRenderer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_hidden___DoNotAccessExternally() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<void*>*> T& meshVerts() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& matrix() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& offset() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppColor> T& m_Color() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	// Methods
	template <typename T = void> T _ctor(void* inRenderer, int32_t inIndex) {
		return ((T (*)(MFGuiSprite*, void*, int32_t))(Il2CppBase() + 0x3F2D4C))(this, inRenderer, inIndex);
	}
	template <typename T = int32_t> T get_index() {
		return ((T (*)(MFGuiSprite*))(Il2CppBase() + 0x3F33A4))(this);
	}
	template <typename T = void> T set_index(int32_t value) {
		return ((T (*)(MFGuiSprite*, int32_t))(Il2CppBase() + 0x3F4884))(this, value);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(MFGuiSprite*))(Il2CppBase() + 0x3F488C))(this);
	}
	template <typename T = bool> T get_client() {
		return ((T (*)(MFGuiSprite*))(Il2CppBase() + 0x3F3EA4))(this);
	}
	template <typename T = void> T set_client(bool value) {
		return ((T (*)(MFGuiSprite*, bool))(Il2CppBase() + 0x3F33AC))(this, value);
	}
	template <typename T = Il2CppVector2> T get_lowerLeftUV() {
		return ((T (*)(MFGuiSprite*))(Il2CppBase() + 0x3F41B8))(this);
	}
	template <typename T = void> T set_lowerLeftUV(Il2CppVector2 value) {
		return ((T (*)(MFGuiSprite*, Il2CppVector2))(Il2CppBase() + 0x3F33B4))(this, value);
	}
	template <typename T = Il2CppVector2> T get_uvDimensions() {
		return ((T (*)(MFGuiSprite*))(Il2CppBase() + 0x3F41CC))(this);
	}
	template <typename T = void> T set_uvDimensions(Il2CppVector2 value) {
		return ((T (*)(MFGuiSprite*, Il2CppVector2))(Il2CppBase() + 0x3F33EC))(this, value);
	}
	template <typename T = float> T get_width() {
		return ((T (*)(MFGuiSprite*))(Il2CppBase() + 0x3F4870))(this);
	}
	template <typename T = float> T get_height() {
		return ((T (*)(MFGuiSprite*))(Il2CppBase() + 0x3F4878))(this);
	}
	template <typename T = bool> T get_hidden() {
		return ((T (*)(MFGuiSprite*))(Il2CppBase() + 0x3F489C))(this);
	}
	template <typename T = void> T set_hidden(bool value) {
		return ((T (*)(MFGuiSprite*, bool))(Il2CppBase() + 0x3F3E48))(this, value);
	}
	template <typename T = void> T SetSizeXY(float width, float height, float depth) {
		return ((T (*)(MFGuiSprite*, float, float, float))(Il2CppBase() + 0x3F3424))(this, width, height, depth);
	}
	template <typename T = void> T SetSizeXZ(float width, float height, float depth) {
		return ((T (*)(MFGuiSprite*, float, float, float))(Il2CppBase() + 0x3F3694))(this, width, height, depth);
	}
	template <typename T = void> T SetSizeYZ(float width, float height, float depth) {
		return ((T (*)(MFGuiSprite*, float, float, float))(Il2CppBase() + 0x3F3900))(this, width, height, depth);
	}
	template <typename T = void> T SetBuffers(Il2CppArray<void*>* v, Il2CppArray<void*>* uv) {
		return ((T (*)(MFGuiSprite*, Il2CppArray<void*>*, Il2CppArray<void*>*))(Il2CppBase() + 0x3F2DD4))(this, v, uv);
	}
	template <typename T = void> T Transform(Il2CppVector3 v1, Il2CppVector3 v2, Il2CppVector3 v3, Il2CppVector3 v4) {
		return ((T (*)(MFGuiSprite*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3F48A4))(this, v1, v2, v3, v4);
	}
	template <typename T = void> T UpdateVertices(void* inPlaen) {
		return ((T (*)(MFGuiSprite*, void*))(Il2CppBase() + 0x3F3EAC))(this, inPlaen);
	}
	template <typename T = void> T SetColor(Il2CppColor c) {
		return ((T (*)(MFGuiSprite*, Il2CppColor))(Il2CppBase() + 0x3F2DDC))(this, c);
	}
	template <typename T = void> T SetAlpha(float alpha) {
		return ((T (*)(MFGuiSprite*, float))(Il2CppBase() + 0x3F0B4C))(this, alpha);
	}
};
