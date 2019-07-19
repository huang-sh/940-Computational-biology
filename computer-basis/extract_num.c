/*
 * @Author: huangsh
 * @Date: 2019-07-19 09:42:09
 * @Description: 提取字串串中的数字字符。（2009/六）
 *  ext_num1 比较简单，就，直接把数字字符打印出来就完事了，
 *  ext_num2 较复杂了一点，采用动态申请内存的方式，将数字字符串（指针）存在指针数组里，
 *           这样后续可以利用。
 */

#include <stdio.h>
#include <stdlib.h>

void ext_num1(char str[])
{
    // int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            // ptr = (char *[])realloc(ptr, count * sizeof(char));

            printf("%d", str[i]);
        }
        if (str[i] < '0' || str[i] > '9')
        {
            printf(" ");
        }
    }
}

char **ext_num2(char *str)
{
    char **str_ptrs = NULL;

    int str_count = 0;
    int idx = 0;
    
    str_ptrs = (char **)realloc(str_ptrs, (str_count+1) * sizeof(char *));
    if (str == NULL)
    {
        printf("申请内存失败！\n");
        exit(1);
    }

    while (str[idx] != '\0')
    {
        int i = 0;
        char *char_ptr = NULL;
        while (str[idx] >= '0' && str[idx] <= '9')
        {
            i++;
            char_ptr = (char *)realloc(char_ptr, (i+1) * sizeof(char));
            if (char_ptr == NULL)
            {
                printf("申请内存失败！\n");
                exit(1);
            }
            char_ptr[i - 1] = str[idx];
            printf("%c", str[idx]);
            idx++;
        }
        idx++;
        if (char_ptr != NULL)
        {
            char_ptr[i] = '\0';
            str_ptrs[str_count] = char_ptr;
            str_count++;
            str_ptrs = (char **)realloc(str_ptrs, (str_count+1) * sizeof(char *));
            printf(" ");
        }
    }
    return str_ptrs;
}

int main()
{
    char str[100];
    char **ptr;
    printf("请输入一个字符串: ");
    gets(str);

    ptr = ext_num2(str);

    printf("\n输出字符\n");
    for (int i = 0; ptr[i]; i++)
    {
        printf("ptr[%d] -->  %s \n", i, ptr[i]);
        free(ptr[i]);
    }
    free(ptr);
    return 0;
} 