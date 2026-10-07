// 三項演算子で、2つの数のうち大きい方を求める
#include <stdio.h>

int main(void)
{
    int a = 8;
    int b = 3;
    int max = (a > b) ? a : b;

    printf("%d\n", max);
    return 0;
}
