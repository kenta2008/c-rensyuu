/*
1から指定された整数までの和を求める
問題文：
プログラムを作成し、1から指定された整数までの合計を計算して表示しなさい。整数はユーザーから入力します。
ヒント：
for文を使いましょう。
合計を格納する変数を初期化して使います。
*/
#include <stdio.h>

int main(void)
{
    int n; // 入力された整数

    printf("1からどこまでの合計を計算しますか？：");
    scanf("%d", &n);

    int sum = 0; // 合計を格納する変数

    // ここにfor文を使った処理を追加

    printf("1から%dまでの合計は%dです。\n", n, sum);

    return 0;
}
