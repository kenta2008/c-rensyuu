// 読み込んだ整数の個数だけ＊を連続表示（for文）

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数：");
	scanf("%d", &no);

	// ここにfor文を書いてください
	for (int a=0; no>a;a++){
		printf("*");// ここに＊を表示する処理を書いてください
		putchar('\n');
}
	return 0;
}
