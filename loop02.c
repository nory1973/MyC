
#include <stdio.h>

int main()
{
        int count;
        int max;

        printf("���[�v�񐔂��w�肵�Ă�������\n");
        scanf("%d",&max);

        for (count = 0 ; count < max ; count++) {
                printf("%d��ڂł�\r" , count);
                if (count == 5000) {
                        printf("5000��ڂ��z�����̂ŋ����I�����܂�\n");
                        count = max;
                }
        }
        printf("���[�v�𔲂��܂���");
        return 0;
}

//for(�J�E���^�[ ; ���� ; �X�e�b�v) { �X�e�[�g�����g }
//for( [init-expr]; [cond-expr]; [loop-expr] ) statement;
//statement��cond-expr���^�ł��邩����J��Ԃ��܂�
//statement�͒P��s�ȊO�ɃR�[�h�u���b�N���w��ł��܂�

//init-expr �ȗ��\�ł��B�ϐ��̏��������s�Ȃ��܂�

//cond-exor �ȗ��\�ł��B�J��Ԃ����Ƃɕ]��������������w�肵�܂��B�������^�ł��邩����J��Ԃ��܂�

//loop-expr �ȗ��\�ł��B�J��Ԃ����ƂɎ��s���鎮���w�肵�܂�

//statement �J��Ԃ����ƂɎ��s����X�e�[�g�����g���w�肵�܂�