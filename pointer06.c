/*
もう一つ注意ですが、間接参照でインクリメントする場合には注意が必要です

*po++

とやると、多くの人の期待に反した結果が得られると思われます
このときは、アドレスが指す変数ではなくポインタの値がインクリメントされてアドレスを参照されます
結果的に *po++ だけではポインタが格納している値をインクリメントしたが、参照する意味がないので処理系によっては警告が出ます
（代入文の場合、=よりインクリメントの方が優先度が低いので結局意味をもちません）

もし、間接参照でアドレスの変数の内容に対してインクリメントやデクリメントしたい場合は以下のようにします

(*po)++;

これでポインタ変数poが指す値がインクリメントされます
*/
#include <stdio.h>

int main()
{
        int ary[2] = { 1000 , 2000 };
        int *po;

        po = &ary[0];
        (*po)++;
        printf("%d", ary[0]);

        return 0;
}
