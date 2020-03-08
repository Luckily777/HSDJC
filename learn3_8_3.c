#include <stdio.h>
#include <stdlib.h>
//¡∑œ∞Ã‚

int main() {
	int x = 1, a = 0, b = 0;
	switch (x)
	{
	case 0:  b++;
	case 1:  a++;
	case 2:  a++; b++;
	}
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}