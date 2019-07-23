/*
 * @Author: huangsh
 * @Date: 2019-07-23 18:47:20
 * @Description: 判断素数 （2015/六）
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    long int num;
    int idx=2;
    float k;
    printf("请输入一个正整数: ");
    scanf("%ld", &num);
    if (num<=0)
    {
        printf("请输入一个正整数（>0）");
        exit(1);
    }
    k = sqrt(num);
    for (; idx < k; idx++)
    {
        if (num % 2 == 0)
        {
            break;
        }
    }
    if (num <= 1 || idx <= k)
    {
        printf("%ld 不是素数!", num);
    }
    else 
    {
        printf("%ld 是素数!", num);
    }
    return 0;
}
