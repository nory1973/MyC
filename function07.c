/*
�`���`��
�Â�����̉������錾
����܂ŏЉ���������̐錾���@ �֐���(�������X�g) �Ƃ��������͔�r�I�V���������ł�
�����ANSI C�W����C���ꂪ�W�������ꂽ�Ƃ��ɓ������ꂽ���̂̂悤�ł�
�ł́A����ȑO�̉������̐錾�͂ǂ̂悤�ɍs���Ă����̂ł��傤���H

ANSI C�W���ȑO�̐錾���@��`���`���⋌�����Ƃ����悤�ɌĂ΂�Ă��܂�
���̕����ɂ��錾�͌���̃R���p�C���ł��\�ł�
����ɁA�ߋ���C����̃\�[�X�œ`���`�����g���Ă�����̂��������邱�Ƃ����邩������܂���
�����ŁA�`���`���̉������錾���o���Ă����܂��傤

�������A�V�����v���O�����ɂ͐V���������ŋL�q����ׂ����Ƃ����̂�
���ꂩ��F���񂪍���Ă����v���O�����Ɋւ��Ă�ANSI C�W���̍ŐV�̐錾���@��p����ׂ��ł�
�����܂ŁA�ߋ��ɍ��ꂽC����\�[�X��ǂ߂�悤�ɂȂ邽�߂ł�

�`���`���ɂ�鉼�����錾�̏����͈ȉ��̂悤�ɂȂ�܂�

�߂�l�^ �֐���(���������P , ��������2 , ��������n...)
�^ ��������1;
�^ ��������2;
�^ ��������n;
.
.
.
{
�X�e�[�g�����g;
}

�傫���Ⴄ�̂́A�������X�g�ŉ������ƂȂ�ϐ��������錾���Ȃ��Ƃ������Ƃł�
���̌�A�R�[�h�u���b�N�ɓ���O�ɂ��ꂼ��̉������Ɍ^��錾����Ƃ����`�ɂȂ��Ă��܂�

�������̌^�������^�ł���΁A�ʏ�̕ϐ��̐錾���l�ɃJ���}�u , �v�ŋ�؂��Ĉ�x�ɐ錾�ł��܂�

void finction(var1 , var2)
int var1 , var2...

�`���`���ɂ�鉼�����錾��p�����T���v�������Ă�������
*/
#include <stdio.h>

int max(int , int );  //�`������

int main() {
	int r_var , var1 , var2;

	printf("�ŏ��̒l����͂��Ă�������>");
	scanf("%d" , &var1);
	printf("��r����l����͂��Ă�������>");
	scanf("%d" , &var2);

	r_var = max(var1,var2);
	printf("%d�̂ق����傫���ł�",r_var);

	return 0;
}

int max(var1 , var2)  //�`������
int var1,var2;        //�`������
{
	if (var1 > var2) return var1;
	if (var2 > var1) return var2;
	else return var1;
}
/*
max()�֐��́A�^����ꂽ��̒l���r���A�傫������Ԃ��܂�
max()�֐��̐錾�����ɒ��ڂ��Ă�������
�������X�g�ł͕ϐ���������錾���A���̌セ�̕ϐ��̌^��錾���Ă��܂�
���̂悤�ɁA�`���`���ł͐錾��2���ɂ킽���čs���Ă������Ƃ��킩��܂���
*/