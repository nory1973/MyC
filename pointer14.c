/*
ポインタ配列
ポインタの配列を扱う
配列をポインタで扱うのではなくて、ポインタの配列を扱います、、、混乱しないでくださいね（笑）
ポインタも変数の一種であるということはもうわかっているはずです
ということは、当然通常の変数のように配列にすることも可能です

前回、文字列定数へのポインタもやりました
やはりこれも配列によってテーブルにできると便利ですよね

ポインタの配列も通常の配列と扱いは変わりません
1次元でも多次元でも、基本的に通常の変数と同じです

型 *ポインタ変数名[];

で宣言することができ、添え字を指定することで格納されているアドレスを引き出せます
もちろんある要素に格納されているアドレスの内容にアクセスすることも可能です

アドレスを参照 , 代入
ary_p[n] = &var;

アドレスの内容を参照 . 代入
*ary_p[n] = var;

見てのとおり、配列の知識とポインタの知識があれば応用的なものなので簡単ですね
*/
#include <stdio.h>

int main() {
        int get_n;
        char *ary[] = { "デ・ジ・キャラット" , "プ・チ・キャラット" , "ラビアンローズ" };
        printf("どんな娘がお好み?\n");
        printf("目からビーム = 1\n突っ込みトラ娘 = 2\nサイコロ少女 = 3\n");
        printf("1〜3の半角英数>");

        scanf("%d",&get_n);
        //printf("%x\n" , &get_n);
        if (( get_n <= 3 ) && ( get_n >= 1)){
                //printf("%x\n" , &ary[get_n - 1]);
                printf("あなたは%sさんが好きなのですね☆" , ary[get_n - 1]);
        }
        else printf("不正な値です");

        return 0;
}
/*
同様に多次元配列でも同じことが言えます
通常の変数での多次元配列が扱えるならば、ポインタの多次元配列も同様に扱えます
文字列テーブルなどは、ポインタの多次元配列で作成すると使いやすいかもしれません
*/