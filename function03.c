/*���m���ɂ��̎������m�F����ɂ́A�ϐ��̃A�h���X�𒲂ׂ�Ηǂ��ł���
�����ϐ����ł��A�A�h���X���Ⴄ�̂Ȃ�΂���͂܂������ʂ̕ϐ��Ƃ����܂�
*/
#include<stdio.h>

void func(void);

int main() {
        int var;
        printf("main()�֐���var = %x\n" , &var);
        func();

        return 0;
}

void func() {
        int var;
        printf("func()�֐���var = %x" , &var);
}
/*
������A�h���X�͈قȂ�͂��ł�
�F�����Ȃ���΂������Ȃ��̂� �֐����Ő錾���ꂽ�ϐ��͂��̊֐����ł̂ݗL���Ƃ������Ƃł�

����ƁA��������[�J���ϐ��ŏd�v�Ȃ��Ƃ͊֐��I�����ɏ��ł���Ƃ������Ƃł�
�֐�����A�̍�Ƃ��I���ČĂяo�����ɕ��A�������_�ŁA���̊֐��Ŏg��ꂽ�ϐ��͏��ł�
�ĂьĂяo���΁A�錾�ɂ��������č쐬����܂�
*/