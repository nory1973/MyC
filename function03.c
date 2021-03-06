/*より確実にこの事実を確認するには、変数のアドレスを調べれば良いですね
同じ変数名でも、アドレスが違うのならばそれはまったく別の変数といえます
*/
#include<stdio.h>

void func(void);

int main() {
        int var;
        printf("main()関数のvar = %x\n" , &var);
        func();

        return 0;
}

void func() {
        int var;
        printf("func()関数のvar = %x" , &var);
}
/*
得られるアドレスは異なるはずです
認識しなければいけいないのは 関数内で宣言された変数はその関数内でのみ有効ということです

それと、もう一つローカル変数で重要なことは関数終了時に消滅するということです
関数が一連の作業を終えて呼び出し元に復帰した時点で、その関数で使われた変数は消滅し
再び呼び出せば、宣言にしたがって作成されます
*/