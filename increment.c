#include <stdio.h>

int main() {
	int var1 = 0 , var2 = 0;
	printf("��u�C���N�������g���Z�q = %d\n" , var1++);
	printf("�O�u�C���N�������g���Z�q = %d\n\n" , ++var2);
	printf("��u�f�N�������g���Z�q = %d\n" , var1--);
	printf("�O�u�f�N�������g���Z�q = %d\n\n" , --var2);

	printf("var1 = %d var2 = %d" , var1 , var2);
	return 0;
}