/*
���E�\����
�z��^�\���̕ϐ�
�\���̕ϐ��́A���̃f�[�^�^���l�ɔz��ɂ��邱�Ƃ��ł��܂�

struct �^�O�� �\���̕ϐ���[�z��];

�z��^�̊e�\���̕ϐ��ɃA�N�Z�X����ɂ́A�\���̕ϐ��ɓY�������w�肵�܂�
�܂��A�e�\���̕ϐ��̓���̃����o�ɃA�N�Z�X����ɂ͓Y�����w��̌�Ƀh�b�g���Z�q�ƃ����o�����w�肵�܂�

�\���̕ϐ���[�Y����].�����o��

�����͊�{�I�ɒʏ�̔z��Ɠ����ł���
���̃v���O�������Q�Ƃ��āA�z��^�\���̕ϐ��̐錾�ƃA�N�Z�X�ɒ��ڂ��Ă�������
*/
#include <stdio.h>

struct LOVE_HINA {
        char *name;
        int age;
};

int main() {
	int ary_index;
	struct LOVE_HINA structNA[3];

	structNA[0].name = "������Ȃ�";
	structNA[0].age = 17;
	structNA[1].name = "�O�����̂�";
	structNA[1].age = 13;
	structNA[2].name = "�R�f�q";
	structNA[2].age = 15;

	printf("�Ȃ� = 0 , ���̂� = 1 , �f�q = 2>");
	scanf("%d", &ary_index);
	if ((ary_index >= 0) && (ary_index <= 2)) {
		printf("���O\t\t�N��\n");
		printf("%s\t%d" , structNA[ary_index].name , structNA[ary_index].age);
	}
	else printf("�G���[ : ���̔ԍ��̃f�[�^�͂���܂���");

	return 0;
}
/*
�\���̕ϐ���z��ɂ��邱�Ƃɂ���āA�ȈՂɃ��[�U�[�ɃA�N�Z�X����\���̂�I�������邱�Ƃ��ł��܂���
���̂悤�ɁA��ʂ̃f�[�^���������Ƃ��\�z�����\���̂ɂ����āA�z��͏d�v�ȗv�f�ł�
*/