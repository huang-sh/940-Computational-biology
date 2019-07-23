/*
 * @Author: huangsh
 * @Date: 2019-07-23 12:48:41
 * @Description: 分数等级输出。（2016/三（3））
 */

#include <stdio.h>

int main() 
{
    float score;
    printf("请输入分数（0-100）：");
    scanf("%f", &score);
    if ( score>=0 && score<=100)
    {
        if (score>=90)
        {
            printf("等级：A");
        }
        if (90 > score && score >= 80)
        {
            printf("等级：B");
        }
        if (80 > score && score>=70)
        {
            printf("等级：C");
        }
        if (70 > score && score>=60)
        {
            printf("等级：D");
        }
        if (score<60)
        {
            printf("等级：E");
        }
    }
    else
    {
        printf("请输入0-100以内的分值\n");
    }

    return 0;
}