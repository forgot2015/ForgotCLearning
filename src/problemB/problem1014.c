//
// Created by forgot on 2019-08-03.
//
/*1014 福尔摩斯的约会 (20 point(s))*/
/*大侦探福尔摩斯接到一张奇怪的字条：我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm。大侦探很快就明白了，
 * 字条上奇怪的乱码实际上就是约会的时间星期四 14:04，因为前面两字符串中第 1 对相同的大写英文字母（大小写有区分）是第 4 个字母 D，代表星期四；
 * 第 2 对相同的字符是 E ，那是第 5 个英文字母，代表一天里的第 14 个钟头（于是一天的 0 点到 23 点由数字 0 到 9、以及大写字母 A 到 N 表示）；
 * 后面两字符串第 1 对相同的英文字母 s 出现在第 4 个位置（从 0 开始计数）上，代表第 4 分钟。现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。

输入格式：
输入在 4 行中分别给出 4 个非空、不包含空格、且长度不超过 60 的字符串。

输出格式：
在一行中输出约会的时间，格式为 DAY HH:MM，其中 DAY 是某星期的 3 字符缩写，即 MON 表示星期一，TUE 表示星期二，WED 表示星期三，THU 表示星期四，
 FRI 表示星期五，SAT 表示星期六，SUN 表示星期日。题目输入保证每个测试存在唯一解。

输入样例：
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm
输出样例：
THU 14:04*/

//这题意有问题
//注意点： 1 星期要在A~G之间，小时是在星期后面的 '0'~'9' , 'A'~'Z' ,


#include <stdio.h>
#include <string.h>

//int main() {
//    char *day[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
//    char str1[61];
//    char str2[61];
//    char str3[61];
//    char str4[61];
//
//    scanf("%s %s %s %s", str1, str2, str3, str4);
//    int first = 0;
//    for (int i = 0; i < strlen(str1); i++) {
//        if (str1[i] == str2[i] && (str1[i] >= 'A' && str1[i] <= 'G')) {
//            printf("%s ", day[str1[i] - 'A']);
//            first = i;
//            break;
//        }
//    }
//
//    for (int i = first + 1; i < strlen(str1); i++) {
//        if (str1[i] == str2[i]) {
//            if (str1[i] >= '0' && str1[i] <= '9') {
//                printf("%02d:", str1[i] - '0');
//                break;
//            } else if (str1[i] >= 'A' && str1[i] <= 'N') {
//                printf("%02d:", str1[i] - 'A' + 10);
//                break;
//            }
//        }
//    }
//
//    for (int i = 0; i < strlen(str3); i++) {
//        if (str3[i] == str4[i] && ((str3[i] >= 'A' && str3[i] <= 'Z') || (str3[i] >= 'a' && str3[i] <= 'z'))) {
//            printf("%02d", i);
//            break;
//        }
//    }
//
//    return 0;
//}

//int main() {
//    char *day[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
//    char s1[61];
//    char s2[61];
//    char s3[61];
//    char s4[61];
//    scanf("%s %s %s %s", s1, s2, s3, s4);
//    int dayIndex = 0;
//    int s1len = strlen(s1);
//
////    计算星期和时针
//    int same = 0;
//    int hour = 0;
//    for (int i = 0; i < s1len; i++) {
//        if (!same && s2[i] == s1[i] && s1[i] >= 'A' && s1[i] <= 'G') {
//            same = 1;
//            dayIndex = s1[i] - 65;
//        } else if (same && s2[i] == s1[i] && ((s1[i] >= 'A' && s1[i] <= 'N') || (s1[i] >= '0' && s1[i] <= '9'))) {
//            if ('0' <= s1[i] && s1[i] <= '9') {
//                hour = s1[i] - '0';
//            } else if (s1[i] >= 'A' && s1[i] <= 'N') {
//                hour = s1[i] - 'A' + 10;
//            }
//            break;
//        }
//
//    }
//
//    int minute = 0;
//    int s3len = strlen(s3);
//
////    计算分针
//    for (int i = 0; i < s3len; i++) {
//        if (s4[i] == s3[i] && ((s4[i] >= 'A' && s4[i] <= 'Z') || (s4[i] >= 'a' && s4[i] <= 'z'))) {
//            minute = i;
//            break;
//        }
//    }
//
//    printf("%s %02d:%02d", day[dayIndex], hour, minute);
//
//    return 0;
//}

