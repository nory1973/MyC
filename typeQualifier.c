/*
���@�ׂȃf�[�^�^
�ϐ��̏͂ŁA�����t�f�[�^�ƕ����Ȃ��f�[�^�̎w�肪�\�ł��邱�ƂɐG��܂���
�����ł́A���̃f�[�^�^�̗p�r�ɉ����āA���ׂ����ϐ����w�肵�܂��傤

C����ɂ�void�^�������āA4�̃f�[�^�^������܂���
char int float double �̎l�ł�

�^�錾�q�̑O�ɁA�^�C���q���w�肷�邱�Ƃł��̃f�[�^�^��p�r�ɉ����Ă��ߍׂ����w��ł��܂�
����܂Ŏ��������g���Ă�����\�I�Ȍ^�C���q�� unsigned �ł�
����́A���̌^�������Ȃ��ł��邱�Ƃ𖾎��I�ɂ��Đ��̐��̗̈�𑽂��m�ۂ�����̂ł���

���ɂ��ȉ��̂悤�ȏC���q������܂�
signed
unsigned
long
short

long��short��int�^�ɓK�����܂�
short��int�^����������long��int�^���傫���̈���m�ۂ��܂�
int�^�ł͏���������Ȃ��傫�ȃf�[�^��A�t�ɏ��ʂ̃f�[�^�ŏ����ł���ꍇ�Ȃǂ̗p�r�Ŏg�������܂�
�m�ۂ����̈�͐��m�ɒ�߂��Ă��܂���B����R���p�C���ňقȂ�̂Œ��ӂ��Ă�������

long��double�^�ɂ��K�����܂�
�����long int���l��double�����傫���̈���m�ۂ��܂�

������񕄍��Ȃ���short int�^�Ƃ����̂��錾�ł��܂�
���̏ꍇ�� unsigned short int �ƋL�q���܂�
�����܂ł�����܂��� unsigned long int �� signed short int �� signed long int ������܂�

C����ł́A�^�C���q�w�莞��int���ȗ����邱�Ƃ��ł��܂�
unsigned int , short int , long int��int���ȗ����Ă��Ӑ}�ǂ���̃f�[�^�^���錾�ł��܂�

unsigned int var;
unsigned var;

��̓�̐錾�́A�܂������������Ƃł�

����́A���̂܂܃f�[�^�^�ɂ��킹�Ēl�������邾���ł���
printf()�֐��Ŗ����I�Ƀf�[�^���o�͂���ɂ� %d �����ł͂��܂������Ȃ����Ƃ�����܂�

unsigned = %u
short = %hd
long = %ld
unsigned long = %lu
long double = %Lf

�ȏ�̏����𓪂ɓ���Ă����A�ȉ��̃v���O�������Q�Ƃ��Ă�������
*/
#include <stdio.h>

int main()
{
        short var1 = 32767;
        long var2 = 32768;
        unsigned short var3 = 40000;
        unsigned long var4 = 4294967295;
        long double var5 = 123456.789;

        printf("%hd\n",var1);
        printf("%ld\n",var2);
        printf("%u\n",var3);
        printf("%lu\n",var4);
        printf("%Lf",var5);

        return 0;
}
/*
int�̏ȗ��L�@��p���Ă܂�
�������A�^�C���q�Ŋ��蓖�Ă���f�[�^�T�C�Y�̓R���p�C���Ȃǂɂ���ĈقȂ�܂�
*/