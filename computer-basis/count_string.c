/*
 * @Author: huangsh
 * @Date: 2019-07-17 13:22:09
 * @Description: 计算字符串长度。
 */

#include <stdio.h>

int count_str(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[50];
    int count;

    printf("请输入一个字符串：");
    gets(str);

    count = count_str(str);
    printf("字符长度为：%d", count);
    return 0;    
}
