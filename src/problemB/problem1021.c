//
// Created by forgot on 2019-08-04.
//
/*1021 个位数统计 (15 point(s))*/
/*给定一个 k 位整数 N=d
​k−1
​​ 10
​k−1
​​ +⋯+d
​1
​​ 10
​1
​​ +d
​0
​​  (0≤d
​i
​​ ≤9, i=0,⋯,k−1, d
​k−1
​​ >0)，请编写程序统计每种不同的个位数字出现的次数。例如：给定 N=100311，则有 2 个 0，3 个 1，和 1 个 3。

输入格式：
每个输入包含 1 个测试用例，即一个不超过 1000 位的正整数 N。

输出格式：
对 N 中每一种不同的个位数字，以 D:M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。要求按 D 的升序输出。

输入样例：
100311
输出样例：
0:2
1:3
3:1*/
#include <stdio.h>
#include <string.h>

//int main() {
//    char strN[1001];
//    scanf("%s", strN);
//
//    int count[11] = {0};
//
//    for (int i = 0; i < strlen(strN); i++) {
//        switch (strN[i]) {
//            case '0':
//                count[0]++;
//                break;
//            case '1':
//                count[1]++;
//                break;
//            case '2':
//                count[2]++;
//                break;
//            case '3':
//                count[3]++;
//                break;
//            case '4':
//                count[4]++;
//                break;
//            case '5':
//                count[5]++;
//                break;
//            case '6':
//                count[6]++;
//                break;
//            case '7':
//                count[7]++;
//                break;
//            case '8':
//                count[8]++;
//                break;
//            case '9':
//                count[9]++;
//                break;
//            default:
//                break;
//
//        }
//    }
//
//    for (int j = 0; j < 10; j++) {
//        if (count[j]) {
//            printf("%d:%d\n", j, count[j]);
//        }
//    }
//
//    return 0;
//}
//
////法2
//int main() {
//    char strN[1001];
//    scanf("%s", strN);
//
//    int count[11] = {0};
//
//    for (int i = 0; i < strlen(strN); i++) {
//        for (int j = 0; j < 10; j++) {
//            if (j + '0' == strN[i]) {
//                count[j]++;
//                break;
//            }
//        }
//    }
//
//    for (int j = 0; j < 10; j++) {
//        if (count[j]) {
//            printf("%d:%d\n", j, count[j]);
//        }
//    }
//
//    return 0;
//}