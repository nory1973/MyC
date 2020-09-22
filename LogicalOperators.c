#include <stdio.h>

int main()
{
        int bool1,bool2;

        printf("0か1を入力してください\n");
        scanf("%d",&bool1);
        printf("ANDで評価します、0か1を入力してください\n");
        scanf("%d",&bool2);
        printf("答えは %d です",(bool1) && (bool2));

        return 0;
}

/*
1と1、つまり真と真であった場合のみ1が返されることに気づいてください
双方の式が成立した場合にのみ真を返す、つまりANDなのです

つぎに論理和(OR)演算子 || を学習しましょう
これは一方に真があれば真を返します
逆にいえば、双方が偽の場合のみ偽を返します
#include <stdio.h>

int main()
{
        int bool1,bool2;

        printf("0か1を入力してください\n");
        scanf("%d",&bool1);
        printf("ORで評価します、0か1を入力してください\n");
        scanf("%d",&bool2);
        printf("答えは %d です",(bool1) || (bool2));

        return 0;
}
一方に真（0以外）を入力するとORは1を返します
もちろん双方が真でも1を返します
*/