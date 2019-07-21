/*
 * @Author: huangsh
 * @Date: 2019-07-21 10:45:39
 * @Description: 从键盘输入字符串，将小写字母转化为大写字母，(2017/七)
 * 然后输入文件"test"里，输入字符串以"!"结束。
 */

#include <stdio.h>

int main()
{
    char str[100];
    FILE *fp;
    int i = 0;

    printf("请输入一串字符串：");

    fp = fopen("test", "w");
    while ((str[i] = getchar()) != '!')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    str[i] = '!';
    str[i+1] = '\0';
    fputs(str, fp);
    fclose(fp);
    return 0;
}
