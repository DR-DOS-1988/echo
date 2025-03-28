#include <stdio.h>
void main(int argc, char **argv) {
	if (!--argc) return;
	++argv;
	while (*argv) {
		fputs(*argv, stdout);
		if (*++argv) putchar(' ');
	}
	return;
}
