#include <stdio.h>

int main()
{
        int bool1,bool2;

        printf("0��1����͂��Ă�������\n");
        scanf("%d",&bool1);
        printf("AND�ŕ]�����܂��A0��1����͂��Ă�������\n");
        scanf("%d",&bool2);
        printf("������ %d �ł�",(bool1) && (bool2));

        return 0;
}

/*
1��1�A�܂�^�Ɛ^�ł������ꍇ�̂�1���Ԃ���邱�ƂɋC�Â��Ă�������
�o���̎������������ꍇ�ɂ̂ݐ^��Ԃ��A�܂�AND�Ȃ̂ł�

���ɘ_���a(OR)���Z�q || ���w�K���܂��傤
����͈���ɐ^������ΐ^��Ԃ��܂�
�t�ɂ����΁A�o�����U�̏ꍇ�̂݋U��Ԃ��܂�
#include <stdio.h>

int main()
{
        int bool1,bool2;

        printf("0��1����͂��Ă�������\n");
        scanf("%d",&bool1);
        printf("OR�ŕ]�����܂��A0��1����͂��Ă�������\n");
        scanf("%d",&bool2);
        printf("������ %d �ł�",(bool1) || (bool2));

        return 0;
}
����ɐ^�i0�ȊO�j����͂����OR��1��Ԃ��܂�
�������o�����^�ł�1��Ԃ��܂�
*/