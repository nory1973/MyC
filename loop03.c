/*
�̎�������for��
for����́A���x�ȃv���O�����ɂȂ��Ă���΂��܂��܂ȗp�r���l�����܂�
���̂ЂƂƂ��āAfor���̕ϐ��̏��������~�͏ȗ����邱�Ƃ��ł���Ƃ����_��ł�
for���̃��t�@�����X�ɂ��ȗ��\�ł���Ə����Ă����܂���

���Ƃ��Έȉ��̃v���O�����͕ϐ��̏��������ȗ�����for�X�e�[�g�����g�ł�
*/
#include <stdio.h>

int main()
{
        int count;
        count = 0;

        for ( ; count <= 10 ; count++) {
                printf("%d��ڂ̂���Ԃ��ł�\n",count);
        }
        return 0;
}
/*
�������A�������̂��ƑS�Ă��ȗ����Ă��܂����Ƃ��\�ł�
#include <stdio.h>

int main()
{
        int count;
        count = 0;

        for (;;) {
                count++;
                printf("%d��ڂ̂���Ԃ��ł�\n",count);
                if (count >= 10) break;
        }
        return 0;
}
for���͕����񑀍�Ȃǂɂ悭���p����܂��Afor�ɂ��_��ȃ��[�v����̃X�L���͑�؂ł�
����܂ł̐��䕶�≉�Z�q�����p���āA���܂��܂ȃv���O�����������Ă�������
*/