#include <stdio.h>

//int main();

int main()
{
        char ch;

        printf("半角英数で一文字入力してください\n");
        scanf("%c",&ch);

        if (ch == 'X') {
                printf("X感じてみろー!\n");
                printf("X叫んでみろー!\n");
                printf("X全て脱ぎ捨てろー!");
        }

        else printf("パスワードが違います\n");

        return 0;
}