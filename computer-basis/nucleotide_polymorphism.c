/*
 * @Author: huangsh
 * @Date: 2019-07-22 11:51:56
 * @Description: 计算核苷酸多态性（2017/六）
 * 题目详情见 核苷酸多态性.md, 程序使用序列见 dna_seq.fasta
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

float compute(char *seq[])
{
    int c;
    float d_ij = 0;
    for (int i=0; i < N; i++)
    {
        for (int j=i+1; j < N;j++)
        {
            int count=0;
            for (int idx = 0; seq[i][idx] != '\0'; idx++)
            {
                if (seq[i][idx] == seq[j][idx])
                {
                    count++;
                }
            }
            d_ij += (float)(count / 34);
        }
    }
    c = N * (N - 1) / 2;
    return d_ij / c;
}

int main()
{
    FILE *fp;
    int i = 0;
    char line[50];
    char *seq[N];
    float pi;

    if ((fp = fopen("dna_seq.fasta", "r")) == NULL)
    {
        printf("打开文件失败！\n");
        exit(EXIT_FAILURE);
    }
    while(fscanf(fp, "%[^\n]", line)!=EOF)
    {
        fgetc(fp);
        if (line[0] != '>')
        {
            seq[i++] = line;
        }
    }
    pi = compute(seq);
    printf("pi = %f\n", pi);

    return 0;
}
