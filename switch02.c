#include <stdio.h>

int main()
{
	char var;

	printf("今日の奈美はどこかおかしい\n突然不安にかられた僕は…\n\n");
	printf("A\t「奈美ぃーー！どこだ、返事をしろー！！」\n");
	printf("\t僕は奈美を必死で探した\n\n");
	printf("B\t「猫耳ィー！どこだ、でじこーーー！！」\n");
	printf("\t僕は男のロマンを叫んだ\n");

	scanf("%c" , &var);

	switch(var) {
	case 'A':
		printf("まぁ、何をしたって屋敷は燃えるんだよね…\n僕はプレイヤーとして諦めた");
		break;
	case 'B':
		printf("やはりこの世で最も美しいのは猫耳だ\n今日、改めてそれを確信した");
		break;
	default:
		printf("AかBを選択してにょ");
	}

	return 0;
}
//また、caseが持つ定数は文字でもかまいません
//C言語では、１つの文字を表現するのにはシングルクォーテーションを使うんでしたね
//もちろんswitchで使うときも同様です
