#include <stdio.h>

int main()
{
        int count = 0;

        while (count <= 50) {
                printf("/");
                if (count == 25) printf("\n\t�L�����I\n");

                count++;
        }
        printf("\n���[�v�𔲂��܂����A�v���O�������I�����܂�");
        return 0;
}

//switch�ł����break�X�e�[�g�����g���g���Ĕ����o���Ă��܂�
//break�͌��݂̃��[�v���痣�E����X�e�[�g�����g�ł�����

//���́A�����Ƃ���ʓI�ȕ��@�Ń��[�v�𔲂��Ă݂܂��傤
//����́Afor���l��while�̎��ŏ�������߂ă��[�v�̒��ŃC���N�������g���g���܂�