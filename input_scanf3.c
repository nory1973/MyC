#include <stdio.h>

int main()
{
        char str;
        int get_int;

        printf("�����R�[�h�̎d�g�𒲂ׂ܂��B1�������͂��Ă�������\n");
        scanf("%c" , &str);

        printf("\n���̓R�[�h\t= %c\n" , str);
        printf("�R�[�h��10�i��\t= %d\n" , str);
        printf("�R�[�h��16�i��\t= %x\n" , str);

        printf("\n�R�[�h�ɉ��Z�������萔�𔼊p�p���œ��͂��Ă�������\n");
        scanf("%d" , &get_int);

        printf("\n���̓R�[�h\t= %c\n" , str + get_int);
        printf("�R�[�h��10�i��\t= %d\n" , str + get_int);
        printf("�R�[�h��16�i��\t= %x\n" , str + get_int);

        return 0;
}