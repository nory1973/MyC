#include <stdio.h>

int main()
{
        int count = 0;

        while (count <= 50) {
                printf("/");
                if (count == 25) printf("\n\t猫耳愛！\n");

                count++;
        }
        printf("\nループを抜けました、プログラムを終了します");
        return 0;
}

//switchでやったbreakステートメントを使って抜け出しています
//breakは現在のループから離脱するステートメントでしたね

//次は、もっとも一般的な方法でループを抜けてみましょう
//これは、for同様にwhileの式で上限を決めてループの中でインクリメントを使います