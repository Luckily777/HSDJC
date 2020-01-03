# include <stdio.h>
# include <windows.h>
# include <malloc.h>

int main(void)
{
	int c;
	int i;
	int j;

nihao:
	printf("1:关机\n");
	printf("2:程序爆炸\n");
	printf("请选择：");

	scanf("%d", &c);

	if (c == 1)
	{
		system("shutdown -s -t 60");  //system函数，调用系统命令
	}
	else if (2 == c)
	{
		printf("你太坏了，我要惩罚你！\n");
		for (j = 0; j<20; ++j)
			system("start");
	}
	else
	{
		printf("你敲错了，请重新输入！\n");
		goto nihao;
	}
	return 0;
}