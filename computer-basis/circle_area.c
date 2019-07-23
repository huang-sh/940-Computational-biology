/*
 * @Author: huangsh
 * @Date: 2019-07-23 11:30:46
 * @Description: 计算圆的半径和周长（2016/三（1））
 */

#include <stdio.h>

#define pi 3.14

int main() 
{
    float r, S, C;    
    printf("请输入圆的半径(r)：");
    scanf("%f", &r);
    S = pi * r * r;
    C = 2 * r * pi;
    printf("圆的面积（S）: %.3ff\n", S);
    printf("圆的周长（C）: %.3ff\n", C);
    return 0;
}
