//
// Created by forgot on 2019-08-04.
//
/*1080 MOOC期终成绩 (25 point(s))*/
/*对于在中国大学MOOC（http://www.icourse163.org/ ）学习“数据结构”课程的学生，想要获得一张合格证书，必须首先获得不少于200分的在线编程作业分，然后总评获得不少于60分（满分100）。总评成绩的计算公式为 G=(G
​mid−term
​​ ×40%+G
​final
​​ ×60%)，如果 G
​mid−term
​​ >G
​final
​​ ；否则总评 G 就是 G
​final
​​ 。这里 G
​mid−term
​​  和 G
​final
​​  分别为学生的期中和期末成绩。

现在的问题是，每次考试都产生一张独立的成绩单。本题就请你编写程序，把不同的成绩单合为一张。

输入格式：
输入在第一行给出3个整数，分别是 P（做了在线编程作业的学生数）、M（参加了期中考试的学生数）、N（参加了期末考试的学生数）。每个数都不超过10000。

接下来有三块输入。第一块包含 P 个在线编程成绩 G
​p
​​ ；第二块包含 M 个期中考试成绩 G
​mid−term
​​ ；第三块包含 N 个期末考试成绩 G
​final
​​ 。每个成绩占一行，格式为：学生学号 分数。其中学生学号为不超过20个字符的英文字母和数字；分数是非负整数（编程总分最高为900分，期中和期末的最高分为100分）。

输出格式：
打印出获得合格证书的学生名单。每个学生占一行，格式为：

学生学号 G
​p
​​  G
​mid−term
​​  G
​final
​​  G

如果有的成绩不存在（例如某人没参加期中考试），则在相应的位置输出“−1”。输出顺序为按照总评分数（四舍五入精确到整数）递减。若有并列，则按学号递增。题目保证学号没有重复，且至少存在1个合格的学生。

输入样例：
6 6 7
01234 880
a1903 199
ydjh2 200
wehu8 300
dx86w 220
missing 400
ydhfu77 99
wehu8 55
ydjh2 98
dx86w 88
a1903 86
01234 39
ydhfu77 88
a1903 66
01234 58
wehu8 84
ydjh2 82
missing 99
dx86w 81
输出样例：
missing 400 -1 99 99
ydjh2 200 98 82 88
dx86w 220 88 81 84
wehu8 300 55 84 84*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct {
//    char name[21];
//    int programming;
//    int midterm;
//    int finalexam;
//    int total_mark;
//} Score;
//
//int cmp_sort_total(const void *a, const void *b) {
//    Score *s1 = *(Score **) a, *s2 = *(Score **) b;
//    if (s2->total_mark - s1->total_mark)
//        return s2->total_mark - s1->total_mark;
//    return strcmp(s1->name, s2->name);
//}
//
//int cmp_sort_name(const void *a, const void *b) {
//    Score *s1 = *(Score **) a, *s2 = *(Score **) b;
//    return strcmp(s1->name, s2->name);
//}
//
//int cmp_bsearch(const void *strptr, const void *scoreptr) {
//    Score *s = *(Score **) scoreptr;
//    char *name = (char *) strptr;
//    return strcmp(name, s->name);
//}

//int main() {
//    int P, M, N;
//    scanf("%d %d %d", &P, &M, &N);
//
//    int score, count = 0;
//    char name[21];
//    Score buf[10000], *scores[10000] = {0}, *s = buf;
//
//    for (int i = 0; i < P; i++)  /* Read programming grade */
//    {
//        scanf("%s %d", name, &score);
//        if (score >= 200)        /* Only record if score >= 200 */
//        {
//            strcpy(s->name, name);
//            s->programming = score;
//            s->midterm = -1;
//            s->finalexam = -1;
//            s->total_mark = 0;
//            scores[count++] = s++;
//        }
//    }
//
//    /* Sort by name for future searchings using bsearch */
//    qsort(scores, count, sizeof(Score *), cmp_sort_name);
//
//    void *result;
//    for (int i = 0; i < M; i++)  /* Read midterm grade */
//    {
//        scanf("%s %d", name, &score);
//        result = bsearch(name, scores, count, sizeof(Score *), cmp_bsearch);
//        if (result != NULL)      /* If name is in the list, then record */
//            (*(Score **) result)->midterm = score;
//    }
//
//    for (int i = 0; i < N; i++)  /* Read final exam grade */
//    {
//        scanf("%s %d", name, &score);
//        result = bsearch(name, scores, count, sizeof(Score *), cmp_bsearch);
//        if (result != NULL) {
//            s = *(Score **) result;
//            s->finalexam = score;
//
//            /* Calculate total mark */
//            if (s->finalexam >= s->midterm)      /* final exam grade higher */
//                s->total_mark = s->finalexam;
//            else                                /* midterm grade higher */
//                s->total_mark = 0.6 * s->finalexam + 0.4 * s->midterm + 0.5;
//        }
//    }
//
//    /* Sort by total mark */
//    qsort(scores, count, sizeof(Score *), cmp_sort_total);
//
//    for (Score **p = scores; *p && (*p)->total_mark >= 60; p++)
//        printf("%s %d %d %d %d\n", (*p)->name, (*p)->programming,
//               (*p)->midterm, (*p)->finalexam, (*p)->total_mark);
//
//    return 0;
//}




// 我的超时还有错，先用别人的吧，学到了二分查找法的使用
//#include "stdio.h"
//#include "string.h"
//#include "stdlib.h"
//
//typedef struct Students {
//    char num[21];
//    int Gp;
//    int Gmid;
//    int Gfinal;
//    int G;
//} Student;
//
//int cmp(const void *a, const void *b) {
//    Student sa = *(Student *) a;
//    Student sb = *(Student *) b;
////    若最终成绩一样，则按学号递增排序
//    if (sa.G == sb.G) {
//        return strcmp(sa.num, sb.num);
//    }
//    return sa.G < sb.G;
//}
//
//int main() {
//    int P, M, N;
//    int count = 0;
//    scanf("%d %d %d", &P, &M, &N);
//    char nNum[21];
//    int score;
////    没有上机分数的一定不及格，忽略掉
//    Student student[P];
//    for (int i = 0; i < P; i++) {
//        scanf("%s %d", nNum, &score);
//        if (score >= 200) {
//            strcpy(student[i].num, nNum);
//            student[i].Gp = score;
//            student[i].Gmid = -1;
//            student[i].Gfinal = -1;
//        }
//    }
//
//    for (int j = 0; j < M; j++) {
//        scanf("%s %d", nNum, &score);
//        for (int i = 0; i < P; i++) {
//            if (strcmp(student[i].num, nNum) == 0) {
//                student[i].Gmid = score;
//                break;
//            }
//        }
//    }
//
//    for (int j = 0; j < N; j++) {
//        scanf("%s %d", nNum, &score);
//        for (int i = 0; i < P; i++) {
//            if (strcmp(student[i].num, nNum) == 0) {
//                student[i].Gfinal = score;
//
//                int g = 0;
//                if (student[i].Gfinal == -1) {
//                    g = (int) (0.4 * student[i].Gmid + +0.5);
//                } else if (student[i].Gmid > student[i].Gfinal) {
//                    g = (int) (0.4 * student[i].Gmid + 0.6 * student[i].Gfinal + 0.5);
//                } else {
//                    g = student[i].Gfinal;
//                }
//                student[i].G = g;
//                if (g >= 60) {
//                    count++;
//                }
//                break;
//            }
//        }
//    }
//
////    结构体根据Gp进行排序
//    qsort(student, P, sizeof(student[0]), cmp);
//    count = count - 1;
//    for (int k = 0; k < P; k++) {
//        Student s = student[k];
//        if (s.G >= 60) {
//            printf("%s %d %d %d %d", s.num, s.Gp, s.Gmid, s.Gfinal, s.G);
//            if (count) {
//                printf("\n");
//                count--;
//            }
//        }
//    }
//
//    return 0;
//}


