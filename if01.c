#include <stdio.h>

int main()
{
        int ans;
        int get_int;

        printf("�l����͂��Ă�������\n");
        scanf("%d",&get_int);

        ans = (get_int == 10);     /*�������̔����ϐ�ans�ɑ��*/
        printf("ans = %d" , ans);

        return 0;
}