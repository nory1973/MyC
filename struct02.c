/*
�\���̕ϐ����Ƃɂ܂������ʂ̃����o�ϐ������蓖�Ă��Ă��邩�ǂ����́A�A�h���X���o�͂�����΂킩��܂���
�\���̕ϐ��̃����o�̃A�h���X�𓾂�ɂ͎��̂悤�ɋL�q���܂�

&�\���̕ϐ���.�����o��

�\���̂̊e�����o�̃A�h���X�̎擾�́A�����o���̑O�ł͂Ȃ��\���̕ϐ����̑O��&���Z�q��p���܂�
��������΁A�����o�ϐ���scanf()�֐����g���Ēl����͂����邱�Ƃ��ł��܂���
*/
#include <stdio.h>

struct {
        char *name;
        int age;
}naru , sinobu;

int main() {
        printf("naru.name = %x\nnaru.age = %x\n" , &naru.name , &naru.age);
        printf("sinobu.name = %x\nsinobu.age = %x\n" , &sinobu.name , &sinobu.age);

        return 0;
}
/*
���ꂼ��܂������ʂ̃A�h���X���Ԃ��Ă��܂�
�\���̕ϐ� naru �� sinobu �́A�����\���̂ł���Ƃ��������ŁA�����o�̎��͈̂قȂ�܂�
*/