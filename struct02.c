/*
構造体変数ごとにまったく別のメンバ変数が割り当てられているかどうかは、アドレスを出力させればわかりますね
構造体変数のメンバのアドレスを得るには次のように記述します

&構造体変数名.メンバ名

構造体の各メンバのアドレスの取得は、メンバ名の前ではなく構造体変数名の前に&演算子を用います
こうすれば、メンバ変数にscanf()関数を使って値を入力させることもできますね
*/
#include <stdio.h>

struct {
        char *name;
        int age;
}naru , sinobu;

int main() {
        printf("naru.name = %x\nnaru.age = %x\n" , &naru.name , &naru.age);
        printf("sinobu.name = %x\nsinobu.age = %x\n" , &sinobu.name , &sinobu.age);

        return 0;
}
/*
それぞれまったく別のアドレスが返ってきます
構造体変数 naru と sinobu は、同じ構造体であるというだけで、メンバの実体は異なります
*/