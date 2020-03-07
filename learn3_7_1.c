#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//´íÎóµÄÁ·Ï°Ìâ

void MallocMem(char* pc)
{
    pc = (char*)malloc(100);

    return;
}

int main() {
    char* str = NULL;
    MallocMem(str);
    strcpy(str, "hello ");
    strcat(str + 2, "world");
    printf("%s", str);
    system("pause");
    return 0;
}