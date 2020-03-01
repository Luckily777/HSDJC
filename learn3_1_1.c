#include <stdio.h>
#include <stdlib.h>

int f(int x) {
    if (x == 0)
    {
        return 0;
    }
   
    else if (x == 1)
    {
        return 1;
    }

    else {
        return (x * f(x - 1));
    }
    return 0;
}

int main()
{
    printf("%d\n",f(5));
	system("pause");
	return 0;
}