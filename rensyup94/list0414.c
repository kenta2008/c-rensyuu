// 指示された個数だけ整数を読み込んで合計値と平均値を表示

#include <stdio.h>

int main(void)
{
	int num;

	printf("整数は何個：");
	scanf("%d", &num);

	int sum = 0; // 合計値を初期化
	for(int i = 1; i<=num; i++) {// ここにfor文を書いてください
		int tmp;
		printf("No.%d：", i);
		scanf("%d",&tmp);// ここに整数を読み込む処理を書いてください

		sum+=tmp;// ここに合計値に加算する処理を書いてください
	}
	printf("合計値：%d\n", sum);
	printf("平均値：%.2f\n", (double)sum / num);

	return 0;
}
