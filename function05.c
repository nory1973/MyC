/*
仮引数
値渡しと参照渡し
引数側で値を受け取る仮引数にも二種類あります
これはＣ言語だけではなく、多くのプログラミング言語でルーチンに情報を渡すのに共通することです

１つは値 (value)を引数に渡す方法です
私たちが今まで関数に渡してきたのがこれになります

もう一つが参照 (reference)を引数に渡す方法です
参照とは、すなわち変数のアドレスです

前者の値を引数に渡すことを値渡しと呼び
後者の参照を引数に渡すことを参照渡しと呼びます

これらの違いは、関数呼び出しもとの変数の操作にかかわってきます
値渡しでは、呼び出し元で指定された値のコピーを仮引数に保存します
関数側で、関数呼び出しもとの変数の値を操作することはできません

参照渡しは引数で変数のアドレスを渡します
関数内で宣言されているローカル変数を他の関数から操作するには、この参照渡しを使います
デフォルトでＣ言語では値渡しを行います
プログラマが意図的に、引数に変数のアドレスを渡すことによって参照渡しが実現できます
*/
#include<stdio.h>

void call_by_value(int );
void call_by_reference(int *);

int main() {
	int var = 10;

	call_by_value(var);
	printf("値渡し後 = %d\n" , var);

	call_by_reference(&var);
	printf("参照渡し後 = %d" , var);

	return 0;
}

void call_by_value(int var) {
	var = 100;  //値渡し
}

void call_by_reference(int *var) {
	*var = 100;   //参照渡し:ポインタに格納されている内容
}
/*
値渡しでは、仮引数にmain()関数の変数varに格納されている
値のコピーが渡されたにすぎません
ということは、いくらcall_by_value()関数内で仮引数varの
値をいじろうとも、main()関数の変数varの値は変わりません

しかし、参照渡しの場合はmain()関数の変数varのアドレスが
渡されています
これをポインタ変数で受け取って、その内容を操作することが
可能です
こうすれば、グローバル変数でなくとも、他の関数から変数を
確実に操作することができます
scanf()関数などで、なぜ&演算子で変数のアドレスを渡してい
たのか、その理由が明らかになりましたね
*/