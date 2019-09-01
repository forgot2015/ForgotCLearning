//
// Created by forgot on 2019-08-04.
//
/*1085 PAT单位排行 (25 point(s))*/
/*每次 PAT 考试结束后，考试中心都会发布一个考生单位排行榜。本题就请你实现这个功能。

输入格式：
输入第一行给出一个正整数 N（≤10^5），即考生人数。随后 N 行，每行按下列格式给出一个考生的信息：

准考证号 得分 学校
其中准考证号是由 6 个字符组成的字符串，其首字母表示考试的级别：B代表乙级，A代表甲级，T代表顶级；得分是 [0, 100] 区间内的整数；
 学校是由不超过 6 个英文字母组成的单位码（大小写无关）。注意：题目保证每个考生的准考证号是不同的。

输出格式：
首先在一行中输出单位个数。随后按以下格式非降序输出单位的排行榜：

排名 学校 加权总分 考生人数
其中排名是该单位的排名（从 1 开始）；学校是全部按小写字母输出的单位码；加权总分定义为乙级总分/1.5 + 甲级总分 + 顶级总分*1.5的整数部分；
 考生人数是该属于单位的考生的总人数。

学校首先按加权总分排行。如有并列，则应对应相同的排名，并按考生人数升序输出。如果仍然并列，则按单位码的字典序输出。

输入样例：
10
A57908 85 Au
B57908 54 LanX
A37487 60 au
T28374 67 CMU
T32486 24 hypu
A66734 92 cmu
B76378 71 AU
A47780 45 lanx
A72809 100 pku
A03274 45 hypu
输出样例：
5
1 cmu 192 2
1 au 192 3
3 pku 100 1
4 hypu 81 2
4 lanx 81 2*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
//typedef struct {
//    char level;
//    char schoolName[7];
//    int score;
//} Stu;
//
//typedef struct {
//    int rank;
//    char schoolName[7];
//    double sumScore;
//    int stuCount;
//} School;
//
//int cmpSchool(const void *a, const void *b) {
//    School A = *(School *) a;
//    School B = *(School *) b;
//    if (A.sumScore == B.sumScore) {
//        if (B.stuCount == A.stuCount) {
//            return strcmp(A.schoolName, B.schoolName);
//        } else {
//            return A.stuCount - B.stuCount;
//        }
//    }
//
//    return B.sumScore - A.sumScore > 0 ? 1 : -1;
//}
//
//int cmpSchoolName(const void *a, const void *b) {
//    Stu A = *(Stu *) a;
//    Stu B = *(Stu *) b;
//    return strcmp(A.schoolName, B.schoolName);
//}
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    Stu stu[N];
//    School school[N];
//    int sIndex = 0;
//
//    for (int i = 0; i < N; i++) {
//        char no[7];
//        char schoolName[7];
//        scanf("%s %d %s", no, &stu[i].score, schoolName);
//        stu[i].level = no[0];
//        for (int j = 0; j < strlen(schoolName); j++) {
//            schoolName[j] = tolower(schoolName[j]);
//        }
//        strcpy(stu[i].schoolName, schoolName);
//    }
//
//    //按学校名排序,这样相同校名的排序就会相邻了
//    qsort(stu, N, sizeof(stu[0]), cmpSchoolName);
//
//    //计算学校分数信息
//    double TScore = 0;
//    double AScore = 0;
//    double BScore = 0;
//    int count = 0;
//    for (int i = 0; i < N; i++) {
//        if (stu[i].level == 'T') {
//            TScore += stu[i].score * 1.5;
//        } else if (stu[i].level == 'A') {
//            AScore += stu[i].score;
//        } else if (stu[i].level == 'B') {
//            BScore += stu[i].score / 1.5;
//        }
//
//        count++;
//        if ((i == N - 1) || strcmp(stu[i].schoolName, stu[i + 1].schoolName) != 0) {
//            strcpy(school[sIndex].schoolName, stu[i].schoolName);
//            school[sIndex].sumScore = (int) TScore + (int) AScore + (int) BScore;
//            school[sIndex].stuCount = count;
//            count = 0;
//            TScore = 0;
//            AScore = 0;
//            BScore = 0;
//            sIndex++;
//        }
//    }
//
//    qsort(school, sIndex, sizeof(school[0]), cmpSchool);
//
////    计算排名
//    int rank = 1;
//    school[0].rank = 1;
//    for (int l = 1; l < sIndex; l++) {
//        if ((int) school[l].sumScore == (int) school[l - 1].sumScore) {
//            school[l].rank = school[l - 1].rank;
//        } else {
//            rank = l + 1;
//            school[l].rank = rank;
//        }
//    }
//
//    printf("%d\n", sIndex);
//
//    for (int k = 0; k < sIndex; k++) {
//        printf("%d %s %.0lf %d\n", school[k].rank, school[k].schoolName, school[k].sumScore,
//               school[k].stuCount);
//    }
//
//    return 0;
//}



//错两用例
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
//typedef struct {
//    char level;
//    char schoolName[7];
//    int score;
//} Stu;
//
//typedef struct {
//    int rank;
//    char schoolName[7];
//    double sumScore;
//    int stuCount;
//} School;
//
//int cmpSchool(const void *a, const void *b) {
//    School A = *(School *) a;
//    School B = *(School *) b;
//    if (A.sumScore == B.sumScore) {
//        if (B.stuCount == A.stuCount) {
//            return strcmp(A.schoolName, B.schoolName);
//        } else {
//            return B.stuCount - A.stuCount;
//        }
//    }
//
//    return B.sumScore - A.sumScore > 0 ? 1 : -1;
//}
//
//int cmpSchoolName(const void *a, const void *b) {
//    Stu A = *(Stu *) a;
//    Stu B = *(Stu *) b;
//    return strcmp(A.schoolName, B.schoolName);
//}
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    Stu stu[N];
//    School school[N];
//    int schoolCount = 0;
//
//    for (int i = 0; i < N; i++) {
//        char no[7];
//        char schoolName[7];
//        scanf("%s %d %s", no, &stu[i].score, schoolName);
//        stu[i].level = no[0];
//        for (int j = 0; j < strlen(schoolName); j++) {
//            schoolName[j] = tolower(schoolName[j]);
//        }
//        strcpy(stu[i].schoolName, schoolName);
//    }
//
////    for (int k = 0; k < N; k++) {
////        printf("%c %s %d\n", stu[k].level, stu[k].schoolName, stu[k].score);
////    }
//
//    //按学校名排序,这样相同校名的排序就会相邻了
//    qsort(stu, N, sizeof(stu[0]), cmpSchoolName);
//
//    //计算学校分数信息
//    for (int i = 0; i < N; i++) {
//        double score = stu[i].score * 1.0;
//        if (stu[i].level == 'T') {
//            score = score * 1.5;
//        } else if (stu[i].level == 'B') {
//            score = score / 1.5;
//        }
//
//        if (i == 0) {
//            strcpy(school[schoolCount].schoolName, stu[i].schoolName);
//            school[schoolCount].sumScore = score;
//            school[schoolCount].stuCount = 1;
//            schoolCount++;
//        } else if (strcmp(stu[i].schoolName, stu[i - 1].schoolName) == 0) {
//            school[schoolCount - 1].sumScore += score;
//            school[schoolCount - 1].stuCount++;
//        } else {
//            strcpy(school[schoolCount].schoolName, stu[i].schoolName);
//            school[schoolCount].sumScore = score;
//            school[schoolCount].stuCount = 1;
//            schoolCount++;
//        }
//    }
//
//    qsort(school, schoolCount, sizeof(school[0]), cmpSchool);
//
////    计算排名
//    int rank = 1;
//    school[0].rank = 1;
//    for (int l = 1; l < schoolCount; l++) {
//        if ((int) school[l].sumScore == (int) school[l - 1].sumScore) {
//            school[l].rank = school[l - 1].rank;
//        } else {
//            rank = l + 1;
//            school[l].rank = rank;
//        }
//    }
//
//    printf("%d\n", schoolCount);
//
//    for (int k = 0; k < schoolCount; k++) {
//        printf("%d %s %.0lf %d\n", school[k].rank, school[k].schoolName, school[k].sumScore,
//               school[k].stuCount);
//    }
//
//    return 0;
//}