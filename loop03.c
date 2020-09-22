/*
の式を持つfor文
for制御は、高度なプログラムになってくればさまざまな用途が考えられます
そのひとつとして、for文の変数の初期化屋敷は省略することができるという柔軟性です
for文のリファレンスにも省略可能であると書いておきました

たとえば以下のプログラムは変数の初期化を省略したforステートメントです
*/
#include <stdio.h>

int main()
{
        int count;
        count = 0;

        for ( ; count <= 10 ; count++) {
                printf("%d回目のくり返しです\n",count);
        }
        return 0;
}
/*
もちろん、いっそのこと全てを省略してしまうことも可能です
#include <stdio.h>

int main()
{
        int count;
        count = 0;

        for (;;) {
                count++;
                printf("%d回目のくり返しです\n",count);
                if (count >= 10) break;
        }
        return 0;
}
for文は文字列操作などによく活用されます、forによる柔軟なループ制御のスキルは大切です
これまでの制御文や演算子を活用して、さまざまなプログラムを試してください
*/