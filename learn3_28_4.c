#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

// 顺序表相关函数

typedef struct seqList {
    int* array;
    size_t size;
    size_t capacity;
}seqList;

void seqListInit(seqList* S1) {
    S1->array = (int*)malloc(sizeof(int) * 4);
    S1->capacity = 4;
    S1->size = 0;
}
    //顺序表初始化函数

void seqListPushBack(seqList* S1, int value) {
    //顺序表尾插函数
    S1->array[S1->size++] = value;
}

void seqListPopBack(seqList* S1);
    //顺序表尾删函数

void seqListPushFront(seqList* S1, int value);
    //顺序表头插函数


void seqListPopFront(seqList* S1);
    //顺序表头删函数

void seqListInsert(seqList* S1,size_t pos,int value);
    //在pos位置之前插入一个数据

void seqListErase(seqList* S1, size_t pos);
    //删除pos位置的数据

void seqListPrint(seqList* S1) {
    //打印顺序表
    for (int i = 0; i < S1->size; ++i) {
        printf("%d ", S1->array[i]);
    }
    printf("\n");
}


void seqListFind(seqList* S1, int value);
    //顺序表中查找一个数



int main() {
    seqList S1;
    seqListInit(&S1);
    seqListPushBack(&S1, 1);
    seqListPushBack(&S1, 2);

    seqListPushBack(&S1, 3);

    system("pause");
    return 0;
}