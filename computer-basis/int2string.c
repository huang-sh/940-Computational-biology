/*
 * @Author: huangsh
 * @Date: 2019-07-20 21:24:32
 * @Description: 递归发将整数转化为字符串。（2017/六）
 * 题目要求不限整数位数，这不太可能，故此代码使用long long int，
 * 支持最大位数10位（如，1234567890），更大的位数，要用数组贮存了，失去题目考察本意了。
 * 
 */

#include <stdio.h>
#include <stdlib.h>

char *convert(int n)
{   
    static char *str = NULL;
    static int count = 0;
    if (n < 0)
    {
        count++;
        str = (char *)realloc(str, count * sizeof(char));
        str[0] = '-';
        n = -n;
    }
    if ((n / 10) != 0)
    {
        convert(n / 10);
    }
    count++;
    str = (char *)realloc(str, (count+1) * sizeof(char));
    str[count - 1] = n % 10 + '0';
    str[count] = '\0';
    return str;
}

int main()
{
    long long int number;
    char *string;

    printf("请输入一个整数: ");
    scanf("%lld", &number);

    string = convert(number);
    printf("input string: %s", string);
    free(string);
    return 0;
}
