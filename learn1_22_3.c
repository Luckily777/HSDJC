#include <stdio.h>
#include <stdlib.h>

typedef struct object object;
struct object
{
	char data[3];
};


int main()
{


    object obj_array[3] = { { 'a', 'b', 'c' },
                    {'d', 'e', 'f'},
                     {'g', 'h', 'i'} };
    object*cur = obj_array;
    printf("%c %c\n", *(char*)((char *)(cur)+2), *(char*)(cur + 2));
	system("pause");
	return 0;
}