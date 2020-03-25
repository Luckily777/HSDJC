#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
using namespace std;

class Item
{
private:
	char* desc;
	int storage;
public:
	Item()
	{
		desc = new char[51];
	}

	void setInfo(char* dsrc, int num)
	{
		strcpy(desc, dsrc);
		storage = num;
	}
};

int main() {
	Item stock;

	stock.setInfo("pen", 20);

	system("pause");
	return 0;
}