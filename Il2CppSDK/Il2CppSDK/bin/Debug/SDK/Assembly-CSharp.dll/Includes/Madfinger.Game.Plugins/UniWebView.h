#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace Madfinger { 
	namespace Game { 
		namespace Plugins { 
			class UniWebView
			{
			public: 
				static Il2CppClass *StaticClass() {
					return *(Il2CppClass **)(Il2CppBase() + 0xD78A98);
				}
				// Fields
				template <typename T = void*> static T& OnClose() {
					return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
				}
				template <typename T = void*> static T& m_Instance() {
					return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
				}
				// Methods
				template <typename T = void> T _ctor() {
					return ((T (*)(UniWebView*))(Il2CppBase() + 0x3E0E48))(this);
				}
				template <typename T = void> static T _cctor() {
					return ((T (*)(void *))(Il2CppBase() + 0x3E0E50))(0);
				}
				template <typename T = void> static T Open(Il2CppString* url, void* rectTransform, bool showToolbar) {
					return ((T (*)(void *, Il2CppString*, void*, bool))(Il2CppBase() + 0x3E0E54))(0, url, rectTransform, showToolbar);
				}
				template <typename T = void> static T Open_1(Il2CppString* url, Il2CppRect frame, bool showToolbar) {
					return ((T (*)(void *, Il2CppString*, Il2CppRect, bool))(Il2CppBase() + 0x3E140C))(0, url, frame, showToolbar);
				}
				template <typename T = void> static T Close() {
					return ((T (*)(void *))(Il2CppBase() + 0x3E1528))(0);
				}
				template <typename T = void> static T DelayedInitialize() {
					return ((T (*)(void *))(Il2CppBase() + 0x3E1048))(0);
				}
				template <typename T = void> static T Load(Il2CppString* url, bool showToolbar) {
					return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x3E1340))(0, url, showToolbar);
				}
			};
		}
	}
}
