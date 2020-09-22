/*
より繊細なデータ型
変数の章で、符号付データと符号なしデータの指定が可能であることに触れました
ここでは、このデータ型の用途に応じて、より細かく変数を指定しましょう

C言語にはvoid型を除いて、4つのデータ型がありました
char int float double の四つです

型宣言子の前に、型修飾子を指定することでそのデータ型を用途に応じてきめ細かく指定できます
これまで私たちが使ってきた代表的な型修飾子が unsigned です
これは、その型が符号なしであることを明示的にして正の数の領域を多く確保するものでした

他にも以下のような修飾子があります
signed
unsigned
long
short

longとshortはint型に適応します
shortはint型よりも小さくlongはint型より大きい領域を確保します
int型では処理しきれない大きなデータや、逆に少量のデータで処理できる場合などの用途で使い分けます
確保される領域は正確に定められていません。環境やコンパイラで異なるので注意してください

longはdouble型にも適応します
これもlong int同様にdoubleよりも大きい領域を確保します

もちろん符合なしのshort int型というのも宣言できます
その場合は unsigned short int と記述します
言うまでもありませんが unsigned long int や signed short int や signed long int もあります

C言語では、型修飾子指定時にintを省略することができます
unsigned int , short int , long intはintを省略しても意図どうりのデータ型が宣言できます

unsigned int var;
unsigned var;

上の二つの宣言は、まったく同じことです

代入は、そのままデータ型にあわせて値を代入するだけですが
printf()関数で明示的にデータを出力するには %d だけではうまくいかないことがあります

unsigned = %u
short = %hd
long = %ld
unsigned long = %lu
long double = %Lf

以上の書式を頭に入れておき、以下のプログラムを参照してください
*/
#include <stdio.h>

int main()
{
        short var1 = 32767;
        long var2 = 32768;
        unsigned short var3 = 40000;
        unsigned long var4 = 4294967295;
        long double var5 = 123456.789;

        printf("%hd\n",var1);
        printf("%ld\n",var2);
        printf("%u\n",var3);
        printf("%lu\n",var4);
        printf("%Lf",var5);

        return 0;
}
/*
intの省略記法を用いてます
ただし、型修飾子で割り当てられるデータサイズはコンパイラなどによって異なります
*/