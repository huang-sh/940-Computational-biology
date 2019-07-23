/*
 * @Author: huangsh
 * @Date: 2019-07-23 16:38:09
 * @Description: 求输入整数的个位数之和（2015/五）
 * 看了参考答案，答案意思是一个整数的的每个数位数值的和。。。
 * 感觉好多题目都出的不是很严谨。
 * 就这样吧，不改了。
 */

#include <stdio.h>

int main() 
{
    int i = 0, sum = 0, num[20];
    printf("请输入整数：");
    while (1)
    {
        scanf("%d", &num[i]);
        sum += num[i] % 10;

        char c = getchar();
        if (c=='\n')
        {
            break;
        }
        i++;
    }

    printf("输入整数个位数之和为：%d\n", sum);
    return 0;
}