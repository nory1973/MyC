#include <stdio.h>

int main()
{
        int var1;
        int var2;

        printf("2�̐����r���܂�\n�ŏ��̐�����͂��Ă�������\n");
        scanf("%d",&var1);
        printf("��r���鐔����͂��Ă�������\n");
        scanf("%d",&var2);

        if (var1 < var2) printf("%d �� %d ��菬�����ł�",var1,var2);
        if (var1 > var2) printf("%d �� %d ���傫���ł�",var1,var2);
        if (var1 == var2) printf("%d �� %d �͓������ł�",var1,var2);

        return 0;
}