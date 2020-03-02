#include <stdio.h>
#include <stdlib.h>
//

void print_value(int* x)
{
    printf("%x\n", ++ * x);
}

int main()
{
    int a = 25;
    print_value(&a);
    system("pause");
    return 0;
}