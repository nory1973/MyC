#include <stdio.h>

int main()
{
	int var;

	printf("���Ȃ��͔L�����D���ł���?\n");
	printf("�͂� = 1\t������ = 2\t�e���̂ق����c = 3\n");

	scanf("%d",&var);

	switch (var) {
	case 1:
		printf("���m��A���ɑS�F����L���ɐ��߂悤���I");
		break;
	case 2:
		printf("���ꂶ��A�L�o�͕����Ȃ����A�U��");
		break;
	case 3:
		printf("�E�T�M����񂩁c���ŋ��Ԃ񂾂��I");
		break;
	default:
		printf("�w�肵������I�����Ă�������");
	}
	return 0;
}
//�����ő�؂Ȃ��Ƃ́Acase�Ŏw��ł���̂͒萔�Ƃ������Ƃł�
//if���ł͏�������]�����Ď��s���邱�Ƃ��ł��܂������Aswitch��case�Ŏw��ł���̂͒萔�ł�
//���̃v���O�����ł́A���͂��ꂽ�l var ��switch�̔�r�ɗp���Ă��܂�
//case 1: ��var�ɑ������Ă�����e��1����������break�܂ŁA�������͕��̍Ō�܂Ŏ��s����܂�
//���ӂƂ��ẮAswitch�X�e�[�g�����g��case�̒萔�œ����l�͎g���Ȃ��Ƃ������Ƃł�