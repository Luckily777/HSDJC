#include <stdio.h>
#include <stdlib.h>
//¡∑œ∞Ã‚

int main() {
	char p1[15] = "abcd", * p2 = "ABCD", str[50] = "xyz";
	strcpy(str + 2, strcat(p1 + 2, p2 + 1));
	printf("%s", str);
	system("pause");
	return 0;
}