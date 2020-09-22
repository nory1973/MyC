/*
構造体ポインタ
アロー演算子
構造体変数を引数として渡したり、戻り値として受け取る方法はわかりました
しかし、構造体はその仕様から、実用的なプログラムの場合は相当な領域を使用することが考えられます

サイズの大きな構造体変数を関数に値渡しするのは合理的ではありません
時間もかかるし、容量（スタックといいます）も必要です
ということは参照渡しが望ましいということになります

構造体変数の受け渡しは、通常は参照渡しで行われます
構造体変数を参照渡しするには構造体変数のポインタが必要です
構造体のポインタの宣言方法は、通常のポインタ同様に * 演算子を使用します

struct tag-name *reference;

問題はアクセス方法です。構造体のポインタはドット演算子は使えません
代わりに、構造体変数がポインタであることを明示的に表すアロー演算子 ( -> )を用います
アロー演算子は マイナス記号 - と大なり記号 > で構成されます

reference->member

次のプログラムは、ごく簡単なポインタ型構造体変数の宣言と
ポインタ型構造体変数からメンバへのアクセスを試みたサンプルです
#include <stdio.h>

struct {
        int var;
}obj , *po;

int main() {
        po = &obj;
        obj.var = 100;

        printf("%d" , po->var);

        return 0;
}
ポインタによる構造体変数の参照渡しであれば、実行速度に深刻な問題を及ぼすことなく
構造体を関数で処理することによって作業の効率化をはかれます
*/
#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
};

struct LOVE_HINA LOVE_HINA(char * , int);
void write(struct LOVE_HINA *);

int main() {
	struct LOVE_HINA naru = LOVE_HINA("成瀬川なる", 17);
	struct LOVE_HINA sinobu = LOVE_HINA("前原しのぶ" , 13);
	printf("名前\t\t年齢\n");
	write(&naru);
	write(&sinobu);

	return 0;
}

struct LOVE_HINA LOVE_HINA(char name[] , int age) {
	struct LOVE_HINA obj;
	obj.name = name;
	obj.age = age;
	return obj;
}

void write(struct LOVE_HINA *obj) {
	printf("%s\t%d\n" , obj->name , obj->age);
}
/*
write()関数の定義を見てください
仮引数では、ポインタで構造体変数を受け取っています
そして、printf()関数の引数ではポインタ型構造体変数なのでアロー演算子でメンバにアクセスしています

main()関数からwrite()関数の呼び出し時には、構造体変数のアドレスを渡していることも注目してください
*/