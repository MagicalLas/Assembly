#include <stdio.h>
void print(char* string) {
	printf(string);
}
const char* name= "wonho";
_declspec(naked) void main(void) {
	_asm {
		mov ecx, name;

		push 0;
		popf
		
		push ecx;

		call print;

		stay:
		jmp stay;
	}
}
