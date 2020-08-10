#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class Animation
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD78A18);
		}
		// Methods
		template <typename T = void*> T get_clip() {
			return ((T (*)(Animation*))(Il2CppBase() + 0x8EA0A0))(this);
		}
		template <typename T = void> T set_clip(void* value) {
			return ((T (*)(Animation*, void*))(Il2CppBase() + 0x8EA138))(this, value);
		}
		template <typename T = void> T set_playAutomatically(bool value) {
			return ((T (*)(Animation*, bool))(Il2CppBase() + 0x8EA1D8))(this, value);
		}
		template <typename T = void*> T get_wrapMode() {
			return ((T (*)(Animation*))(Il2CppBase() + 0x8EA278))(this);
		}
		template <typename T = void> T set_wrapMode(void* value) {
			return ((T (*)(Animation*, void*))(Il2CppBase() + 0x8EA310))(this, value);
		}
		template <typename T = void> T Stop() {
			return ((T (*)(Animation*))(Il2CppBase() + 0x8EA3B0))(this);
		}
		template <typename T = void> static T INTERNAL_CALL_Stop(void* self) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8EA3B8))(0, self);
		}
		template <typename T = void> T Stop_1(Il2CppString* name) {
			return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x8EA450))(this, name);
		}
		template <typename T = void> T Internal_StopByName(Il2CppString* name) {
			return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x8EA454))(this, name);
		}
		template <typename T = void> T Rewind() {
			return ((T (*)(Animation*))(Il2CppBase() + 0x8EA4F4))(this);
		}
		template <typename T = void> static T INTERNAL_CALL_Rewind(void* self) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8EA4FC))(0, self);
		}
		template <typename T = void> T Sample() {
			return ((T (*)(Animation*))(Il2CppBase() + 0x8EA594))(this);
		}
		template <typename T = void> static T INTERNAL_CALL_Sample(void* self) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8EA59C))(0, self);
		}
		template <typename T = bool> T get_isPlaying() {
			return ((T (*)(Animation*))(Il2CppBase() + 0x8EA634))(this);
		}
		template <typename T = bool> T IsPlaying(Il2CppString* name) {
			return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x8EA6CC))(this, name);
		}
		template <typename T = void*> T get_Item(Il2CppString* name) {
			return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x8EA76C))(this, name);
		}
		template <typename T = bool> T Play() {
			return ((T (*)(Animation*))(Il2CppBase() + 0x8EA810))(this);
		}
		template <typename T = bool> T Play_1(void* mode) {
			return ((T (*)(Animation*, void*))(Il2CppBase() + 0x8EA818))(this, mode);
		}
		template <typename T = bool> T Play_2(Il2CppString* animation, void* mode) {
			return ((T (*)(Animation*, Il2CppString*, void*))(Il2CppBase() + 0x8EA8BC))(this, animation, mode);
		}
		template <typename T = bool> T Play_3(Il2CppString* animation) {
			return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x8EA964))(this, animation);
		}
		template <typename T = void> T CrossFade(Il2CppString* animation, float fadeLength, void* mode) {
			return ((T (*)(Animation*, Il2CppString*, float, void*))(Il2CppBase() + 0x8EA96C))(this, animation, fadeLength, mode);
		}
		template <typename T = void> T CrossFade_1(Il2CppString* animation, float fadeLength) {
			return ((T (*)(Animation*, Il2CppString*, float))(Il2CppBase() + 0x8EAA1C))(this, animation, fadeLength);
		}
		template <typename T = void> T Blend(Il2CppString* animation, float targetWeight, float fadeLength) {
			return ((T (*)(Animation*, Il2CppString*, float, float))(Il2CppBase() + 0x8EAA38))(this, animation, targetWeight, fadeLength);
		}
		template <typename T = void*> T CrossFadeQueued(Il2CppString* animation, float fadeLength, void* queue, void* mode) {
			return ((T (*)(Animation*, Il2CppString*, float, void*, void*))(Il2CppBase() + 0x8EAAE8))(this, animation, fadeLength, queue, mode);
		}
		template <typename T = void*> T CrossFadeQueued_1(Il2CppString* animation, float fadeLength, void* queue) {
			return ((T (*)(Animation*, Il2CppString*, float, void*))(Il2CppBase() + 0x8EAB98))(this, animation, fadeLength, queue);
		}
		template <typename T = void*> T PlayQueued(Il2CppString* animation, void* queue, void* mode) {
			return ((T (*)(Animation*, Il2CppString*, void*, void*))(Il2CppBase() + 0x8EABB8))(this, animation, queue, mode);
		}
		template <typename T = void*> T PlayQueued_1(Il2CppString* animation) {
			return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x8EAC68))(this, animation);
		}
		template <typename T = void> T AddClip(void* clip, Il2CppString* newName) {
			return ((T (*)(Animation*, void*, Il2CppString*))(Il2CppBase() + 0x8EAC88))(this, clip, newName);
		}
		template <typename T = void> T AddClip_1(void* clip, Il2CppString* newName, int32_t firstFrame, int32_t lastFrame, bool addLoopFrame) {
			return ((T (*)(Animation*, void*, Il2CppString*, int32_t, int32_t, bool))(Il2CppBase() + 0x8EACD4))(this, clip, newName, firstFrame, lastFrame, addLoopFrame);
		}
		template <typename T = void> T AddClip_2(void* clip, Il2CppString* newName, int32_t firstFrame, int32_t lastFrame) {
			return ((T (*)(Animation*, void*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x8EACB0))(this, clip, newName, firstFrame, lastFrame);
		}
		template <typename T = void> T RemoveClip(void* clip) {
			return ((T (*)(Animation*, void*))(Il2CppBase() + 0x8EAD9C))(this, clip);
		}
		template <typename T = int32_t> T GetClipCount() {
			return ((T (*)(Animation*))(Il2CppBase() + 0x8EAE3C))(this);
		}
		template <typename T = bool> T PlayDefaultAnimation(void* mode) {
			return ((T (*)(Animation*, void*))(Il2CppBase() + 0x8EA81C))(this, mode);
		}
		template <typename T = void> T SyncLayer(int32_t layer) {
			return ((T (*)(Animation*, int32_t))(Il2CppBase() + 0x8EAED4))(this, layer);
		}
		template <typename T = void> static T INTERNAL_CALL_SyncLayer(void* self, int32_t layer) {
			return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x8EAEE0))(0, self, layer);
		}
		template <typename T = void*> T GetEnumerator() {
			return ((T (*)(Animation*))(Il2CppBase() + 0x8EAF80))(this);
		}
		template <typename T = void*> T GetState(Il2CppString* name) {
			return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x8EA770))(this, name);
		}
		template <typename T = void*> T GetStateAtIndex(int32_t index) {
			return ((T (*)(Animation*, int32_t))(Il2CppBase() + 0x8EB04C))(this, index);
		}
		template <typename T = int32_t> T GetStateCount() {
			return ((T (*)(Animation*))(Il2CppBase() + 0x8EB0EC))(this);
		}
		template <typename T = void*> T GetClip(Il2CppString* name) {
			return ((T (*)(Animation*, Il2CppString*))(Il2CppBase() + 0x8EB184))(this, name);
		}
	};
}
