#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

// ˳�����غ���

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
    //˳����ʼ������

void seqListPushBack(seqList* S1, int value) {
    //˳���β�庯��
    S1->array[S1->size++] = value;
}

void seqListPopBack(seqList* S1);
    //˳���βɾ����

void seqListPushFront(seqList* S1, int value);
    //˳���ͷ�庯��


void seqListPopFront(seqList* S1);
    //˳���ͷɾ����

void seqListInsert(seqList* S1,size_t pos,int value);
    //��posλ��֮ǰ����һ������

void seqListErase(seqList* S1, size_t pos);
    //ɾ��posλ�õ�����

void seqListPrint(seqList* S1) {
    //��ӡ˳���
    for (int i = 0; i < S1->size; ++i) {
        printf("%d ", S1->array[i]);
    }
    printf("\n");
}


void seqListFind(seqList* S1, int value);
    //˳����в���һ����



int main() {
    seqList S1;
    seqListInit(&S1);
    seqListPushBack(&S1, 1);
    seqListPushBack(&S1, 2);

    seqListPushBack(&S1, 3);

    system("pause");
    return 0;
}