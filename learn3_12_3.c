#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// strcmp���ܹ���ε��ã��������ϴ�
//#include <iostream>
//using namespace std;


int main() {
    //1. �Ƚ�
    char str1[] = "hehe";
    char str2[] = "haha";
    //������С���� ������������Χ
    /*int ret = strcmp(str1, str2);*/
    int ret = strcmp(str1, str2);
    //���ܹ����ж�ε��ã��������Ƚϴ�
    if (ret < 0)
    {
        printf("xiaoyu");
    }
    else if(ret > 0){
        printf("dayu");
    }
    else {
        printf("dengyu ");
    }
    
    system("pause");
    return 0;
}