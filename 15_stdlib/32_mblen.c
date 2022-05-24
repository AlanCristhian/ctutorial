/* The mblen() function returns the size (in bytes) of the multibyte character
   whose first byte is to by str and examining at most n bytes. */


#include <stdio.h>
#include <stdlib.h>


void printBuffer(char* str, size_t n) {
	int length;
	wchar_t dest;

	mblen(NULL, 0);         // reset mblen
	mbtowc(NULL, NULL, 0);  // reset mbtowc

	while (n > 0) {
		length = mblen(str, n);
		if (length < 1)
			break;
		mbtowc(&dest, str, length);
		printf("[%lc]", dest);
		str = str + length;
		n = n - length;
	}
}


void main() {
	char str[] = "Hello World";
	printBuffer(str, sizeof(str));
}