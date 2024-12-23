// 指示された個数だけ整数を読み込んで合計値と平均値を表示（中断あり）

#include <stdio.h>

int main(void)
{
	int num;

	printf("整数は何個：");
	scanf("%d", &num);
	printf("終了は-9999\n");

	int i;
	int sum = 0; // 合計値を初期化
	// ここにfor文を追加してください
	for (i = 0; i<num; i++)
	{
		int tmp;
		printf("No.%d：", i + 1);
		scanf("%d",&tmp);// ここに整数を読み込む処理を書いてください

		// ここに中断条件を書く処理を書いてください
		if (tmp == -9999) {
			break;
		}
	
// ここに合計値を加算する処理を書いてください
			sum += tmp;
		}
	printf("合計値：%d\n", sum);
	printf("平均値：%.2f\n", (double)sum / i);

	return 0;
	
}
