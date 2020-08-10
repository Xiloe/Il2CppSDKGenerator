#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace BlowFishCS { 
	class BlowFish
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0x0);
		}
		// Fields
		template <typename T = void*> T& randomSource() {
			return *(T*)((uintptr_t)this + 0x8);
		}
		template <typename T = Il2CppArray<void*>*> T& bf_s0() {
			return *(T*)((uintptr_t)this + 0xC);
		}
		template <typename T = Il2CppArray<void*>*> T& bf_s1() {
			return *(T*)((uintptr_t)this + 0x10);
		}
		template <typename T = Il2CppArray<void*>*> T& bf_s2() {
			return *(T*)((uintptr_t)this + 0x14);
		}
		template <typename T = Il2CppArray<void*>*> T& bf_s3() {
			return *(T*)((uintptr_t)this + 0x18);
		}
		template <typename T = Il2CppArray<void*>*> T& bf_P() {
			return *(T*)((uintptr_t)this + 0x1C);
		}
		template <typename T = Il2CppArray<void*>*> T& key() {
			return *(T*)((uintptr_t)this + 0x20);
		}
		template <typename T = uint32_t> T& xl_par() {
			return *(T*)((uintptr_t)this + 0x24);
		}
		template <typename T = uint32_t> T& xr_par() {
			return *(T*)((uintptr_t)this + 0x28);
		}
		template <typename T = Il2CppArray<void*>*> T& InitVector() {
			return *(T*)((uintptr_t)this + 0x2C);
		}
		template <typename T = bool> T& IVSet() {
			return *(T*)((uintptr_t)this + 0x30);
		}
		template <typename T = bool> T& nonStandardMethod() {
			return *(T*)((uintptr_t)this + 0x31);
		}
		// Methods
		template <typename T = void> T _ctor(Il2CppString* hexKey) {
			return ((T (*)(BlowFish*, Il2CppString*))(Il2CppBase() + 0x1DF6DC))(this, hexKey);
		}
		template <typename T = void> T _ctor_1(Il2CppArray<void*>* cipherKey) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1DFECC))(this, cipherKey);
		}
		template <typename T = Il2CppString*> T Encrypt_CBC(Il2CppString* pt) {
			return ((T (*)(BlowFish*, Il2CppString*))(Il2CppBase() + 0x1DFF78))(this, pt);
		}
		template <typename T = Il2CppString*> T Decrypt_CBC(Il2CppString* ct) {
			return ((T (*)(BlowFish*, Il2CppString*))(Il2CppBase() + 0x1E02F4))(this, ct);
		}
		template <typename T = Il2CppArray<void*>*> T Decrypt_CBC_1(Il2CppArray<void*>* ct) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E05A0))(this, ct);
		}
		template <typename T = Il2CppArray<void*>*> T Encrypt_CBC_1(Il2CppArray<void*>* pt) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E02EC))(this, pt);
		}
		template <typename T = Il2CppString*> T Encrypt_ECB(Il2CppString* pt) {
			return ((T (*)(BlowFish*, Il2CppString*))(Il2CppBase() + 0x1E0914))(this, pt);
		}
		template <typename T = Il2CppString*> T Decrypt_ECB(Il2CppString* ct) {
			return ((T (*)(BlowFish*, Il2CppString*))(Il2CppBase() + 0x1E0A24))(this, ct);
		}
		template <typename T = Il2CppArray<void*>*> T Encrypt_ECB_1(Il2CppArray<void*>* pt) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E0A1C))(this, pt);
		}
		template <typename T = Il2CppArray<void*>*> T Decrypt_ECB_1(Il2CppArray<void*>* ct) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E0BB0))(this, ct);
		}
		template <typename T = Il2CppArray<void*>*> T get_IV() {
			return ((T (*)(BlowFish*))(Il2CppBase() + 0x1E0D74))(this);
		}
		template <typename T = void> T set_IV(Il2CppArray<void*>* value) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E04C4))(this, value);
		}
		template <typename T = bool> T get_NonStandard() {
			return ((T (*)(BlowFish*))(Il2CppBase() + 0x1E0D7C))(this);
		}
		template <typename T = void> T set_NonStandard(bool value) {
			return ((T (*)(BlowFish*, bool))(Il2CppBase() + 0x1E0D84))(this, value);
		}
		template <typename T = Il2CppArray<void*>*> T SetRandomIV() {
			return ((T (*)(BlowFish*))(Il2CppBase() + 0x1E00F0))(this);
		}
		template <typename T = void> T SetupKey(Il2CppArray<void*>* cipherKey) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1DF95C))(this, cipherKey);
		}
		template <typename T = Il2CppArray<void*>*> T Crypt_ECB(Il2CppArray<void*>* text, bool decrypt) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*, bool))(Il2CppBase() + 0x1E0BB8))(this, text, decrypt);
		}
		template <typename T = Il2CppArray<void*>*> T Crypt_CBC(Il2CppArray<void*>* text, bool decrypt) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*, bool))(Il2CppBase() + 0x1E05A8))(this, text, decrypt);
		}
		template <typename T = void> T XorBlock(Il2CppArray<void*>* block, Il2CppArray<void*>* iv) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E1240))(this, block, iv);
		}
		template <typename T = void> T BlockEncrypt(Il2CppArray<void*>* block) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E1210))(this, block);
		}
		template <typename T = void> T BlockDecrypt(Il2CppArray<void*>* block) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E11E0))(this, block);
		}
		template <typename T = void> T SetBlock(Il2CppArray<void*>* block) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E12DC))(this, block);
		}
		template <typename T = void> T GetBlock(Il2CppArray<void*>* block) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E14D4))(this, block);
		}
		template <typename T = void> T encipher() {
			return ((T (*)(BlowFish*))(Il2CppBase() + 0x1E1110))(this);
		}
		template <typename T = void> T decipher() {
			return ((T (*)(BlowFish*))(Il2CppBase() + 0x1E16C0))(this);
		}
		template <typename T = uint32_t> T round(uint32_t a, uint32_t B, uint32_t n) {
			return ((T (*)(BlowFish*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x1E178C))(this, a, B, n);
		}
		template <typename T = Il2CppArray<void*>*> T SetupP() {
			return ((T (*)(BlowFish*))(Il2CppBase() + 0x1E0D8C))(this);
		}
		template <typename T = Il2CppArray<void*>*> T SetupS0() {
			return ((T (*)(BlowFish*))(Il2CppBase() + 0x1E0E40))(this);
		}
		template <typename T = Il2CppArray<void*>*> T SetupS1() {
			return ((T (*)(BlowFish*))(Il2CppBase() + 0x1E0EF4))(this);
		}
		template <typename T = Il2CppArray<void*>*> T SetupS2() {
			return ((T (*)(BlowFish*))(Il2CppBase() + 0x1E0FA8))(this);
		}
		template <typename T = Il2CppArray<void*>*> T SetupS3() {
			return ((T (*)(BlowFish*))(Il2CppBase() + 0x1E105C))(this);
		}
		template <typename T = unsigned char> T wordByte0(uint32_t w) {
			return ((T (*)(BlowFish*, uint32_t))(Il2CppBase() + 0x1E18C4))(this, w);
		}
		template <typename T = unsigned char> T wordByte1(uint32_t w) {
			return ((T (*)(BlowFish*, uint32_t))(Il2CppBase() + 0x1E18CC))(this, w);
		}
		template <typename T = unsigned char> T wordByte2(uint32_t w) {
			return ((T (*)(BlowFish*, uint32_t))(Il2CppBase() + 0x1E18D4))(this, w);
		}
		template <typename T = unsigned char> T wordByte3(uint32_t w) {
			return ((T (*)(BlowFish*, uint32_t))(Il2CppBase() + 0x1E18DC))(this, w);
		}
		template <typename T = Il2CppString*> T ByteToHex(Il2CppArray<void*>* bytes) {
			return ((T (*)(BlowFish*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E01B4))(this, bytes);
		}
		template <typename T = Il2CppArray<void*>*> T HexToByte(Il2CppString* hex) {
			return ((T (*)(BlowFish*, Il2CppString*))(Il2CppBase() + 0x1DF794))(this, hex);
		}
		template <typename T = unsigned char> T GetHex(char x) {
			return ((T (*)(BlowFish*, char))(Il2CppBase() + 0x1E18E4))(this, x);
		}
	};
}
