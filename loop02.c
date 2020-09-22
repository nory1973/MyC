
#include <stdio.h>

int main()
{
        int count;
        int max;

        printf("ループ回数を指定してください\n");
        scanf("%d",&max);

        for (count = 0 ; count < max ; count++) {
                printf("%d回目です\r" , count);
                if (count == 5000) {
                        printf("5000回目を越えたので強制終了します\n");
                        count = max;
                }
        }
        printf("ループを抜けました");
        return 0;
}

//for(カウンター ; 判定 ; ステップ) { ステートメント }
//for( [init-expr]; [cond-expr]; [loop-expr] ) statement;
//statementをcond-exprが真であるかぎり繰り返します
//statementは単一行以外にコードブロックも指定できます

//init-expr 省略可能です。変数の初期化を行ないます

//cond-exor 省略可能です。繰り返すごとに評価する条件式を指定します。ここが真であるかぎり繰り返します

//loop-expr 省略可能です。繰り返すごとに実行する式を指定します

//statement 繰り返すごとに実行するステートメントを指定します