/*
 * @Author: huangsh
 * @Date: 2019-07-22 22:31:55
 * @Description: 求某点建筑高度。（2017/四）
 * 这题目说得有点绕，得跟脑筋急速转弯似的。。。
 * 两只直角边的平方和=第三边=半径的平方
 * pi*r^2 = pi * (a^2 + b^2)
 */

#include <stdio.h>

int main() 
{
    int h;
    float x, y, a, b, c, d;
    printf("请输入坐标(x,y)：");
    scanf("%f,%f", &x, &y);

    a = (x - 2) * (x - 2) + (y - 2) * (y - 2);
    b = (x + 2) * (x + 2) + (y - 2) * (y - 2);
    c = (x - 2) * (x - 2) + (y + 2) * (y + 2);
    d = (x + 2) * (x + 2) + (y + 2) * (y + 2);

    if (a<=1 || b<=1 || c<=1 || d <=1)
    {
        h = 10;
    }
    else
    {
        h = 0;
    }
    printf("建筑高度为：%d", h);

    return 0;
}
