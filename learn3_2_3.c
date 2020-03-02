#include <stdio.h>
#include <stdlib.h>
//

int main()
{
    int total = 0;
    for (int i = 0, j = 5; total < 10 || j > 3; ++i, --j) {
        total += (i + j);
    }
    printf("%d\n", total);
    system("pause");
    return 0;
}