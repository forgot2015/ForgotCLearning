//
// Created by forgot on 2019-08-04.
//
/*1088 三人行 (20 point(s))*/
/*子曰：“三人行，必有我师焉。择其善者而从之，其不善者而改之。”

本题给定甲、乙、丙三个人的能力值关系为：甲的能力值确定是 2 位正整数；把甲的能力值的 2 个数字调换位置就是乙的能力值；
 甲乙两人能力差是丙的能力值的 X 倍；乙的能力值是丙的 Y 倍。请你指出谁比你强应“从之”，谁比你弱应“改之”。

输入格式：
输入在一行中给出三个数，依次为：M（你自己的能力值）、X 和 Y。三个数字均为不超过 1000 的正整数。

输出格式：
在一行中首先输出甲的能力值，随后依次输出甲、乙、丙三人与你的关系：如果其比你强，输出 Cong；平等则输出 Ping；比你弱则输出 Gai。
 其间以 1 个空格分隔，行首尾不得有多余空格。

注意：如果解不唯一，则以甲的最大解为准进行判断；如果解不存在，则输出 No Solution。

输入样例 1：
48 3 7
输出样例 1：
48 Ping Cong Gai
输入样例 2：
48 11 6
输出样例 2：
No Solution*/

#include "stdio.h"

char *comp(int me, int a) {
    if (me == a) {
        return "Ping";
    } else if (me < a) {
        return "Cong";
    } else {
        return "Gai";
    }
}
//错了两个用例
//int main() {
//    int M, X, Y;
//    scanf("%d %d %d", &M, &X, &Y);
//    int a, b, c;
//    int a1, a2;
//    int numA1[100];
//    int numA2[100];
//    int count = 0;
//    for (a1 = 1; a1 <= 9; a1++) {
//        for (a2 = 1; a2 <= 9; a2++) {
//            a = a1 * 10 + a2;
//            if (a % 2 != 0) {
//                continue;
//            }
//
//            b = a2 * 10 + a1;
////            如果b不是Y的整数倍，则进行下一轮检测
//            if (b % Y != 0) {
//                continue;
//            }
//            c = b / Y;
//            if (a - b == c * X) {
//                numA1[count] = a1;
//                numA2[count] = a2;
//                count++;
////                printf("a1=%d, a2=%d\n", a1, a2);
////                printf("%d %s %s %s", a, comp(M, a), comp(M, b), comp(M, c));
////                return 0;
//            } else if (b - a == c * X) {
//                numA1[count] = a1;
//                numA2[count] = a2;
//                count++;
////                printf("a1=%d, a2=%d\n", a1, a2);
////                printf("%d %s %s %s", a, comp(M, a), comp(M, b), comp(M, c));
////                return 0;
//            }
//        }
//    }
//
//    if (count) {
////        printf("%d %d\n", numA1[count - 1], numA2[count - 1]);
//        a = numA1[count - 1] * 10 + numA2[count - 1];
//        b = numA2[count - 1] * 10 + numA1[count - 1];
//        c = b / Y;
//        printf("%d %s %s %s", a, comp(M, a), comp(M, b), comp(M, c));
//    } else {
//        printf("No Solution");
//    }
//
//
//    return 0;
//}
