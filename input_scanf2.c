#include <stdio.h>

int main()
{
        int ope1;
        int ope2;

        printf("与えられたふたつの数を加算します\n");
        printf("最初の数を入力してください\n");
        scanf("%d" , &ope1);

        printf("%d に加算する数を入力してください\n" , ope1);
        scanf("%d" , &ope2);

        printf("答えは\t%d\tです" , ope1 + ope2);

        return 0;
}