#include <stdio.h>

int main()
{
        int count = 1;
        int max;

        printf("�J��Ԃ��񐔂��w�肵�Ă�������\n");
        scanf("%d",&max);

        do {
                printf("%d��ڂ̃��[�v�ł�\r" , count);
                count++;
        } while (count <= max);

        printf("\n�v���O�������I�����܂�");
        return 0;
}

/*
do �` while���[�v
while�Ɏ������[�v�� do�X�e�[�g�����g ������܂�
while�X�e�[�g�����g�Ɠ��ʂȈႢ�͂���܂��񂪁A�ЂƂ����傫���قȂ镔��������܂�
����̓X�e�[�g�����g�����s�������ƂŎ���]������Ƃ������Ƃł�

while��for�X�e�[�g�����g�ł́A����]�����Ă��烋�[�v���s�Ȃ��܂���
���̂��ߎ��s�̎��_�ŕ]�����U�ł���΁A�X�e�[�g�����g����x�����s���܂���ł���

���Ƃ��]�����ǂ̂悤�Ȍ`�ł���A�Œ�ł���x�͎��s���Ăق����ꍇ��do�͈З͂𔭊����܂�
do�X�e�[�g�����g�͎��s�X�e�[�g�����g����ɂ���A���̌�ɌJ��Ԃ����ǂ����𔻒肵�܂�

do �X�e�[�g�����g while (������);

�������Ado�X�e�[�g�����g�̏ꍇ�͈�ʓI�ɒP�̂̃X�e�[�g�����g���J��Ԃ��Ɏw�肵�܂���
�ǐ��Ȃǂ��l�����Ĉ�s�ł��R�[�h�u���b�N���Ӑ}�I�Ɏg�p���܂�

do��p����΁A���Ƃ�0����͂���Ă��K��1�x�̓X�e�[�g�����g�����s����܂�
�v���O�����̗p�r�ɂ���Ďg�������Ă�������

while (expression) statement
statement��expr���^�ł��邠�����J��Ԃ��܂�

expression �]�����鎮���w�肵�܂�

statement expr���^�ł���ԁA����Ԃ����X�e�[�g�����g���w�肵�܂�

do statement while (expression);
statement�����s�������Ƃɏ�������]�����܂�

statement expr���^�ł���ԁA����Ԃ��X�e�[�g�����g���w�肵�܂�

expression �]��������������L�q���Ă�������
*/