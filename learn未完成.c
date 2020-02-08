#include <stdio.h>
#include <stdlib.h>

int main(){
	char a[10] = "11";
	char b[10] = "1";
	int addbit = 0;
	int Asize = strlen(a) - 1;
	int asize = Asize + 1;
	int Bsize = strlen(b) - 1;
	int bsize = Bsize + 1;
	int Size = (Asize > Bsize ? Asize : Bsize) + 1;
	int Size1 = Size;
	int Size2 = Size;
	for (bsize; bsize < (Size + 1); bsize++)
	{
		b[bsize] = '0';
	}
	for (asize; asize < (Size + 1); asize++)
	{
		a[asize] = '0';
	}
	while ((Size1 >= 0) || (Size2 >= 0))
	{
		if (Asize<0)
		{
			a[Size1--] = '0';
		}
		else
		{
			a[Size1--] = a[Asize--];
		}
		if (Bsize < 0)
		{
			b[Size2--] = '0';
		}
		else
		{
			b[Size2--] = b[Bsize--];
		}
	}

	while (Size >= 0)
	{
		if ((addbit + a[Size] + b[Size]) == 2)
		{
			a[Size] = '0';
			addbit = 1;
		}
		else
		{
			a[Size] = addbit + a[Size] + b[Size];
			addbit = 0;
		}
		Size--;
	}
	printf("%s", a);
	system("pause");
	return 0;
}