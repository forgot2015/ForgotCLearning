//
// Created by forgot on 2019-08-03.
//
/*1012 数字分类 (20 point(s))*/

/*给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：

A
​1
​​  = 能被 5 整除的数字中所有偶数的和；
A
​2
​​  = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n
​1
​​ −n
​2
​​ +n
​3
​​ −n
​4
​​ ⋯；
A
​3
​​  = 被 5 除后余 2 的数字的个数；
A
​4
​​  = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
A
​5
​​  = 被 5 除后余 4 的数字中最大数字。
输入格式：
每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。

输出格式：
对给定的 N 个正整数，按题目要求计算 A
​1
​​ ~A
​5
​​  并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出 N。

输入样例 1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出样例 1：
30 11 2 9.7 9
输入样例 2：
8 1 2 4 5 6 7 9 16
输出样例 2：
N 11 2 N 9*/

#include <stdio.h>

//有一个用例没过，不知道原因
//int main() {
//    int N;
//    int a;
//    int sumA1 = 0;
//    int sumA2 = 0;
//    int flagA2 = 1;
//    int countA3 = 0;
//    int countA4 = 0;
//    float sumA4 = 0;
//    int maxA5 = 0;
//
//    scanf("%d", &N);
//    for (int i = 0; i < N; ++i) {
//        scanf("%d", &a);
////        能被 5 整除的数字中所有偶数的和，也就是能被10整除的数
//        if (a % 10 == 0) {
//            sumA1 += a;
//        }
//
//        if (a % 5 == 1) {
//            sumA2 += flagA2 * a;
//            if (flagA2 == 1) {
//                flagA2 = -1;
//            } else {
//                flagA2 = 1;
//            }
//        }
//
//        if (a % 5 == 2) {
//            countA3++;
//        }
//
//        if (a % 5 == 3) {
//            countA4++;
//            sumA4 += a;
//        }
//
//        if (a % 5 == 4) {
//            if (a > maxA5) {
//                maxA5 = a;
//            }
//        }
//    }
//
//    if (sumA1) {
//        printf("%d ", sumA1);
//    } else {
//        printf("N ");
//    }
//    if (sumA2) {
//        printf("%d ", sumA2);
//    } else {
//        printf("N ");
//    }
//    if (countA3) {
//        printf("%d ", countA3);
//    } else {
//        printf("N ");
//    }
//    if (countA4) {
//        printf("%0.1f ", sumA4 / countA4);
//    } else {
//        printf("N ");
//    }
//    if (maxA5) {
//        printf("%d", maxA5);
//    } else {
//        printf("N");
//    }
//
//    return 0;
//}

