#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Sprite
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7980C);
	}
	// Fields
	template <typename T = float> T& m_width() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_height() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& m_lowerLeftUV() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& m_UVDimensions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_client() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_manager() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_billboarded() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_hidden___DoNotAccessExternally() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = Il2CppArray<void*>*> T& meshVerts() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<void*>*> T& UVs() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& clientTransform() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& offset() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppColor> T& color() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& v1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& v2() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& v3() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& v4() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& mv1() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& mv2() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& mv3() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& mv4() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& uv1() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& uv2() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& uv3() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& uv4() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& cv1() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& cv2() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& cv3() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& cv4() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = void*> T& animations() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = void*> T& curAnim() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = void*> T& animCompleteDelegate() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> T& dummyGO() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x257B14))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x257E3C))(this);
	}
	template <typename T = void*> T get_manager() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x257E44))(this);
	}
	template <typename T = void> T set_manager(void* value) {
		return ((T (*)(Sprite*, void*))(Il2CppBase() + 0x257E4C))(this, value);
	}
	template <typename T = void*> T get_client() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x257E54))(this);
	}
	template <typename T = void> T set_client(void* value) {
		return ((T (*)(Sprite*, void*))(Il2CppBase() + 0x257E5C))(this, value);
	}
	template <typename T = Il2CppVector2> T get_lowerLeftUV() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x257EF4))(this);
	}
	template <typename T = void> T set_lowerLeftUV(Il2CppVector2 value) {
		return ((T (*)(Sprite*, Il2CppVector2))(Il2CppBase() + 0x257F08))(this, value);
	}
	template <typename T = Il2CppVector2> T get_uvDimensions() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x258138))(this);
	}
	template <typename T = void> T set_uvDimensions(Il2CppVector2 value) {
		return ((T (*)(Sprite*, Il2CppVector2))(Il2CppBase() + 0x25814C))(this, value);
	}
	template <typename T = float> T get_width() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x258184))(this);
	}
	template <typename T = float> T get_height() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x25818C))(this);
	}
	template <typename T = bool> T get_billboarded() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x258194))(this);
	}
	template <typename T = void> T set_billboarded(bool value) {
		return ((T (*)(Sprite*, bool))(Il2CppBase() + 0x25819C))(this, value);
	}
	template <typename T = bool> T get_hidden() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x2581A4))(this);
	}
	template <typename T = void> T set_hidden(bool value) {
		return ((T (*)(Sprite*, bool))(Il2CppBase() + 0x2581AC))(this, value);
	}
	template <typename T = void> T SetWidthHeightXY(float width, float height) {
		return ((T (*)(Sprite*, float, float))(Il2CppBase() + 0x258480))(this, width, height);
	}
	template <typename T = void> T SetSizeXY(float width, float height) {
		return ((T (*)(Sprite*, float, float))(Il2CppBase() + 0x258770))(this, width, height);
	}
	template <typename T = void> T SetSizeXZ(float width, float height) {
		return ((T (*)(Sprite*, float, float))(Il2CppBase() + 0x258984))(this, width, height);
	}
	template <typename T = void> T SetSizeYZ(float width, float height) {
		return ((T (*)(Sprite*, float, float))(Il2CppBase() + 0x258B94))(this, width, height);
	}
	template <typename T = void> T SetBuffers(Il2CppArray<void*>* v, Il2CppArray<void*>* uv) {
		return ((T (*)(Sprite*, Il2CppArray<void*>*, Il2CppArray<void*>*))(Il2CppBase() + 0x258DA4))(this, v, uv);
	}
	template <typename T = void> T Transform() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x2585AC))(this);
	}
	template <typename T = void> T TransformToGround() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x258DBC))(this);
	}
	template <typename T = void> T TransformBillboarded(void* t) {
		return ((T (*)(Sprite*, void*))(Il2CppBase() + 0x25910C))(this, t);
	}
	template <typename T = void> T SetColor(Il2CppColor c) {
		return ((T (*)(Sprite*, Il2CppColor))(Il2CppBase() + 0x259378))(this, c);
	}
	template <typename T = void> T SetAnimCompleteDelegate(void* del) {
		return ((T (*)(Sprite*, void*))(Il2CppBase() + 0x2594B8))(this, del);
	}
	template <typename T = void> T AddAnimation(void* anim) {
		return ((T (*)(Sprite*, void*))(Il2CppBase() + 0x2594C0))(this, anim);
	}
	template <typename T = void> T StepAnim() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x259520))(this);
	}
	template <typename T = void> T PlayAnim(void* anim) {
		return ((T (*)(Sprite*, void*))(Il2CppBase() + 0x25976C))(this, anim);
	}
	template <typename T = void> T PlayAnim_1(Il2CppString* name) {
		return ((T (*)(Sprite*, Il2CppString*))(Il2CppBase() + 0x259880))(this, name);
	}
	template <typename T = void> T PlayAnimInReverse(void* anim) {
		return ((T (*)(Sprite*, void*))(Il2CppBase() + 0x259AAC))(this, anim);
	}
	template <typename T = void> T PlayAnimInReverse_1(Il2CppString* name) {
		return ((T (*)(Sprite*, Il2CppString*))(Il2CppBase() + 0x259BEC))(this, name);
	}
	template <typename T = void> T PauseAnim() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x259EAC))(this);
	}
	template <typename T = void> T UnpauseAnim() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x259F34))(this);
	}
};
