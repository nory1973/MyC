/*
構造体変数の代入
双方が同じ型の構造体変数であれば、構造体変数を他の構造体変数に代入することができます
このとき、対象となる構造体変数には当然メンバの内容も継承されます

構造体変数1 = 構造体変数2;

こうすると、構造体変数1は構造体変数2とまったく同じ物になります
このような代入を行うことで、簡易に構造体変数のコピーを取ることができますね
*/
#include <stdio.h>

struct copy {
        char str[128];
        int var1;
        double var2;
}st_var1;

int main() {
        struct copy st_var2;

        printf("文字列の入力>");
        scanf("%s" , st_var1.str);
        st_var1.var1 = 100;
        st_var1.var2 = 10.1435;

        st_var2 = st_var1;

        printf("st_var1.str = %s\n" , st_var1.str);
        printf("st_var1.var1 = %d\n" , st_var1.var1);
        printf("st_var1.var2 = %g\n" , st_var1.var2);

        printf("st_var2.str = %s\n" , st_var2.str);
        printf("st_var2.var1 = %d\n" , st_var2.var1);
        printf("st_var2.var2 = %g" , st_var2.var2);

        return 0;
}
/*
構造体定義時に構造体変数st_var1を宣言し、main()関数でst_var1の各メンバを初期化しています
次にmain()関数で宣言された st_var2 構造体変数に st_var2 = st_var1 でst_var1を代入します
st_var2の各メンバ変数を出力した結果、st_var1のメンバ変数の内容とまったく同じと思われる結果がえられます
こうすれば、容易に構造体変数のコピーを取れますね
*/