/*
構造体変数と関数
構造体変数も、ローカル変数、グローバル変数の概念は通常の変数と同じです
構造体定義時に宣言された構造体変数などはグローバル変数として、どの関数からも有効ですが
特定の関数内で宣言された構造体変数においては、他の関数では使用できません
たとえば次のプログラムは間違っています
#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
}naru , sinobu;

void func(void);

int main() {
	struct LOVE_HINA motoko;

	naru.name = "成瀬川なる";
	naru.age = 17;
	sinobu.name = "前原しのぶ";
	sinobu.age = 13;
	motoko.name = "青山素子";
	motoko.age = 15;
	
	func();

	return 0;
}

void func() {
	printf("%s",motoko.name);	/*エラー : 未定義のシンボル motoko
    }
構造体変数 sinobu はグローバル変数なので問題はありませんがmain()関数内で
宣言された構造体変数 motoko は func() 関数からは見えません
しかし、単体のメンバであれば、次のように処理することも可能です

#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
}naru , sinobu;

void func(char *);

int main() {
	struct LOVE_HINA motoko;

	naru.name = "成瀬川なる";
	naru.age = 17;
	sinobu.name = "前原しのぶ";
	sinobu.age = 13;
	motoko.name = "青山素子";
	motoko.age = 15;
	
	func(motoko.name);

	return 0;
}

void func(char *name) {
	printf("%s",name);
}

これは、構造体変数のメンバの内容だけを関数に渡しています
その過程は、通常の変数どうしと何ら変わらないので疑問はありませんね
しかし、構造体変数を関数で扱う場合、これはよい対策とは言えません
構造体変数全体の制御を関数で行うには
構造体変数のメンバを関数に渡すのではなく、構造体変数そのものを関数に渡す必要があります

実は、構造体変数を代入できるように、同じ型の構造体変数であれば関数間の受け渡しも可能です
構造体変数を関数に渡すには、仮引数を同じ型にする必要があります
上のサンプルプログラムを例に考えれば、次の関数のプロトタイプは有効です

void func(struct LOVE_HINA);

これで、func()関数は LOVE_HINA 型構造体変数を受け取ることができます
こうすることによって、構造体変数の各メンバの処理を関数で一括することが可能です
*/
#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
}naru , sinobu;

void func(struct LOVE_HINA);

int main() {
	struct LOVE_HINA motoko;

	naru.name = "成瀬川なる";
	naru.age = 17;
	sinobu.name = "前原しのぶ";
	sinobu.age = 13;
	motoko.name = "青山素子";
	motoko.age = 15;
	
	printf("名前\t\t年齢\n");
	func(naru);
	func(sinobu);
	func(motoko);

	return 0;
}

void func(struct LOVE_HINA hina) {
	printf("%s\t%d\n",hina.name , hina.age);
}
/*
func()関数はLOVE_HINA型構造体変数を受けとり、メンバを出力する関数です
関数に構造体変数を渡すことによって、面倒な画面出力作業を一括できましたね
これで、func()関数に構造体変数を渡せば、勝手に出力してくれます
当然、ローカル変数の壁も破ることができました
main()関数で宣言された構造体変数を、別関数で受け取って処理することができます
*/