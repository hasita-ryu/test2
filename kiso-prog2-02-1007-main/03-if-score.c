// if文で、60点以上なら10点、それ以外は0点を求める
#include <stdio.h>

/*int main(void)
{
    int score = 75;
    int point;

    if (score >= 60) {
        point = 10;
    } else {
        point = 0;
    }

    printf("%d\n", point);
    return 0;
}*/


int main(void)
{
    int score = 30;
    int point;

    if (score >= 60) {
        printf("合格");
    } else {
        printf("不合格");
    }

    return 0;
}
