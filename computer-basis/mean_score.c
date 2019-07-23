/*
 * @Author: huangsh
 * @Date: 2019-07-22 23:01:39
 * @Description: 求平均成绩及最高分（2017/八）
 * 有三门课，题目没说清楚最高分是求的总分还是每门课的，我这里用总分（省事点...
 */

#include <stdio.h>

#define N 10

struct Student
{
    char id[15];
    char name[11];
    float subject1, subject2, subject3;
};

int main()
{
    struct Student data[N];
    int i = 0, max_idx;
    float max_score = 0, temp;
    float mean_score = 0;
    while (i < N)
    {
        printf("->学生 %d\n", (i+1));
        printf("学号：");
        scanf("%s", data[i].id);
        printf("姓名：");
        scanf("%s", data[i].name);
        printf("学科1：");
        scanf("%f", &data[i].subject1);
        printf("学科2：");
        scanf("%f", &data[i].subject2);
        printf("学科3：");
        scanf("%f", &data[i].subject3);
        putchar('\n');
        i++;
    }
    for (int i = 0; i < N; i++)
    {
        temp = data[i].subject1 + data[i].subject2 + data[i].subject3;
        if (max_score < temp)
        {
            max_score = temp;
            max_idx = i;
        }
        mean_score += temp;
    }
    mean_score = mean_score / N;
    printf("3门课总平均值为：%.2f\n", mean_score);
    printf("最高分: %.2f\n", max_score);
    printf("学号：%s\n", data[max_idx].id);
    printf("姓名：%s\n", data[max_idx].name);
    printf("学科1：%.2f\n", data[max_idx].subject1);
    printf("学科2：%.2f\n", data[max_idx].subject2);
    printf("学科3：%.2f\n", data[max_idx].subject3);

    return 0;
}