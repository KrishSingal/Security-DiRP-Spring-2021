#include <stdio.h>
#include <stdlib.h>

void win() {
	system("/bin/cat /etc/passwd");
}

void main() {
	char buf[8];
	gets(buf);
}
