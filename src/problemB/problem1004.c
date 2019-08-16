//
// Created by forgot on 2019-08-02.
//
/*1004 成绩排名 (20 point(s))*/
/*读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

输入格式：
每个测试输入包含 1 个测试用例，格式为

第 1 行：正整数 n
第 2 行：第 1 个学生的姓名 学号 成绩
第 3 行：第 2 个学生的姓名 学号 成绩
  ... ... ...
第 n+1 行：第 n 个学生的姓名 学号 成绩
其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。

输出格式：
对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。

输入样例：
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
输出样例：
Mike CS991301
Joe Math990112*/

#include <stdio.h>
#include <string.h>

//int main() {
//    int N;
//    scanf("%d", &N);
//    char maxName[21];
//    char maxNumber[21];
//    int maxScore = -1;
//
//    char minName[21];
//    char minNumber[21];
//    int minScore = 101;
//    for (int i = 0; i < N; i++) {
//        char name[21];
//        char number[21];
//        int score;
//        scanf("%s %s %d", name, number, &score);
//        if (score > maxScore) {
//            maxScore = score;
//            strcpy(maxName, name);
//            strcpy(maxNumber, number);
//        }
//        if (score < minScore) {
//            minScore = score;
//            strcpy(minName, name);
//            strcpy(minNumber, number);
//        }
//    }
//
//    printf("%s %s\n", maxName, maxNumber);
//    printf("%s %s\n", minName, minNumber);
//
//    return 0;
//}


//用结构体的解法
//struct STUDENT {
//    char name[11];
//    char no[11];
//    int grade;
//};
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    struct STUDENT student[n];
//
//    int minIndex = 0;
//    int minGrade = 101;
//    int maxIndex = 0;
//    int maxGrade = -1;
//
//    for (int i = 0; i < n; i++) {
//        scanf("%s %s %d", student[i].name, student[i].no, &student[i].grade);
//        if (student[i].grade < minGrade) {
//            minGrade = student[i].grade;
//            minIndex = i;
//        } else if (student[i].grade > maxGrade) {
//            maxGrade = student[i].grade;
//            maxIndex = i;
//        }
//    }
//
//    printf("%s %s\n", student[maxIndex].name, student[maxIndex].no);
//    printf("%s %s", student[minIndex].name, student[minIndex].no);
//
//    return 0;
//}
