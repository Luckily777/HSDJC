#include <stdio.h>
#include <stdlib.h>
//练习题2.26.4 char的取值直接决定了其数组之中能否容纳多少的问题


int main()
{
    char a[1000] = { 0 };
    int i = 0;
    for (i = 0; i < 1000; i++)
    {
        a[i] = -1 - i;
    }
    printf("%d", strlen(a));
	system("pause");
	return 0;
}
