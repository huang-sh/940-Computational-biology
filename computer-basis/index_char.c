/*
 * @Author: huangsh
 * @Date: 2019-07-19 08:47:10
 * @Description: 寻找一字符在字符串中的位置
 */

#include <stdio.h>

void idx_char(char c, char str[])
{
    int i = 0;
    int count = 0;
    printf("'%c' 在 \"%s\" 中的位置是（0代表没有存在）：", c, str);
    while (str[i] != '\0') 
    {
        if (str[i] == c)
        {
            printf("%d ", i+1);
            count++;
        }
        i++;
    }
    if (count==0)
    {
        printf("%d", count);
    }
}

int main() 
{
    char str[100], c;

    printf("请输入一个字符串： ");
    gets(str);
    printf("请输入查找字符：");
    c = getchar();
    
    idx_char(c, str);
    return 0;
}