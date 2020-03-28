#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;


//静态顺序表
typedef struct seqList {
    int num[100];
    size_t size;
}seqList;


//动态顺序表
typedef struct seqList {
    int *array;
    size_t size;
    //元素个数
    size_t capacity;
    //元素容量
}seqList;

int main() {

    system("pause");
    return 0;
}