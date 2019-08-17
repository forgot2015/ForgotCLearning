//
// Created by forgot on 2019-08-03.
//
/*1015 德才论*/
/*宋代史学家司马光在《资治通鉴》中有一段著名的“德才论”：“是故才德全尽谓之圣人，才德兼亡谓之愚人，德胜才谓之君子，才胜德谓之小人。凡取人之术，
 * 苟不得圣人，君子而与之，与其得小人，不若得愚人。”

现给出一批考生的德才分数，请根据司马光的理论给出录取排名。

输入格式：
输入第一行给出 3 个正整数，分别为：N（≤10^5），即考生总数；L（≥60），为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；H（<100）
 ，为优先录取线——德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，
 但排在第一类考生之后；德才分均低于 H，
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

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Students {
////    准考证号
//    char num[9];
////    德分
//    int de;
////    才分
//    int cai;
//} Student;
//
//int cmp(const void *a, const void *b) {
//    Student A = *(Student *) a;
//    Student B = *(Student *) b;
//
////    若总分相同，再比较德分
//    if (B.de + B.cai == A.de + A.cai) {
////        若德分相同，按准考证号升序
//        if (B.de == A.de) {
//            return strcmp(A.num, B.num);
//        } else {
//            return B.de - A.de;
//        }
//    } else {
//        return (B.de + B.cai) - (A.de + A.cai);
//    }
//}
//
//int main() {
//    int N, L, H;
//    scanf("%d %d %d", &N, &L, &H);
//    Student student1[N + 1];
//    Student student2[N + 1];
//    Student student3[N + 1];
//    Student student4[N + 1];
//    int index1 = 0;
//    int index2 = 0;
//    int index3 = 0;
//    int index4 = 0;
//    char num[9];
//    int de;
//    int cai;
//
//    for (int i = 0; i < N; i++) {
//        scanf("%s %d %d", num, &de, &cai);
//        if (de < L || cai < L) {
//            continue;
//        } else if (de >= H && cai >= H) {
//            strcpy(student1[index1].num, num);
//            student1[index1].de = de;
//            student1[index1].cai = cai;
//            index1++;
//        } else if (de >= H) {
//            strcpy(student2[index2].num, num);
//            student2[index2].de = de;
//            student2[index2].cai = cai;
//            index2++;
//        } else if (de >= cai) {
//            strcpy(student3[index3].num, num);
//            student3[index3].de = de;
//            student3[index3].cai = cai;
//            index3++;
//        } else {
//            strcpy(student4[index4].num, num);
//            student4[index4].de = de;
//            student4[index4].cai = cai;
//            index4++;
//        }
//    }
//
//    qsort(student1, index1, sizeof(student1[0]), cmp);
//    qsort(student2, index2, sizeof(student2[0]), cmp);
//    qsort(student3, index3, sizeof(student3[0]), cmp);
//    qsort(student4, index4, sizeof(student4[0]), cmp);
//
//    printf("%d\n", index1 + index2 + index3 + index4);
//    for (int j = 0; j < index1; j++) {
//        printf("%s %d %d\n", student1[j].num, student1[j].de, student1[j].cai);
//    }
//    for (int j = 0; j < index2; j++) {
//        printf("%s %d %d\n", student2[j].num, student2[j].de, student2[j].cai);
//    }
//    for (int j = 0; j < index3; j++) {
//        printf("%s %d %d\n", student3[j].num, student3[j].de, student3[j].cai);
//    }
//    for (int j = 0; j < index4; j++) {
//        printf("%s %d %d\n", student4[j].num, student4[j].de, student4[j].cai);
//    }
//
//    return 0;
//}