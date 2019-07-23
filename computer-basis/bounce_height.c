/*
 * @Author: huangsh
 * @Date: 2019-07-23 13:29:37
 * @Description: 求反弹高度（2016/三（4））
 */

#include <stdio.h>

int main() 
{
    float height = 100, sum_height=-100;

    for (int i = 0; i < 10;i++)
    {
        sum_height += height * 2;
        height = height / 2;
    }
    printf("第10次落地共经过%.2f米，第10次反弹高度为：%.2f", sum_height, height);
    return 0;
}