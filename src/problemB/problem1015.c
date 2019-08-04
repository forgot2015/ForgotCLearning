//
// Created by forgot on 2019-08-03.
//
/*1015 德才论*/
/*宋代史学家司马光在《资治通鉴》中有一段著名的“德才论”：“是故才德全尽谓之圣人，才德兼亡谓之愚人，德胜才谓之君子，才胜德谓之小人。凡取人之术，
 * 苟不得圣人，君子而与之，与其得小人，不若得愚人。”

现给出一批考生的德才分数，请根据司马光的理论给出录取排名。

输入格式：
输入第一行给出 3 个正整数，分别为：N（≤10
​5
​​ ），即考生总数；L（≥60），为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；H（<100），为优先录取线——德分和才分均不低于此线的
 被定义为“才德全尽”，此类考生按德才总分从高到低排序；才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；德才分均低于 H，
 但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；其他达到最低线 L 的考生也按总分排序，但排在第三类考生之后。

随后 N 行，每行给出一位考生的信息，包括：准考证号 德分 才分，其中准考证号为 8 位整数，德才分为区间 [0, 100] 内的整数。数字间以空格分隔。

输出格式：
输出第一行首先给出达到最低分数线的考生人数 M，随后 M 行，每行按照输入格式输出一位考生的信息，考生按输入中说明的规则从高到低排序。
 当某类考生中有多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。

输入样例：
14 60 80
10000001 64 90
10000002 90 60
10000011 85 80
10000003 85 80
10000004 80 85
10000005 82 77
10000006 83 76
10000007 90 78
10000008 75 79
10000009 59 90
10000010 88 45
10000012 80 100
10000013 90 99
10000014 66 60
输出样例：
12
10000013 90 99
10000012 80 100
10000003 85 80
10000011 85 80
10000004 80 85
10000007 90 78
10000006 83 76
10000005 82 77
10000002 90 60
10000014 66 60
10000008 75 79
10000001 64 90*/

#include <stdio.h>
#include <stdlib.h>
//错了一个用例？
struct Student {
//    准考证号
    int num;
//    德分
    int virtue;
//    才分
    int talent;
};

//排序规则
int compare(struct Student *a, struct Student *b) {
    if (a->virtue + a->talent != b->virtue + b->talent) {
        return (b->virtue + b->talent) > (a->virtue + a->talent); //总分降序
    } else if (a->virtue != b->virtue) {
        return b->virtue > a->virtue; //德分降序
    } else {
        return a->num > b->num; //学号升序
    }
}

int main() {
    int N, L, H;
    scanf("%d%d%d", &N, &L, &H);
    struct Student student[N];
    struct Student student1[N];
    struct Student student2[N];
    struct Student student3[N];
    struct Student student4[N];
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;
    int index4 = 0;
    int count = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d%d%d", &student[i].num, &student[i].virtue, &student[i].talent);
    }

    for (int j = 0; j < N; j++) {
        if (student[j].virtue < L || student[j].talent < L) {
            continue;
        }
        count++;

        if (student[j].virtue >= H && student[j].talent >= H) {
            student1[index1] = student[j];
            index1++;
        } else if (student[j].virtue >= H) {
            student2[index2] = student[j];
            index2++;
        } else if (student[j].virtue < H && student[j].virtue >= student[j].talent) {
            student3[index3] = student[j];
            index3++;
        } else {
            student4[index4] = student[j];
            index4++;
        }
    }

    qsort(student1, index1 + 1, sizeof(student1[0]), compare);
    qsort(student2, index2 + 1, sizeof(student2[0]), compare);
    qsort(student3, index3 + 1, sizeof(student3[0]), compare);
    qsort(student4, index4 + 1, sizeof(student4[0]), compare);

    printf("%d\n", count);

    for (int l = 0; l < index1; l++) {
        printf("%d %d %d\n", student1[l].num, student1[l].virtue, student1[l].talent);
    }
    for (int l = 0; l < index2; l++) {
        printf("%d %d %d\n", student2[l].num, student2[l].virtue, student2[l].talent);
    }
    for (int l = 0; l < index3; l++) {
        printf("%d %d %d\n", student3[l].num, student3[l].virtue, student3[l].talent);
    }
    for (int l = 0; l < index4; l++) {
        printf("%d %d %d\n", student4[l].num, student4[l].virtue, student4[l].talent);
    }

    return 0;
}

