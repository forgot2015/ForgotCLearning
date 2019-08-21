//
// Created by forgot on 2019-08-21.
//
/*1001 A+B Format (20 point(s))*/
/*Calculate a+b and output the sum in standard format -- that is, the digits must be separated into groups of three by
 * commas (unless there are less than four digits).

Input Specification:
Each input file contains one test case. Each case contains a pair of integers a and b where −10^6≤a,b≤10^6
​​ . The numbers are separated by a space.

Output Specification:
For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.

Sample Input:
-1000000 9
Sample Output:
-999,991*/
#include <stdio.h>
#include <string.h>

//最少1个逗号，最多2个逗号
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int sum = a + b;
//    char sumStr[10];
////    数字转字符串
//    sprintf(sumStr, "%d", sum);
//注意，不像strcpy()，strncpy()不会向dest追加结束标记'\0'，这就引发了很多不合常理的问题，所以要新建一个空字符串 finalStr[10]来拷贝
//    char finalStr[10];
//    if (sumStr[0] == '-') {
//        putchar('-');
//        strncpy(finalStr, sumStr + 1, strlen(sumStr) - 1);
//    } else {
//        strcpy(finalStr, sumStr);
//    }
//
////    长度为7时，有两个逗号
//    if (strlen(finalStr) == 7) {
//        for (int i = 0; i < strlen(finalStr); i++) {
//            putchar(finalStr[i]);
//            if (i % 3 == 0 && i != 6) {
//                putchar(',');
//            }
//        }
//    } else {
//        for (int i = 0; i < strlen(finalStr); i++) {
//            putchar(finalStr[i]);
//            if (i == strlen(finalStr) - 4) {
//                putchar(',');
//            }
//        }
//    }
//    return 0;
//}


////最少1个逗号，最多2个逗号
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int sum = a + b;
//    char sumStr[10];
////    数字转字符串
//    sprintf(sumStr, "%d", sum);
//    if (sumStr[0] == '-') {
//        if (strlen(sumStr) == 8) {
//            for (int i = 0; i < strlen(sumStr); i++) {
//                putchar(sumStr[i]);
//                if ((i - 1) % 3 == 0 && i != 7) {
//                    putchar(',');
//                }
//            }
//        } else {
//            for (int i = 0; i < strlen(sumStr); i++) {
//                putchar(sumStr[i]);
//                if (i == strlen(sumStr) - 4) {
//                    putchar(',');
//                }
//            }
//        }
//    } else {
//        if (strlen(sumStr) == 7) {
//            for (int i = 0; i < strlen(sumStr); i++) {
//                putchar(sumStr[i]);
//                if (i % 3 == 0 && i != 6) {
//                    putchar(',');
//                }
//            }
//        } else {
//            for (int i = 0; i < strlen(sumStr); i++) {
//                putchar(sumStr[i]);
//                if (i == strlen(sumStr) - 4) {
//                    putchar(',');
//                }
//            }
//        }
//    }
//    return 0;
//}