#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameZoneBase
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& PlayerSpawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& m_Enemies() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<void*>*> T& m_ImportantObjects() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_GameObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameZoneBase*))(Il2CppBase() + 0x335ED4))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_Enemies() {
		return ((T (*)(GameZoneBase*))(Il2CppBase() + 0x32F290))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_ImportantObjects() {
		return ((T (*)(GameZoneBase*))(Il2CppBase() + 0x3375FC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GameZoneBase*))(Il2CppBase() + 0x335FD8))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(GameZoneBase*))(Il2CppBase() + 0x337604))(this);
	}
	template <typename T = void> T AddEnemy(void* enemy) {
		return ((T (*)(GameZoneBase*, void*))(Il2CppBase() + 0x3376F8))(this, enemy);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(GameZoneBase*))(Il2CppBase() + 0x3362E8))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(GameZoneBase*))(Il2CppBase() + 0x33690C))(this);
	}
	template <typename T = void> T CleanAllEnemies() {
		return ((T (*)(GameZoneBase*))(Il2CppBase() + 0x3377D0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GameZoneBase*))(Il2CppBase() + 0x336944))(this);
	}
	template <typename T = bool> T IsEnemyInRange(Il2CppVector3 center, float radius) {
		return ((T (*)(GameZoneBase*, Il2CppVector3, float))(Il2CppBase() + 0x337928))(this, center, radius);
	}
	template <typename T = float> T GetDistanceToNearestEnemy(Il2CppVector3 center, void* ignoreAgent) {
		return ((T (*)(GameZoneBase*, Il2CppVector3, void*))(Il2CppBase() + 0x337B04))(this, center, ignoreAgent);
	}
	template <typename T = void*> T GetNearestAliveEnemy(Il2CppVector3 start, Il2CppVector3 end, float radius, void* ignoreAgent) {
		return ((T (*)(GameZoneBase*, Il2CppVector3, Il2CppVector3, float, void*))(Il2CppBase() + 0x337D2C))(this, start, end, radius, ignoreAgent);
	}
	template <typename T = void*> T GetNearestAliveEnemy_1(void* agent, void* direction, float maxRadius) {
		return ((T (*)(GameZoneBase*, void*, void*, float))(Il2CppBase() + 0x337F38))(this, agent, direction, maxRadius);
	}
	template <typename T = void> T SendFactToEnemies(void* owner, void* attacker, void* eventType, float radius, float lifetime, bool toFriends) {
		return ((T (*)(GameZoneBase*, void*, void*, void*, float, float, bool))(Il2CppBase() + 0x33813C))(this, owner, attacker, eventType, radius, lifetime, toFriends);
	}
	template <typename T = void> T KillAllEnemies(void* attacker) {
		return ((T (*)(GameZoneBase*, void*))(Il2CppBase() + 0x3384D4))(this, attacker);
	}
	template <typename T = void> T RegisterImportantObject(void* Obj) {
		return ((T (*)(GameZoneBase*, void*))(Il2CppBase() + 0x3386FC))(this, Obj);
	}
	template <typename T = void> T UnregisterImportantObject(void* Obj) {
		return ((T (*)(GameZoneBase*, void*))(Il2CppBase() + 0x33879C))(this, Obj);
	}
};
