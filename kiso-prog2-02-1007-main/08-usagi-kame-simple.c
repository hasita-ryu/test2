// 偶数番目はウサギ、奇数番目はカメを三項演算子で選んで表示する（課題の出発点）
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 20; i++) {
        printf("%2d: %s", i, (i % 10 == 0) ? "休憩する" : " ");
        printf("%s", (i % 2 == 0) ? "ウサギ\n" : "カメ\n");
    }
    return 0;
}
