/*
�\���̃|�C���^
�A���[���Z�q
�\���̕ϐ��������Ƃ��ēn������A�߂�l�Ƃ��Ď󂯎����@�͂킩��܂���
�������A�\���̂͂��̎d�l����A���p�I�ȃv���O�����̏ꍇ�͑����ȗ̈���g�p���邱�Ƃ��l�����܂�

�T�C�Y�̑傫�ȍ\���̕ϐ����֐��ɒl�n������͍̂����I�ł͂���܂���
���Ԃ������邵�A�e�ʁi�X�^�b�N�Ƃ����܂��j���K�v�ł�
�Ƃ������Ƃ͎Q�Ɠn�����]�܂����Ƃ������ƂɂȂ�܂�

�\���̕ϐ��̎󂯓n���́A�ʏ�͎Q�Ɠn���ōs���܂�
�\���̕ϐ����Q�Ɠn������ɂ͍\���̕ϐ��̃|�C���^���K�v�ł�
�\���̂̃|�C���^�̐錾���@�́A�ʏ�̃|�C���^���l�� * ���Z�q���g�p���܂�

struct tag-name *reference;

���̓A�N�Z�X���@�ł��B�\���̂̃|�C���^�̓h�b�g���Z�q�͎g���܂���
����ɁA�\���̕ϐ����|�C���^�ł��邱�Ƃ𖾎��I�ɕ\���A���[���Z�q ( -> )��p���܂�
�A���[���Z�q�� �}�C�i�X�L�� - �Ƒ�Ȃ�L�� > �ō\������܂�

reference->member

���̃v���O�����́A�����ȒP�ȃ|�C���^�^�\���̕ϐ��̐錾��
�|�C���^�^�\���̕ϐ����烁���o�ւ̃A�N�Z�X�����݂��T���v���ł�
#include <stdio.h>

struct {
        int var;
}obj , *po;

int main() {
        po = &obj;
        obj.var = 100;

        printf("%d" , po->var);

        return 0;
}
�|�C���^�ɂ��\���̕ϐ��̎Q�Ɠn���ł���΁A���s���x�ɐ[���Ȗ����y�ڂ����ƂȂ�
�\���̂��֐��ŏ������邱�Ƃɂ���č�Ƃ̌��������͂���܂�
*/
#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
};

struct LOVE_HINA LOVE_HINA(char * , int);
void write(struct LOVE_HINA *);

int main() {
	struct LOVE_HINA naru = LOVE_HINA("������Ȃ�", 17);
	struct LOVE_HINA sinobu = LOVE_HINA("�O�����̂�" , 13);
	printf("���O\t\t�N��\n");
	write(&naru);
	write(&sinobu);

	return 0;
}

struct LOVE_HINA LOVE_HINA(char name[] , int age) {
	struct LOVE_HINA obj;
	obj.name = name;
	obj.age = age;
	return obj;
}

void write(struct LOVE_HINA *obj) {
	printf("%s\t%d\n" , obj->name , obj->age);
}
/*
write()�֐��̒�`�����Ă�������
�������ł́A�|�C���^�ō\���̕ϐ����󂯎���Ă��܂�
�����āAprintf()�֐��̈����ł̓|�C���^�^�\���̕ϐ��Ȃ̂ŃA���[���Z�q�Ń����o�ɃA�N�Z�X���Ă��܂�

main()�֐�����write()�֐��̌Ăяo�����ɂ́A�\���̕ϐ��̃A�h���X��n���Ă��邱�Ƃ����ڂ��Ă�������
*/