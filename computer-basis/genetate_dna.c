/*
 * @Author: huangsh
 * @Date: 2019-07-22 18:30:44
 * @Description: 生成所有可能長度為10bp的DNA (2018/三)
 * 程序使用递归算法。递归每一层代表一个DNA一个位点，有10层。第11层不参与碱基选择。
 */

#include <stdio.h>
#include <stdlib.h>

int DNA(FILE *fp, int idx)
{
    static char base[] = {'A', 'T', 'G', 'C', '\0'};
    static char dna[12];
    idx++;
    for (int i = 0; i < 4; i++)
    {
        if (idx < 11)
        {
            dna[idx - 1] = base[i];
            DNA(fp, idx);
        }
        else
        {
            dna[idx-1] = '\n';
            dna[idx + 1] = '\0';
            fputs(dna, fp);
            return 0;
        }
    }
    return 0;
}

int main()
{
    FILE *fp;
    int idx = 0;
    fp = fopen("DNA_10bp.fasta", "w");
    DNA(fp, idx);
    fclose(fp);
    return 0;
}