// 同じビット列 1111 1011 を、符号付きと符号なしで読んだときの違いを確かめる
#include <stdio.h>

int main(void)
{
    signed char x = -5;
    unsigned char y = x;
    printf("%d %d\n", x, y);
    return 0;
}
