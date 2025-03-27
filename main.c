#include <stdio.h>
int main(int argc, char **argv) {
	if (!--argc) return 0;
	++argv;
	while (*argv) {
		fputs(*argv, stdout);
		if (*++argv) putchar(' ');
	}
	return 0;
}
