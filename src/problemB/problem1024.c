//
// Created by forgot on 2019-08-04.
//
/*1024 科学计数法 (20 point(s))*/
/*科学计数法是科学家用来表示很大或很小的数字的一种方便的方法，其满足正则表达式 [+-][1-9].[0-9]+E[+-][0-9]+，
 * 即数字的整数部分只有 1 位，小数部分至少有 1 位，该数字及其指数部分的正负号即使对正数也必定明确给出。

现以科学计数法的格式给出实数 A，请编写程序按普通数字表示法输出 A，并保证所有有效位都被保留。

输入格式：
每个输入包含 1 个测试用例，即一个以科学计数法表示的实数 A。该数字的存储长度不超过 9999 字节，且其指数的绝对值不超过 9999。

输出格式：
对每个测试用例，在一行中按普通数字表示法输出 A，并保证所有有效位都被保留，包括末尾的 0。

输入样例 1：
+1.23400E-03
输出样例 1：
0.00123400
输入样例 2：
-1.2E+10
输出样例 2：
-12000000000*/

//试下输入样例 -1.23125002E+5

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//方法较复杂，有没有更简单的方法？
//int main() {
//    char str[100001];
//    scanf("%s", str);
//    if (str[0] == '-') {
//        printf("-");
//    }
//
////    小数点出现的位置
//    int decimalPointIndex = 0;
////    小数的数量
//    int decimalPointCount;
////    e出现的位置
//    int eIndex = 0;
////   指数 e的正负
//    int eFlag;
////    e的指数
//    int eExponent = 0;
////    E字符出现的位置
//    int eExponentIndex = 0;
//    int len = strlen(str);
//    for (int i = 1; i < len; i++) {
//        if (str[i] == '.') {
//            decimalPointIndex = i;
//        } else if (str[i] == 'E') {
//            eIndex = i;
//            if (str[i + 1] == '+') {
//                eFlag = 1;
//            } else {
//                eFlag = -1;
//            }
//            char eExponentStr[5];
//
//            for (int j = i + 2; j < len; j++) {
//                eExponentStr[eExponentIndex] = str[j];
//                eExponentIndex++;
//            }
//            eExponent = atoi(eExponentStr);
//            break;
//        }
//    }
//
////    如果指数为0，则直接输出结果
//    if (eExponent == 0) {
//        for (int i = 1; i < eIndex; i++) {
//            putchar(str[i]);
//        }
//        return 0;
//    }
//
//    decimalPointCount = eIndex - decimalPointIndex - 1;
//
//    if (eFlag == 1) {
//        int zeroCount = eExponent - decimalPointCount;
//        if (zeroCount >= 0) {
//            for (int i = 1; i < eIndex; i++) {
//                if (i == decimalPointIndex) { continue; }
//                putchar(str[i]);
//            }
//            for (int j = 0; j < zeroCount; j++) {
//                putchar('0');
//            }
//        } else {
//            //试下输入样例 -1.23125002E+5
//            for (int i = 1; i < eIndex; i++) {
//                if (i == decimalPointIndex) { continue; }
//                if (i == decimalPointIndex + eExponent) {
//                    putchar(str[i]);
//                    putchar('.');
//                    continue;
//                }
//                putchar(str[i]);
//            }
//        }
//    } else if (eFlag == -1) {
//        printf("0.");
//        for (int j = 0; j < eExponent - 1; j++) {
//            putchar('0');
//        }
//        for (int i = 1; i < eIndex; i++) {
//            if (i == decimalPointIndex) { continue; }
//            putchar(str[i]);
//        }
//    }
//
//    return 0;
//}

