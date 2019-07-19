/*
 * @Author: huangsh
 * @Date: 2019-07-19 21:51:45
 * @Description: 求桃子总数。（2017/五）
 */

#include <stdio.h>

int main() 
{
    int sum = 1, days = 9;

    for (int j = 0; j < days;j++)
    {
        sum = (sum + 1) * 2;
    }
    printf("第一天桃子数是： %d", sum);
    return 0;
}