#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AiRecon
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& Positions() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MaxPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner, int32_t maxPosition, float distance) {
		return ((T (*)(AiRecon*, void*, int32_t, float))(Il2CppBase() + 0x1A9E48))(this, owner, maxPosition, distance);
	}
	template <typename T = int32_t> T get_MaxPosition() {
		return ((T (*)(AiRecon*))(Il2CppBase() + 0x1A9FB4))(this);
	}
	template <typename T = void> T set_MaxPosition(int32_t value) {
		return ((T (*)(AiRecon*, int32_t))(Il2CppBase() + 0x1A9FA4))(this, value);
	}
	template <typename T = float> T get_Distance() {
		return ((T (*)(AiRecon*))(Il2CppBase() + 0x1A9FBC))(this);
	}
	template <typename T = void> T set_Distance(float value) {
		return ((T (*)(AiRecon*, float))(Il2CppBase() + 0x1A9F9C))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AiRecon*))(Il2CppBase() + 0x1A9FC4))(this);
	}
	template <typename T = void*> T GetBestPositionInDirection(Il2CppVector3 dir, float minDistance, float minDistanceToEnemy) {
		return ((T (*)(AiRecon*, Il2CppVector3, float, float))(Il2CppBase() + 0x1AA204))(this, dir, minDistance, minDistanceToEnemy);
	}
	template <typename T = void*> T GetBestPositionInDirection_1(Il2CppVector3 dir, float minDistance, float minDistanceToEnemy, bool seeEnemy) {
		return ((T (*)(AiRecon*, Il2CppVector3, float, float, bool))(Il2CppBase() + 0x1AA568))(this, dir, minDistance, minDistanceToEnemy, seeEnemy);
	}
	template <typename T = void*> T GetNearestPositionToPos(Il2CppVector3 toPos, float minDistanceFromMe, float minDistanceToEnemy) {
		return ((T (*)(AiRecon*, Il2CppVector3, float, float))(Il2CppBase() + 0x1AA8F0))(this, toPos, minDistanceFromMe, minDistanceToEnemy);
	}
	template <typename T = void*> T GetFarestPositionToPos(Il2CppVector3 toPos, float minDistanceFromMe, float minDistanceToEnemy) {
		return ((T (*)(AiRecon*, Il2CppVector3, float, float))(Il2CppBase() + 0x1AABF4))(this, toPos, minDistanceFromMe, minDistanceToEnemy);
	}
	template <typename T = void*> T GetRandomPositionInDirection(Il2CppVector3 dir, float minDistance, float minDistanceToEnemy, float highestDot, float lowestDot, bool seeEnemy) {
		return ((T (*)(AiRecon*, Il2CppVector3, float, float, float, float, bool))(Il2CppBase() + 0x1AAEF8))(this, dir, minDistance, minDistanceToEnemy, highestDot, lowestDot, seeEnemy);
	}
};
