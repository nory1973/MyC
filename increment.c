#include <stdio.h>

int main() {
	int var1 = 0 , var2 = 0;
	printf("後置インクリメント演算子 = %d\n" , var1++);
	printf("前置インクリメント演算子 = %d\n\n" , ++var2);
	printf("後置デクリメント演算子 = %d\n" , var1--);
	printf("前置デクリメント演算子 = %d\n\n" , --var2);

	printf("var1 = %d var2 = %d" , var1 , var2);
	return 0;
}