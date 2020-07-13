#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Client {

class TlsServerHello
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerHello"));
	}

	template <typename T = uintptr_t> T& compressionMethod() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& random() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sessionId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& cipherSuite() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Update() {
		return ((T (*)(TlsServerHello*))(Il2CppBase() + 0x47E1130))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsServerHello*))(Il2CppBase() + 0x47E136C))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsServerHello*))(Il2CppBase() + 0x47E137C))(this);
	}
	template <typename T = void> T processProtocol(int16_t protocol) {
		return ((T (*)(TlsServerHello*, int16_t))(Il2CppBase() + 0x47E1590))(this, protocol);
	}

};

}
