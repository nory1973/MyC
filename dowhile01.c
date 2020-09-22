#include <stdio.h>

int main()
{
        int count = 1;
        int max;

        printf("繰り返す回数を指定してください\n");
        scanf("%d",&max);

        do {
                printf("%d回目のループです\r" , count);
                count++;
        } while (count <= max);

        printf("\nプログラムを終了します");
        return 0;
}

/*
do ～ whileループ
whileに似たループで doステートメント があります
whileステートメントと特別な違いはありませんが、ひとつだけ大きく異なる部分があります
それはステートメントを実行したあとで式を評価するということです

whileやforステートメントでは、式を評価してからループを行ないました
そのため実行の時点で評価が偽であれば、ステートメントを一度も実行しませんでした

たとえ評価がどのような形であれ、最低でも一度は実行してほしい場合にdoは威力を発揮します
doステートメントは実行ステートメントが先にあり、その後に繰り返すかどうかを判定します

do ステートメント while (条件式);

ただし、doステートメントの場合は一般的に単体のステートメントを繰り返しに指定しません
可読性などを考慮して一行でもコードブロックを意図的に使用します

doを用いれば、たとえ0を入力されても必ず1度はステートメントが実行されます
プログラムの用途によって使い分けてください

while (expression) statement
statementをexprが真であるあいだ繰り返します

expression 評価する式を指定します

statement exprが真である間、くり返しすステートメントを指定します

do statement while (expression);
statementを実行したあとに条件式を評価します

statement exprが真である間、くり返すステートメントを指定します

expression 評価する条件式を記述してください
*/