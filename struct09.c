/*
�\���̂̃l�X�g
�\���̕ϐ��^�̃����o
�\���̂̃����o�ϐ��ɂ́A�ʏ�̕ϐ������ł͂Ȃ��\���̌^�ϐ��������o�ɂ��邱�Ƃ��ł��܂�
���̂��Ƃ��\���̂̃l�X�g�Ƃ����܂�

�\���̂̃l�X�g�́A��͂肻��Ɏ����O���[�v�֌W��\������̂ɓK���Ă��܂�
����ɂ���āA�c��Ȏ��Ɛ��Ə]�ƈ�������Ɨp�f�[�^�x�[�X���\���ł��܂�
struct base {
	int a;
};
struct sec {
	struct base obj1;
}obj2;
�\���� sec �̃����o�� �\���� base �̍\���̕ϐ��ł�
sec�̍\���̕ϐ� obj2 ���� base �̃����o�ϐ� a �ɃA�N�Z�X����ɂ͎��̂悤�ɂ��܂�

obj2.obj1.a

�K���O����������֎Q�Ƃ��Ă����܂�
obj1��obj2�̏��Ԃ��t�ɂ��邱�Ƃ͂ł��܂���
obj1��obj2�̃����o�ϐ��ł��邱�Ƃ�F�����Ă�������
*/
#include <stdio.h>

struct Param {
	char *name;
	int age;
};

struct LOVE_HINA {
	struct Param hina;
}naru , sinobu;

struct LOVE_HINA2 {
	char *tabacco;
	struct Param hina;
}haruka;

void Param(struct Param * , char * , int);

int main() {
	printf("���O\t\t�N��\n");
	Param(&naru.hina , "������Ȃ�" , 17);
	Param(&sinobu.hina , "�O�����̂�" , 13);
	Param(&haruka.hina , "�Y���͂邩" , 27);
	haruka.tabacco = "�}���{��";
	printf("�͂邩����A�^�o�R��%s�炵���c" , haruka.tabacco);

	return 0;
}

void Param(struct Param *obj , char *name , int age) {
	obj->name = name;
	obj->age = age;
	printf("%s\t%d\n" , obj->name , obj->age);
}
/*
�\���� Param ���l�X�g���Ă��܂�
LOVE_HINA , LOVE_HINA2 �\���̂̃����o�� Param �^�̃����o�ϐ����m�F�ł��܂���
�\���̂��l�X�g���邱�Ƃɂ���āA����̃����o�𑼂̍\���̂Ɍp�������邱�Ƃ��ł��܂��i�I�u�W�F�N�g�w���̌p���Ƃ͊֌W����܂���j

���̂悤�ɂ���΁A���������o�����\���̂����x���쐬����K�v���Ȃ��Ȃ�܂�
�|�C���^�^�̍\���̕ϐ��ƁA�l�X�g���ꂽ�\���̕ϐ���������Ə�����₱�����Ȃ�܂���
���̏ꍇ�̓A���[���Z�q�ƃh�b�g���Z�q��������܂�
#include <stdio.h>

struct test {
        int a;
};

struct {
        struct test base;
}obj , *po;

int main() {
        obj.base.a = 100;
        po = &obj;
        printf("%d" , po->base.a);
        return 0;
}
po->base.a �ɒ��ڂ��Ă�������
��Âɍl����΁A����܂ł���Ă������Ƃ̐ςݏd�˂Ȃ̂łȂ�Ă��Ƃ͂���܂���
*/
