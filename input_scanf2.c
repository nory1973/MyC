#include <stdio.h>

int main()
{
        int ope1;
        int ope2;

        printf("�^����ꂽ�ӂ��̐������Z���܂�\n");
        printf("�ŏ��̐�����͂��Ă�������\n");
        scanf("%d" , &ope1);

        printf("%d �ɉ��Z���鐔����͂��Ă�������\n" , ope1);
        scanf("%d" , &ope2);

        printf("������\t%d\t�ł�" , ope1 + ope2);

        return 0;
}