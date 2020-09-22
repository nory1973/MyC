/*
文字列定数へのポインタ
ダブルクォーテーションで囲った文字列定数は、配列で詳しく勉強しましたね
ここでは、さらにその文字列に対するポインタの説明をします

文字列定数とポインタの関係は、難しいものではありません
しかも、かなり便利に使うことができるので非常に大切です
宣言は簡単で、文字型ポインタ変数を宣言します
こうすることで、そのポインタ変数は文字型（1バイト）の配列を指すことになります

次に、このポインタにダブルクォーテーションで囲まれた文字列定数を代入します
すると、文字列テーブルに文字列を格納してその先頭アドレスがポインタに代入されます
*/
#include <stdio.h>

int main() {
        char *str = "kitty on your lap";

        printf("先頭アドレス = %c\n",*str);
        printf("格納文字列 = %s" , str);

        return 0;
}
/*
結果はいともあっさり次のように表示されます

先頭アドレス = k
格納文字列 = kitty on your lap
*/
