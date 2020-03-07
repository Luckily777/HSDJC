#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//文件

int main() {
    FILE* fout = fopen("test.txt", "r");
    fseek(fout, 5, SEEK_SET);//设置的文件的开始
    //fseek(fout, 0, SEEK_END);设置的文件的末尾
    //fseek(fout, 5, SEEK_CUR);//跳过几个位置
    //fseek(fout, 5, SEEK_CUR);//跳过几个位置




    //1.读前五个后跳过五个
    //char out_ch = fget(fout);
    //for(int i=0;i<5;i++){
    //}
    // 之后再跳5个

    //2. 算文件的大小
    //fseek(fout, 0, SEEK_END);设置的文件的末尾
    //printf("文件的大小：%d", ftell(fout));// 计算文件大小

    //3.判断文件结束 如果没读到结尾会返回非零
    char ch = fget(fout);
    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fout);
    }
    if (feof(fout) != 0) {
        printf("read end of file\n");
    }
    /*if (ferror(fout) != 0) {
        printf("read error");
    }*/

    //4. 读视频
    fseek(fout, 0, SEEK_END); //设置的文件的末尾
        long long n = ftell(fout);
        printf("%d\n",n);
        fseek(fout, 0, SEEK_SET); //设置的文件的kaishi
        while (n--) {
            printf("%c", ch);
            ch = fgetc(fout);
        }

    fclose(fout);
    system("pause");
    return 0;
}