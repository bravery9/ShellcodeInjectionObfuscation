#include <stdio.h>

int main() {
	unsigned char key[] = { 0x43, 0x5e, 0x3b, 0xde, 0x6a, 0x10, 0x07, 0x3f, 0x3a, 0xf9, 0xa1, 0x5a, 0xd3, 0x11, 0x03, 0xd0 };

	FILE* f;

	fopen_s(&f, "key.bin", "wb");
	fwrite(key, sizeof(key), 1, f);
	fclose(f);

	return 0;
}
