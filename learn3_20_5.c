#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

int fun(int  x[], int  k)
{
    if (k == 0) return (x[0]);
    return  x[0] + fun(x + 1, k - 1);
}

int main() {
    //char* s = "12134";
    //int k = 0, a = 0;
    //while (s[k + 1])
    //{
    //    k++;
    //    if (k % 2 == 0)
    //    {
    //        a = a + (s[k] - '0' + 1);
    //        continue;
    //    }
    //    a = a + (s[k] - '0');
    //}
    //printf("k=%d a=%d\n", k, a);


    //int  x[] = { 1,2,3,4,5 };
    //printf("%d\n", fun(x, 3));
    
    //3.
    //int a = 666, b = 888;
    //printf("%d\n", a, b);
    
    //4.
    char s[] = "abcdefgh", * p = s;
    p += 3;
    printf("%d\n", strlen(strcpy(p, "ABCD")));
    system("pause");
    return 0;
}