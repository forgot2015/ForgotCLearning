//
// Created by forgot on 2019-08-04.
//
/*1054 求平均值 (20 point(s))*/
/*本题的基本要求非常简单：给定 N 个实数，计算它们的平均值。但复杂的是有些输入数据可能是非法的。一个“合法”的输入是 [−1000,1000] 区间内的实数，并且最多精确到小数点后 2 位。当你计算平均值的时候，不能把那些非法的数据算在内。

输入格式：
输入第一行给出正整数 N（≤100）。随后一行给出 N 个实数，数字间以一个空格分隔。

输出格式：
对每个非法输入，在一行中输出 ERROR: X is not a legal number，其中 X 是输入。最后在一行中输出结果：The average of K numbers is Y，其中 K 是合法输入的个数，Y 是它们的平均值，精确到小数点后 2 位。如果平均值无法计算，则用 Undefined 替换 Y。如果 K 为 1，则输出 The average of 1 number is Y。

输入样例 1：
7
5 -3.2 aaa 9999 2.3.4 7.123 2.35
输出样例 1：
ERROR: aaa is not a legal number
ERROR: 9999 is not a legal number
ERROR: 2.3.4 is not a legal number
ERROR: 7.123 is not a legal number
The average of 3 numbers is 1.38
输入样例 2：
2
aaa -9999
输出样例 2：
ERROR: aaa is not a legal number
ERROR: -9999 is not a legal number
The average of 0 numbers is Undefined*/

//推荐用例
/*
6
- -1.1 0.111 1.1.1 -1000 1000.1
 * */

//// 跑gcc时错了一个用例，Runtime Error , 换成clang就通过了...暂时不知原因
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int isValid(char *str) {
//    int len = strlen(str);
//    if (len > 8) {
//        return 0;
//    }
//
//    // 如果只有一位，且首位是 - 或 .
//    if (len == 1 && (str[0] == '-' || str[0] == '.')) {
//        return 0;
//    }
//
//    // 如果超过1位，首位却是1，也错误
//    if (len > 1 && str[0] == '0') {
//        return 0;
//    }
//
//    for (int i = 0; i < len; i++) {
////        允许出现的字符是 - . 0123456789
//        if ((str[i] < '0' || str[i] > '9') && (str[i] != '.' && str[i] != '-')) {
//            return 0;
//        }
//
//        if (str[i] == '-' && i != 0) {
//            return 0;
//        }
//
//        int pointCount = 0;
//        if (str[i] == '.') {
//            pointCount = pointCount + 1;
//            if (pointCount > 1) {
//                return 0;
//            }
//            if (i < len - 3) {
//                return 0;
//            }
//        }
//    }
//
//    double num = atof(str);
//    if (num > 1000.00 || num < -1000.00) {
//        return 0;
//    } else {
//        return 1;
//    }
//}
//
//int main() {
//    int N;
//    double sum = 0.0;
//    int validCount = 0;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++) {
//        char input[20];
//        scanf("%s", input);
//        if (isValid(input)) {
//            validCount++;
//            double num = atof(input);
//            sum += num;
//        } else {
//            printf("ERROR: %s is not a legal number\n", input);
//        }
//    }
//
//    if (validCount == 0) {
//        printf("The average of 0 numbers is Undefined");
//    } else if (validCount == 1) {
//        printf("The average of 1 number is %.2lf", sum);
//    } else {
//        printf("The average of %d numbers is %.2lf", validCount, sum / validCount);
//    }
//
//    return 0;
//}
