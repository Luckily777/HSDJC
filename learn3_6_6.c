#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
    int i, j, X = 0;
    for (i = 0; i < 2; i++)
    {
        X++;
        for (j = 0; j < 3; j++)
        {
            if (j % 2)
                continue;
            X++;
        }
        X++;
    }
    printf("X=%d\n", X);
	system("pause");
	return 0;
}