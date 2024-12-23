// 読み込んだ整数値以下の偶数を表示

#include <stdio.h>

int main(void)
{
	int n;
	
	printf("整数値：");
	scanf("%d", &n);

	// ここにfor文を書いてください
	for(int i = 2; i <= n; i+=2) {
		// ここに偶数を表示する処理を書いてください
		printf("%d",i);
		putchar('\n');
	}
	return 0;
}
