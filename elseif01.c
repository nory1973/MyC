#include <stdio.h>

int main()
{
        int get_int;

        printf("������͂��Ă�������\n");
        scanf("%d",&get_int);

        if (get_int< 1000) printf("���͂��ꂽ�l��1000���Ⴂ�ł�\n");
        else if (get_int == 1000) printf("���͂��ꂽ�l��1000�ł�\n");
        else {
                        printf("���͂��ꂽ�l��1000��荂���ł�\n");
        }
        return 0;
}
/*
���Q�l��
��L�v���O������if�̃l�X�g�𗘗p�����v���O����
�K�w�������Č��ɂ���

#include <stdio.h>

int main()
{
        int get_int;

        printf("������͂��Ă�������\n");
        scanf("%d",&get_int);

        if (get_int < 1000) printf("���͂��ꂽ�l��1000���Ⴂ�ł�\n");
        else {
                if (get_int == 1000) printf("���͂��ꂽ�l��1000�ł�\n");
                else {
                        printf("���͂��ꂽ�l��1000��荂���ł�\n");
                }
        }
        return 0;
}
*/