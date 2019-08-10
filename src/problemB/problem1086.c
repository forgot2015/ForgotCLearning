//
// Created by forgot on 2019-08-04.
//
/*1086 就不告诉你 (15 point(s))*/
/*做作业的时候，邻座的小盆友问你：“五乘以七等于多少？”你应该不失礼貌地围笑着告诉他：“五十三。”本题就要求你，对任何一对给定的正整数，倒着输出它们的乘积。

53.jpg

输入格式：
输入在第一行给出两个不超过 1000 的正整数 A 和 B，其间以空格分隔。

输出格式：
在一行中倒着输出 A 和 B 的乘积。

输入样例：
5 7
输出样例：
53*/
#include <stdio.h>

//int main() {
//    int A, B;
//    scanf("%d %d", &A, &B);
//    int product = A * B;
//    int num[8];
//    int n = 0;
//
//    while (product != 0) {
//        num[n] = product % 10;
//        product = product / 10;
//        n++;
//    }
//
//    int out = 0;
//    for (int i = 0; i < n; i++) {
//        out = out * 10 + num[i];
//    }
//
//    printf("%d", out);
//
//    return 0;
//}