#include <stdio.h>
#include <stdlib.h>
//��ϰ��2.26.4 char��ȡֱֵ�Ӿ�����������֮���ܷ����ɶ��ٵ�����


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
