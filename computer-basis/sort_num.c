/*
 * @Author: huangsh
 * @Date: 2019-07-23 11:40:08
 * @Description: 排序三个数字。（2016/三（2））
 */

#include <stdio.h>

int main() 
{
    float num[3], temp;
    for (int i = 0; i < 3; i++)
    {
        printf("请输入数字%d：", i+1);
        scanf("%f", &num[i]);
    }
    for (int i = 2; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }            
        }
    }
    for (int i=0; i<3; i++) 
    {
        printf("%.3f ", num[i]);
    }
    putchar('\n');
    return 0;
}

