/*
続・構造体
配列型構造体変数
構造体変数は、他のデータ型同様に配列にすることができます

struct タグ名 構造体変数名[配列数];

配列型の各構造体変数にアクセスするには、構造体変数に添え字を指定します
また、各構造体変数の特定のメンバにアクセスするには添え字指定の後にドット演算子とメンバ名を指定します

構造体変数名[添え字].メンバ名

扱いは基本的に通常の配列と同じですね
次のプログラムを参照して、配列型構造体変数の宣言とアクセスに注目してください
*/
#include <stdio.h>

struct LOVE_HINA {
        char *name;
        int age;
};

int main() {
	int ary_index;
	struct LOVE_HINA structNA[3];

	structNA[0].name = "成瀬川なる";
	structNA[0].age = 17;
	structNA[1].name = "前原しのぶ";
	structNA[1].age = 13;
	structNA[2].name = "青山素子";
	structNA[2].age = 15;

	printf("なる = 0 , しのぶ = 1 , 素子 = 2>");
	scanf("%d", &ary_index);
	if ((ary_index >= 0) && (ary_index <= 2)) {
		printf("名前\t\t年齢\n");
		printf("%s\t%d" , structNA[ary_index].name , structNA[ary_index].age);
	}
	else printf("エラー : その番号のデータはありません");

	return 0;
}
/*
構造体変数を配列にすることによって、簡易にユーザーにアクセスする構造体を選択させることができました
このように、大量のデータを扱うことが予想される構造体において、配列は重要な要素です
*/