#include <stdio.h>

int main()
{
	int var;

	printf("あなたは猫耳が好きですか?\n");
	printf("はい = 1\tいいえ = 2\t兎耳のほうが… = 3\n");

	scanf("%d",&var);

	switch (var) {
	case 1:
		printf("同士よ、共に全宇宙を猫耳に染めようぞ！");
		break;
	case 2:
		printf("それじゃアキバは歩けないぜ、旦那");
		break;
	case 3:
		printf("ウサギちゃんか…耳で空飛ぶんだぞ！");
		break;
	default:
		printf("指定した数を選択してください");
	}
	return 0;
}
//ここで大切なことは、caseで指定できるのは定数ということです
//if文では条件式を評価して実行することができましたが、switchのcaseで指定できるのは定数です
//このプログラムでは、入力された値 var をswitchの比較に用いています
//case 1: はvarに代入されている内容が1だった時にbreakまで、もしくは文の最後まで実行されます
//注意としては、switchステートメントのcaseの定数で同じ値は使えないということです