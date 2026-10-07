// 符号付きcharの最大値127に1を足すと、どうなるかを確かめる
#include <stdio.h>

int main(void)
{
    signed char c = 127;
    c++;
    printf("%d\n", c);
    return 0;
}
