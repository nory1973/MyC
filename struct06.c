/*
�\���̕ϐ��Ɗ֐�
�\���̕ϐ����A���[�J���ϐ��A�O���[�o���ϐ��̊T�O�͒ʏ�̕ϐ��Ɠ����ł�
�\���̒�`���ɐ錾���ꂽ�\���̕ϐ��Ȃǂ̓O���[�o���ϐ��Ƃ��āA�ǂ̊֐�������L���ł���
����̊֐����Ő錾���ꂽ�\���̕ϐ��ɂ����ẮA���̊֐��ł͎g�p�ł��܂���
���Ƃ��Ύ��̃v���O�����͊Ԉ���Ă��܂�
#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
}naru , sinobu;

void func(void);

int main() {
	struct LOVE_HINA motoko;

	naru.name = "������Ȃ�";
	naru.age = 17;
	sinobu.name = "�O�����̂�";
	sinobu.age = 13;
	motoko.name = "�R�f�q";
	motoko.age = 15;
	
	func();

	return 0;
}

void func() {
	printf("%s",motoko.name);	/*�G���[ : ����`�̃V���{�� motoko
    }
�\���̕ϐ� sinobu �̓O���[�o���ϐ��Ȃ̂Ŗ��͂���܂���main()�֐�����
�錾���ꂽ�\���̕ϐ� motoko �� func() �֐�����͌����܂���
�������A�P�̂̃����o�ł���΁A���̂悤�ɏ������邱�Ƃ��\�ł�

#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
}naru , sinobu;

void func(char *);

int main() {
	struct LOVE_HINA motoko;

	naru.name = "������Ȃ�";
	naru.age = 17;
	sinobu.name = "�O�����̂�";
	sinobu.age = 13;
	motoko.name = "�R�f�q";
	motoko.age = 15;
	
	func(motoko.name);

	return 0;
}

void func(char *name) {
	printf("%s",name);
}

����́A�\���̕ϐ��̃����o�̓��e�������֐��ɓn���Ă��܂�
���̉ߒ��́A�ʏ�̕ϐ��ǂ����Ɖ���ς��Ȃ��̂ŋ^��͂���܂����
�������A�\���̕ϐ����֐��ň����ꍇ�A����͂悢�΍�Ƃ͌����܂���
�\���̕ϐ��S�̂̐�����֐��ōs���ɂ�
�\���̕ϐ��̃����o���֐��ɓn���̂ł͂Ȃ��A�\���̕ϐ����̂��̂��֐��ɓn���K�v������܂�

���́A�\���̕ϐ������ł���悤�ɁA�����^�̍\���̕ϐ��ł���Ί֐��Ԃ̎󂯓n�����\�ł�
�\���̕ϐ����֐��ɓn���ɂ́A�������𓯂��^�ɂ���K�v������܂�
��̃T���v���v���O�������ɍl����΁A���̊֐��̃v���g�^�C�v�͗L���ł�

void func(struct LOVE_HINA);

����ŁAfunc()�֐��� LOVE_HINA �^�\���̕ϐ����󂯎�邱�Ƃ��ł��܂�
�������邱�Ƃɂ���āA�\���̕ϐ��̊e�����o�̏������֐��ňꊇ���邱�Ƃ��\�ł�
*/
#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
}naru , sinobu;

void func(struct LOVE_HINA);

int main() {
	struct LOVE_HINA motoko;

	naru.name = "������Ȃ�";
	naru.age = 17;
	sinobu.name = "�O�����̂�";
	sinobu.age = 13;
	motoko.name = "�R�f�q";
	motoko.age = 15;
	
	printf("���O\t\t�N��\n");
	func(naru);
	func(sinobu);
	func(motoko);

	return 0;
}

void func(struct LOVE_HINA hina) {
	printf("%s\t%d\n",hina.name , hina.age);
}
/*
func()�֐���LOVE_HINA�^�\���̕ϐ����󂯂Ƃ�A�����o���o�͂���֐��ł�
�֐��ɍ\���̕ϐ���n�����Ƃɂ���āA�ʓ|�ȉ�ʏo�͍�Ƃ��ꊇ�ł��܂�����
����ŁAfunc()�֐��ɍ\���̕ϐ���n���΁A����ɏo�͂��Ă���܂�
���R�A���[�J���ϐ��̕ǂ��j�邱�Ƃ��ł��܂���
main()�֐��Ő錾���ꂽ�\���̕ϐ����A�ʊ֐��Ŏ󂯎���ď������邱�Ƃ��ł��܂�
*/