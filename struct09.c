/*
構造体のネスト
構造体変数型のメンバ
構造体のメンバ変数には、通常の変数だけではなく構造体型変数をメンバにすることもできます
このことを構造体のネストといいます

構造体のネストは、やはりそれに似たグループ関係を表現するのに適しています
これによって、膨大な事業数と従業員をもつ企業用データベースも表現できます
struct base {
	int a;
};
struct sec {
	struct base obj1;
}obj2;
構造体 sec のメンバは 構造体 base の構造体変数です
secの構造体変数 obj2 から base のメンバ変数 a にアクセスするには次のようにします

obj2.obj1.a

必ず外側から内側へ参照していきます
obj1とobj2の順番を逆にすることはできません
obj1はobj2のメンバ変数であることを認識してください
*/
#include <stdio.h>

struct Param {
	char *name;
	int age;
};

struct LOVE_HINA {
	struct Param hina;
}naru , sinobu;

struct LOVE_HINA2 {
	char *tabacco;
	struct Param hina;
}haruka;

void Param(struct Param * , char * , int);

int main() {
	printf("名前\t\t年齢\n");
	Param(&naru.hina , "成瀬川なる" , 17);
	Param(&sinobu.hina , "前原しのぶ" , 13);
	Param(&haruka.hina , "浦島はるか" , 27);
	haruka.tabacco = "マルボ○";
	printf("はるかさん、タバコは%sらしい…" , haruka.tabacco);

	return 0;
}

void Param(struct Param *obj , char *name , int age) {
	obj->name = name;
	obj->age = age;
	printf("%s\t%d\n" , obj->name , obj->age);
}
/*
構造体 Param をネストしています
LOVE_HINA , LOVE_HINA2 構造体のメンバに Param 型のメンバ変数が確認できますね
構造体をネストすることによって、特定のメンバを他の構造体に継承させることができます（オブジェクト指向の継承とは関係ありません）

このようにすれば、似たメンバを持つ構造体を何度も作成する必要がなくなります
ポインタ型の構造体変数と、ネストされた構造体変数が混ざると少しややこしくなりますが
その場合はアロー演算子とドット演算子が混ざります
#include <stdio.h>

struct test {
        int a;
};

struct {
        struct test base;
}obj , *po;

int main() {
        obj.base.a = 100;
        po = &obj;
        printf("%d" , po->base.a);
        return 0;
}
po->base.a に注目してください
冷静に考えれば、これまでやってきたことの積み重ねなのでなんてことはありません
*/
