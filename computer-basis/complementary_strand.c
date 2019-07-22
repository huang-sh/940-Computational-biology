/*
 * @Author: huangsh
 * @Date: 2019-07-22 16:30:24
 * @Description: 生成DNA序列的互补鏈（2018/四）
 * >seq
 * AGATGGAATGTGGTGTGTTITCTGGTAAAATATGA
 */

#include <stdio.h>

void convert(char *p, char *q)
{
    switch (*p)
    {
        case 'A':
            *q = 'T';
            break;
        case 'T':
            *q = 'A';
            break;
        case 'G':
            *q = 'C';
            break;
        case 'C':
            *q = 'G';
            break;
        default:
            printf("error\n");
    }
}

int main()
{
    char seq[] =   "AGATGGAATGTGGTGTGTTTTCTGGTAAAATATGA";
    char c_seq[] = "AGATGGAATGTGGTGTGTTTTCTGGTAAAATATGA";
    for (int i = 0; seq[i] != '\0'; i++)
    {
        convert(&seq[i], &c_seq[i]);
    }
    printf("+: %s\n-: %s\n", seq, c_seq);
    return 0;
}