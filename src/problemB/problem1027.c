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

//#include <stdio.h>
//
//int main() {
//    int N;
//    char sign;
//    scanf("%d %c", &N, &sign);
//    if (N < 7) {
//        printf("%c\n%d", sign, N - 1);
//        return 0;
//    }
//
//    int topLevel = 0;
//    int curLeverCount = 1;
//    int useNum = 1;
//    while (useNum + (curLeverCount + 2) * 2 <= N) {
//        curLeverCount += 2;
//        useNum += curLeverCount * 2;
//        topLevel++;
//    }
//
////    打印上部分
//    for (int i = 0; i < topLevel; i++) {
//        for (int k = 0; k < i; k++) {
//            putchar(' ');
//        }
//
//        for (int j = 0; j < curLeverCount; j++) {
//            putchar(sign);
//        }
//        curLeverCount = curLeverCount - 2;
//        putchar('\n');
//    }
//
////    打印中间
//    for (int k = 0; k < topLevel; k++) {
//        putchar(' ');
//    }
//    printf("%c\n", sign);
//
////    打印下部分
//    for (int i = topLevel - 1; i >= 0; i--) {
//        curLeverCount = curLeverCount + 2;
//        for (int k = i; k > 0; k--) {
//            putchar(' ');
//        }
//
//        for (int j = 0; j < curLeverCount; j++) {
//            putchar(sign);
//        }
//        putchar('\n');
//    }
//
//    printf("%d", N - useNum);
//
//    return 0;
//}
