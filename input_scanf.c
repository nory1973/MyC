#include <stdio.h>

int main()
{
        int get_var;
        printf("何か数値を代入してください\n");
        scanf("%d" , &get_var);
        printf("入力された値は %d です" , get_var);

        return 0;
}