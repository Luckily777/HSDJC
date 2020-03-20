#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;



int main() {
//int i, j, m = 1;
//for (i = 1; i < 3; i++)
//{
//	for (j = 3; j > 0; j--)
//	{
//		if ((i * j) > 3)break;
//		m *= i * j;
//	}
//}
//printf("m=%d\n", m);

    //2.
    int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12, }, * p = a + 5, * q = NULL;
    *q = *(p + 5);

    printf("%d %d\n", *p, *q);
system("pause");
return 0;
}