#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

void Func4(int N) {
    int count = 0;
    for (int k = 0; k < 100; ++k) {
        ++count;
    }
    printf("%d\n", count);
}


//   100����  ->1

//����������ʱ�临�Ӷ�ΪO��1�� 

int main() {
    Func4(10);
    system("pause");
    return 0;
}