/*
�\���̕ϐ��̑��
�o���������^�̍\���̕ϐ��ł���΁A�\���̕ϐ��𑼂̍\���̕ϐ��ɑ�����邱�Ƃ��ł��܂�
���̂Ƃ��A�ΏۂƂȂ�\���̕ϐ��ɂ͓��R�����o�̓��e���p������܂�

�\���̕ϐ�1 = �\���̕ϐ�2;

��������ƁA�\���̕ϐ�1�͍\���̕ϐ�2�Ƃ܂������������ɂȂ�܂�
���̂悤�ȑ�����s�����ƂŁA�ȈՂɍ\���̕ϐ��̃R�s�[����邱�Ƃ��ł��܂���
*/
#include <stdio.h>

struct copy {
        char str[128];
        int var1;
        double var2;
}st_var1;

int main() {
        struct copy st_var2;

        printf("������̓���>");
        scanf("%s" , st_var1.str);
        st_var1.var1 = 100;
        st_var1.var2 = 10.1435;

        st_var2 = st_var1;

        printf("st_var1.str = %s\n" , st_var1.str);
        printf("st_var1.var1 = %d\n" , st_var1.var1);
        printf("st_var1.var2 = %g\n" , st_var1.var2);

        printf("st_var2.str = %s\n" , st_var2.str);
        printf("st_var2.var1 = %d\n" , st_var2.var1);
        printf("st_var2.var2 = %g" , st_var2.var2);

        return 0;
}
/*
�\���̒�`���ɍ\���̕ϐ�st_var1��錾���Amain()�֐���st_var1�̊e�����o�����������Ă��܂�
����main()�֐��Ő錾���ꂽ st_var2 �\���̕ϐ��� st_var2 = st_var1 ��st_var1�������܂�
st_var2�̊e�����o�ϐ����o�͂������ʁAst_var1�̃����o�ϐ��̓��e�Ƃ܂����������Ǝv���錋�ʂ������܂�
��������΁A�e�Ղɍ\���̕ϐ��̃R�s�[�����܂���
*/