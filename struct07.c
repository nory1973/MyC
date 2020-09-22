/*
さらに、戻り値で構造体変数を返すこともできます
方法は、やはり同じく戻り値の型を構造体の型に合わせます
上のLOVE_HINA構造体の場合は次のようにすれば良いですね

struct LOVE_HINA func(void);

これを利用すれば、面倒な構造体変数の初期化を一括することができます
たとえば、引数でメンバに初期化する値を受け取り、後は構造体変数を返せばよいのです
構造体変数は、同じ型の構造体変数であれば代入することができましたね
*/
#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
}naru , sinobu;

void func(struct LOVE_HINA);
struct LOVE_HINA LOVE_HINA(char * , int);

int main() {
	struct LOVE_HINA motoko;

	naru = LOVE_HINA("成瀬川なる" , 17);
	sinobu = LOVE_HINA("前原しのぶ" , 13);
	motoko = LOVE_HINA("青山素子" , 15);
	
	printf("名前\t\t年齢\n");
	func(naru);
	func(sinobu);
	func(motoko);

	return 0;
}

void func(struct LOVE_HINA hina) {
	printf("%s\t%d\n",hina.name , hina.age);
}

struct LOVE_HINA LOVE_HINA(char *name , int age) {
	struct LOVE_HINA hina;
	hina.name = name;
	hina.age = age;

	return hina;
}
/*
このプログラムでは、構造体変数を初期化するための関数 LOVE_HINA() を作りました
これで、何個構造体変数を作ろうとも、この関数を呼び出すだけなのでかなり作業効率を上げられますね

関数の名前がタグ名と同じであることにも注目してください
関数名と構造体タグ名は衝突しません

さらに、LOVE_HINA()関数を見ると、仮引数の変数名がメンバ名と同じです
しかし、メンバは構造体変数によって呼び出されるもののためメンバと変数名の衝突もありません
*/