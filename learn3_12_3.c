#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// strcmp不能够多次调用，否则开销较大
//#include <iostream>
//using namespace std;


int main() {
    //1. 比较
    char str1[] = "hehe";
    char str2[] = "haha";
    //大于零小于零 等于零三个范围
    /*int ret = strcmp(str1, str2);*/
    int ret = strcmp(str1, str2);
    //不能够进行多次调用，否则开销比较大
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