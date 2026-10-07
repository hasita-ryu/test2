// 三項演算子で表示する文字列だけを選び、printfは1回だけ書く
#include <stdio.h>

int main(void)
{
    int score = 75;

    printf("%s\n", (score >= 60) ? "合格" : "不合格");
    return 0;
}
