//
// Created by forgot on 2019-08-04.
//
/*1028 人口普查 (20 point(s))*/
/*某城镇进行人口普查，得到了全体居民的生日。现请你写个程序，找出镇上最年长和最年轻的人。

这里确保每个输入的日期都是合法的，但不一定是合理的——假设已知镇上没有超过 200 岁的老人，而今天是 2014 年 9 月 6 日，
 所以超过 200 岁的生日和未出生的生日都是不合理的，应该被过滤掉。

输入格式：
输入在第一行给出正整数 N，取值在(0,10^​5]；随后 N 行，每行给出 1 个人的姓名（由不超过 5 个英文字母组成的字符串）、
 以及按 yyyy/mm/dd（即年/月/日）格式给出的生日。
 题目保证最年长和最年轻的人没有并列。

输出格式：
在一行中顺序输出有效生日的个数、最年长人和最年轻人的姓名，其间以空格分隔。

输入样例：
5
John 2001/05/12
Tom 1814/09/06
Ann 2121/01/30
James 1814/09/05
Steve 1967/11/20
输出样例：
3 Tom John*/

//1
//Ann 2121/01/30

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////注意，有一个坑是，可能一个有效生日都没有，这时候直接输出0
//typedef struct Birthdays {
//    char name[6];
//    char date[11];
//} Birthday;
//
//int cmpDay(const void *a, const void *b) {
//    Birthday A = *(Birthday *) a;
//    Birthday B = *(Birthday *) b;
//    return strcmp(A.date, B.date);
//}
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    Birthday birthday[N];
//    int validCount = 0;
//
//    char name[6];
//    char date[11];
//    for (int i = 0; i < N; i++) {
//        scanf("%s %s", name, date);
//        if (strcmp(date, "2014/09/06") <= 0 && strcmp("1814/09/06", date) <= 0) {
//            strcpy(birthday[validCount].name, name);
//            strcpy(birthday[validCount].date, date);
//            validCount++;
//        }
//    }
//
//    qsort(birthday, validCount, sizeof(birthday[0]), cmpDay);
//
//    if (validCount) {
//        printf("%d %s %s", validCount, birthday[0].name, birthday[validCount - 1].name);
//    } else {
//        printf("0");
//    }
//}



////法2，直接比较法，不去排序了，时间复杂度和空间复杂度更低
//#include <stdio.h>
//
//struct Birthday {
//    char name[6];
//    int year;
//    int month;
//    int day;
//};
//
//int compareOld(struct Birthday a, struct Birthday b);
//
//
////注意，有效生日数可能为0
//int main() {
//    int N;
//    scanf("%d", &N);
//
//    int valueNo = 0;
//    struct Birthday oldest;
//    struct Birthday youngest;
//
//    struct Birthday today = {"name", 2014, 9, 6};
//    struct Birthday early = {"name", 1814, 9, 6};
//
//    for (int i = 0; i < N; i++) {
//        struct Birthday person;
//        scanf("%s %d/%d/%d", person.name, &person.year, &person.month, &person.day);
//        if (compareOld(person, today) && compareOld(early, person)) {
//            if (!valueNo) {
//                oldest = person;
//                youngest = person;
//            } else if (valueNo) {
//                if (compareOld(person, oldest)) {
//                    oldest = person;
//                }
//
//                if (compareOld(youngest, person)) {
//                    youngest = person;
//                }
//            }
//
//            valueNo++;
//        }
//    }
//    if (valueNo) {
//        printf("%d %s %s", valueNo, oldest.name, youngest.name);
//    } else {
//        printf("0");
//    }
//
//    return 0;
//}
//
//int compareOld(struct Birthday a, struct Birthday b) {
//    if (a.year < b.year) {
//        return 1;
//    } else if (a.year == b.year && a.month < b.month) {
//        return 1;
//    } else if (a.year == b.year && a.month == b.month && a.day <= b.day) {
//        return 1;
//    }
//
//    return 0;
//}