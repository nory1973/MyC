#include <stdio.h>

int main()
{
	char var;

	printf("�����̓ޔ��͂ǂ�����������\n�ˑR�s���ɂ���ꂽ�l�́c\n\n");
	printf("A\t�u�ޔ����[�[�I�ǂ����A�Ԏ�������[�I�I�v\n");
	printf("\t�l�͓ޔ���K���ŒT����\n\n");
	printf("B\t�u�L���B�[�I�ǂ����A�ł����[�[�[�I�I�v\n");
	printf("\t�l�͒j�̃��}��������\n");

	scanf("%c" , &var);

	switch(var) {
	case 'A':
		printf("�܂��A�����������ĉ��~�͔R����񂾂�ˁc\n�l�̓v���C���[�Ƃ��Ē��߂�");
		break;
	case 'B':
		printf("��͂肱�̐��ōł��������͔̂L����\n�����A���߂Ă�����m�M����");
		break;
	default:
		printf("A��B��I�����Ăɂ�");
	}

	return 0;
}
//�܂��Acase�����萔�͕����ł����܂��܂���
//C����ł́A�P�̕�����\������̂ɂ̓V���O���N�H�[�e�[�V�������g����ł�����
//�������switch�Ŏg���Ƃ������l�ł�
