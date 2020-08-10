#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IScreenOwner
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD788FC);
	}
	// Methods
	template <typename T = void> T DoCommand(Il2CppString* inCommand) {
		return ((T (*)(IScreenOwner*, Il2CppString*))(Il2CppBase() + 0x0))(this, inCommand);
	}
	template <typename T = void> T ShowScreen(Il2CppString* inScreenName, bool inClearStack) {
		return ((T (*)(IScreenOwner*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, inScreenName, inClearStack);
	}
	template <typename T = void> T ShowPopup(Il2CppString* inPopupName, Il2CppString* inCaption, Il2CppString* inText, void* inHandler) {
		return ((T (*)(IScreenOwner*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, inPopupName, inCaption, inText, inHandler);
	}
	template <typename T = void> T Back() {
		return ((T (*)(IScreenOwner*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(IScreenOwner*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsThisScreenTop(void* inScreen) {
		return ((T (*)(IScreenOwner*, void*))(Il2CppBase() + 0x0))(this, inScreen);
	}
};
