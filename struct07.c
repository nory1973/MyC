/*
����ɁA�߂�l�ō\���̕ϐ���Ԃ����Ƃ��ł��܂�
���@�́A��͂蓯�����߂�l�̌^���\���̂̌^�ɍ��킹�܂�
���LOVE_HINA�\���̂̏ꍇ�͎��̂悤�ɂ���Ηǂ��ł���

struct LOVE_HINA func(void);

����𗘗p����΁A�ʓ|�ȍ\���̕ϐ��̏��������ꊇ���邱�Ƃ��ł��܂�
���Ƃ��΁A�����Ń����o�ɏ���������l���󂯎��A��͍\���̕ϐ���Ԃ��΂悢�̂ł�
�\���̕ϐ��́A�����^�̍\���̕ϐ��ł���Α�����邱�Ƃ��ł��܂�����
*/
#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
}naru , sinobu;

void func(struct LOVE_HINA);
struct LOVE_HINA LOVE_HINA(char * , int);

int main() {
	struct LOVE_HINA motoko;

	naru = LOVE_HINA("������Ȃ�" , 17);
	sinobu = LOVE_HINA("�O�����̂�" , 13);
	motoko = LOVE_HINA("�R�f�q" , 15);
	
	printf("���O\t\t�N��\n");
	func(naru);
	func(sinobu);
	func(motoko);

	return 0;
}

void func(struct LOVE_HINA hina) {
	printf("%s\t%d\n",hina.name , hina.age);
}

struct LOVE_HINA LOVE_HINA(char *name , int age) {
	struct LOVE_HINA hina;
	hina.name = name;
	hina.age = age;

	return hina;
}
/*
���̃v���O�����ł́A�\���̕ϐ������������邽�߂̊֐� LOVE_HINA() �����܂���
����ŁA���\���̕ϐ�����낤�Ƃ��A���̊֐����Ăяo�������Ȃ̂ł��Ȃ��ƌ������グ���܂���

�֐��̖��O���^�O���Ɠ����ł��邱�Ƃɂ����ڂ��Ă�������
�֐����ƍ\���̃^�O���͏Փ˂��܂���

����ɁALOVE_HINA()�֐�������ƁA�������̕ϐ����������o���Ɠ����ł�
�������A�����o�͍\���̕ϐ��ɂ���ČĂяo�������̂̂��߃����o�ƕϐ����̏Փ˂�����܂���
*/