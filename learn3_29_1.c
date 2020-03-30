#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
char c = 'A';
if ('0' <= c <= '9') printf("YES");
else printf("NO");
system("pause");
return 0;
}