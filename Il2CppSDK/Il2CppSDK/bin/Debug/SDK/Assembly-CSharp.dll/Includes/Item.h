#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Item
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78CC8);
	}
	// Fields
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& DataForSpawnedObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& SpawnedGameObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppQuaternion> static T& Temp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& Settings() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Timer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner, void* itemID, int32_t count) {
		return ((T (*)(Item*, void*, void*, int32_t))(Il2CppBase() + 0x3CD05C))(this, owner, itemID, count);
	}
	template <typename T = void*> T get_Settings() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3ABEC0))(this);
	}
	template <typename T = void> T set_Settings(void* value) {
		return ((T (*)(Item*, void*))(Il2CppBase() + 0x3CD704))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3ABFF8))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(Item*, int32_t))(Il2CppBase() + 0x3CD714))(this, value);
	}
	template <typename T = float> T get_Timer() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3CD71C))(this);
	}
	template <typename T = void> T set_Timer(float value) {
		return ((T (*)(Item*, float))(Il2CppBase() + 0x3CD70C))(this, value);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3CD724))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(Item*, bool))(Il2CppBase() + 0x3CD72C))(this, value);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3CD734))(this);
	}
	template <typename T = bool> T IsAvailableForUse() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3AC000))(this);
	}
	template <typename T = void> T Use(Il2CppVector3 pos, Il2CppVector3 dir) {
		return ((T (*)(Item*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3CDD14))(this, pos, dir);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3CEC48))(this);
	}
	template <typename T = void> T PlaceObject(Il2CppVector3 pos, Il2CppVector3 dir) {
		return ((T (*)(Item*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3CE40C))(this, pos, dir);
	}
	template <typename T = bool> T IsValidForPlacement(void* hit) {
		return ((T (*)(Item*, void*))(Il2CppBase() + 0x3CED64))(this, hit);
	}
	template <typename T = void> T AddToHand(void* transform) {
		return ((T (*)(Item*, void*))(Il2CppBase() + 0x3CEF90))(this, transform);
	}
	template <typename T = void> T RemoveFromHand() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3CF104))(this);
	}
	template <typename T = void> T ThrowObject(Il2CppVector3 pos, Il2CppVector3 dir) {
		return ((T (*)(Item*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3CE0F8))(this, pos, dir);
	}
	template <typename T = void> T SloMotion() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3CEA9C))(this);
	}
	template <typename T = void> T ReviveAndKill() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3CF144))(this);
	}
	template <typename T = void*> T _ReviveAndKill() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3CF294))(this);
	}
	template <typename T = void> T Heal() {
		return ((T (*)(Item*))(Il2CppBase() + 0x3CE950))(this);
	}
	template <typename T = int32_t> T ModifierMoney(int32_t money) {
		return ((T (*)(Item*, int32_t))(Il2CppBase() + 0x3CF340))(this, money);
	}
	template <typename T = int32_t> T ModifierExperience(int32_t exp) {
		return ((T (*)(Item*, int32_t))(Il2CppBase() + 0x3CF348))(this, exp);
	}
	template <typename T = float> T ModifierDamage(float damage) {
		return ((T (*)(Item*, float))(Il2CppBase() + 0x3CF424))(this, damage);
	}
	template <typename T = float> T ModifierSpeed(float speed) {
		return ((T (*)(Item*, float))(Il2CppBase() + 0x3CF454))(this, speed);
	}
};
