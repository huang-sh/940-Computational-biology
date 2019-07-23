/*
 * @Author: huangsh
 * @Date: 2019-07-23 13:50:31
 * @Description: 将正整数转换为二进制（2015/三）
 */

#include <stdio.h>
#include <stdlib.h>



int main() 
{
    int idx=0, num, x, bin[20]={0};
    printf("请输入一个正整数：");
    scanf("%u", &num);
    if (num<=0)
    {
        printf("请输入一个正整数(>0)");
        exit(1);
    }
    x = num;
    while (x)
    {
        bin[idx++] = x % 2;
        x = x / 2;
    }
    printf("二进制形式：");
    for (int i = idx-1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
    putchar('\n');

    return 0;
}