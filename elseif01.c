#include <stdio.h>

int main()
{
        int get_int;

        printf("数を入力してください\n");
        scanf("%d",&get_int);

        if (get_int< 1000) printf("入力された値は1000より低いです\n");
        else if (get_int == 1000) printf("入力された値は1000です\n");
        else {
                        printf("入力された値は1000より高いです\n");
        }
        return 0;
}
/*
＜参考＞
上記プログラムをifのネストを利用したプログラム
階層が増えて見にくい

#include <stdio.h>

int main()
{
        int get_int;

        printf("数を入力してください\n");
        scanf("%d",&get_int);

        if (get_int < 1000) printf("入力された値は1000より低いです\n");
        else {
                if (get_int == 1000) printf("入力された値は1000です\n");
                else {
                        printf("入力された値は1000より高いです\n");
                }
        }
        return 0;
}
*/