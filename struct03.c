/*
�\���̕ϐ��̐錾�́A�\���̕ϐ����X�g�ňꊇ���čs���Ă��܂�����
���ƂŊ֐����Ő錾����K�v���o�Ă��邩������܂���
���̂悤�ȏꍇ�̓^�O�������邱�ƂŁA�ォ��\���̕ϐ��𐶐����邱�Ƃ��ł��܂�����

struct �^�O�� �ǉ��\���̕ϐ���;

��قǂ̃v���O�����ɁA�����main()�֐����� motoko ��ǉ����Ă݂܂��傤
*/
#include <stdio.h>

struct LOVE_HINA {
        char *name;
        int age;
}naru , sinobu;

int main() {
        struct LOVE_HINA motoko;
        naru.name = "������Ȃ�";
        naru.age = 17;
        sinobu.name = "�O�����̂�";
        sinobu.age = 13;
        motoko.name = "�R�f�q";
        motoko.age = 15;

        printf("���O\t\t�N��\n");
        printf("%s\t%d\n" , naru.name , naru.age);
        printf("%s\t%d\n" , sinobu.name , sinobu.age);
        printf("%s\t%d\n" , motoko.name , motoko.age);

        return 0;
}
/*
C����ł�struct�L�[���[�h�𖾎��I�Ɏg��Ȃ���΁A�\���̕ϐ���錾�ł��܂���
C++�ł́A�^����`����Ă���Ώȗ��ł���̂�C++���[�U�[�ɂ͒��ӂ��K�v�ł�
�����傤����{�I�ȍ\���̂̎g�����ł�
���̏͂ł́A���ׂ����\���̂̎d�l�𒲂ׂĂ݂܂��傤

struct [tag] { member-list } [declarators];
�\���̂��`���܂�

tag - �\���̂̃^�O�����w�肵�܂��i�ȗ��j
member-list - �����o���`���܂�
declarators - �\���̕ϐ���錾���܂�(�ȗ���)

[struct] tag declarators;
�\���̕ϐ���錾���܂�
struct�L�[���[�h��C++�̏ꍇ�̂݁A�ȗ��ł��܂�
�b����̏ꍇ�A�ȗ�����ƃG���[�ɂȂ�̂Œ��ӂ��K�v�ł�

teg - �\���̂̃^�O�����w�肵�܂�
declarators - �\���̕ϐ���錾���܂�
*/