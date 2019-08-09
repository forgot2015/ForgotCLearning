//
// Created by forgot on 2019-08-04.
//
/*1030 完美数列 (25 point(s))*/
/*给定一个正整数数列，和正整数 p，设这个数列中的最大值是 M，最小值是 m，如果 M≤mp，则称这个数列是完美数列。

现在给定参数 p 和一些正整数，请你从中选择尽可能多的数构成一个完美数列。

输入格式：
输入第一行给出两个正整数 N 和 p，其中 N（≤10
​5
​​ ）是输入的正整数的个数，p（≤10
​9
​​ ）是给定的参数。第二行给出 N 个正整数，每个数不超过 10
​9
​​ 。

输出格式：
在一行中输出最多可以选择多少个数可以用它们组成一个完美数列。

输入样例：
10 8
2 3 20 4 5 1 6 7 8 9
输出样例：
8*/

#include <stdio.h>
#include <stdlib.h>

//int cmp(const void *a, const void *b);
//
//int main() {
//    int N, p;
//    scanf("%d %d", &N, &p);
//    int num[N];
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    qsort(num, N, sizeof(num[0]), cmp);
//
//    int maxLen = 0;
//    for (int j = 0; j < N; j++) {
//        for (int i = j + maxLen; i < N; i++) {
//            if (num[i] > num[j] * p) {
//                break;
//            }
//            maxLen++;
//        }
//    }
//
//    printf("%d", maxLen);
//
//    return 0;
//}
//
//int cmp(const void *a, const void *b) { return *(int *) a - *(int *) b; }
