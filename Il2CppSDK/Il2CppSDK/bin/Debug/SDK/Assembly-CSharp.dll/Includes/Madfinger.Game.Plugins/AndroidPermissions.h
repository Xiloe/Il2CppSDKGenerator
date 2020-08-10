#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace Madfinger { 
	namespace Game { 
		namespace Plugins { 
			class AndroidPermissions
			{
			public: 
				static Il2CppClass *StaticClass() {
					return *(Il2CppClass **)(Il2CppBase() + 0xD793A0);
				}
				// Fields
				template <typename T = bool> static T& LastRequestState() {
					return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
				}
				template <typename T = bool> static T& Pending() {
					return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
				}
				template <typename T = Il2CppArray<void*>*> static T& OBB_PERMISSIONS() {
					return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
				}
				// Methods
				template <typename T = void> T _ctor() {
					return ((T (*)(AndroidPermissions*))(Il2CppBase() + 0x3DF110))(this);
				}
				template <typename T = void> static T _cctor() {
					return ((T (*)(void *))(Il2CppBase() + 0x3DF118))(0);
				}
				template <typename T = void*> static T RequestObbFilePermissions() {
					return ((T (*)(void *))(Il2CppBase() + 0x3DF2E4))(0);
				}
				template <typename T = void> static T RequestPermissionResponse(Il2CppArray<void*>* states) {
					return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x3DF378))(0, states);
				}
				template <typename T = void> static T TryPermissionRequestAgain(bool state) {
					return ((T (*)(void *, bool))(Il2CppBase() + 0x3DF6CC))(0, state);
				}
				template <typename T = bool> static T IsObbFileAccessible() {
					return ((T (*)(void *))(Il2CppBase() + 0x3DF890))(0);
				}
				template <typename T = bool> static T IsFileReadable(Il2CppString* filePath) {
					return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3DFCA4))(0, filePath);
				}
				template <typename T = bool> static T IsDirectoryWritable(Il2CppString* dirPath) {
					return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3DFF20))(0, dirPath);
				}
				template <typename T = void*> static T GetWorstState(Il2CppArray<void*>* states) {
					return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x3DF64C))(0, states);
				}
			};
		}
	}
}
