#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�ļ�

int main() {
    FILE* fout = fopen("test.txt", "r");
    fseek(fout, 5, SEEK_SET);//���õ��ļ��Ŀ�ʼ
    //fseek(fout, 0, SEEK_END);���õ��ļ���ĩβ
    //fseek(fout, 5, SEEK_CUR);//��������λ��
    //fseek(fout, 5, SEEK_CUR);//��������λ��




    //1.��ǰ������������
    //char out_ch = fget(fout);
    //for(int i=0;i<5;i++){
    //}
    // ֮������5��

    //2. ���ļ��Ĵ�С
    //fseek(fout, 0, SEEK_END);���õ��ļ���ĩβ
    //printf("�ļ��Ĵ�С��%d", ftell(fout));// �����ļ���С

    //3.�ж��ļ����� ���û������β�᷵�ط���
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

    //4. ����Ƶ
    fseek(fout, 0, SEEK_END); //���õ��ļ���ĩβ
        long long n = ftell(fout);
        printf("%d\n",n);
        fseek(fout, 0, SEEK_SET); //���õ��ļ���kaishi
        while (n--) {
            printf("%c", ch);
            ch = fgetc(fout);
        }

    fclose(fout);
    system("pause");
    return 0;
}