/*
構造体変数の宣言は、構造体変数リストで一括して行っていましたが
あとで関数内で宣言する必要が出てくるかもしれません
そのような場合はタグ名をつけることで、後から構造体変数を生成することができましたね

struct タグ名 追加構造体変数名;

先ほどのプログラムに、さらにmain()関数内で motoko を追加してみましょう
*/
#include <stdio.h>

struct LOVE_HINA {
        char *name;
        int age;
}naru , sinobu;

int main() {
        struct LOVE_HINA motoko;
        naru.name = "成瀬川なる";
        naru.age = 17;
        sinobu.name = "前原しのぶ";
        sinobu.age = 13;
        motoko.name = "青山素子";
        motoko.age = 15;

        printf("名前\t\t年齢\n");
        printf("%s\t%d\n" , naru.name , naru.age);
        printf("%s\t%d\n" , sinobu.name , sinobu.age);
        printf("%s\t%d\n" , motoko.name , motoko.age);

        return 0;
}
/*
C言語ではstructキーワードを明示的に使わなければ、構造体変数を宣言できません
C++では、型が定義されていれば省略できるのでC++ユーザーには注意が必要です
いじょうが基本的な構造体の使い方です
次の章では、より細かい構造体の仕様を調べてみましょう

struct [tag] { member-list } [declarators];
構造体を定義します

tag - 構造体のタグ名を指定します（省略可）
member-list - メンバを定義します
declarators - 構造体変数を宣言します(省略可)

[struct] tag declarators;
構造体変数を宣言します
structキーワードはC++の場合のみ、省略できます
Ｃ言語の場合、省略するとエラーになるので注意が必要です

teg - 構造体のタグ名を指定します
declarators - 構造体変数を宣言します
*/