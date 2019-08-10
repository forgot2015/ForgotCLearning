//
// Created by forgot on 2019-08-04.
//
/*1027 打印沙漏 (20 point(s))*/
/*本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印

*****
 ***
  *
 ***
*****
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。

给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。

输入格式:
输入在一行给出1个正整数N（≤1000）和一个符号，中间以空格分隔。

输出格式:
首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。

输入样例:
19 *
输出样例:
*****
 ***
  *
 ***
*****
2*/
#include <stdio.h>
//错了一个用例
//int main() {
//    int N;
//    char sign;
//    scanf("%d %c", &N, &sign);
//
////    总共字符数量
//    int sum = 1;
////    最顶层的字符数量
//    int topCount = 1;
////    上面有几层， 总层数 = 上面+1+下面
//    int topLayer = 0;
//    while (sum < N) {
//        topCount += 2;
//        sum = sum + topCount * 2;
//        topLayer++;
//    }
//
//    sum = sum - topCount * 2;
//    topCount = topCount - 2;
//    topLayer = topLayer - 1;
//
//    int topCountFinal = topCount;
//
//    for (int i = 0; i < topLayer; i++) {
//        for (int k = 0; k < i; k++) {
//            printf(" ");
//        }
//
//        for (int j = 0; j < topCount; j++) {
//            putchar(sign);
//        }
//        printf("\n");
//        topCount = topCount - 2;
//    }
//
//    for (int l = 0; l < topCountFinal / 2; l++) {
//        printf(" ");
//    }
//    printf("%c\n", sign);
//
//    topCount = topCount + 2;
//    for (int m = topLayer; m > 0; m--) {
//        for (int k = m - 1; k > 0; k--) {
//            printf(" ");
//        }
//
//        for (int j = topCount; j > 0; j--) {
//            putchar(sign);
//        }
//
//        printf("\n");
//        topCount = topCount + 2;
//    }
//
//    printf("%d", N - sum);
//
//    return 0;
//}