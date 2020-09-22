#include <stdio.h>

int main()
{
        char str;
        int get_int;

        printf("文字コードの仕組を調べます。1文字入力してください\n");
        scanf("%c" , &str);

        printf("\n入力コード\t= %c\n" , str);
        printf("コードの10進数\t= %d\n" , str);
        printf("コードの16進数\t= %x\n" , str);

        printf("\nコードに加算したい定数を半角英数で入力してください\n");
        scanf("%d" , &get_int);

        printf("\n入力コード\t= %c\n" , str + get_int);
        printf("コードの10進数\t= %d\n" , str + get_int);
        printf("コードの16進数\t= %x\n" , str + get_int);

        return 0;
}