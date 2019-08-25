//
// Created by forgot on 2019-08-04.
//
/*1062 最简分数 (20 point(s))*/
/*一个分数一般写成两个整数相除的形式：N/M，其中 M 不为0。最简分数是指分子和分母没有公约数的分数表示形式。

现给定两个不相等的正分数 N1/M1
和 N2/M2，要求你按从小到大的顺序列出它们之间分母为 K 的最简分数。

输入格式：
输入在一行中按 N/M 的格式给出两个正分数，随后是一个正整数分母 K，其间以空格分隔。题目保证给出的所有整数都不超过 1000。

输出格式：
在一行中按 N/M 的格式列出两个给定分数之间分母为 K 的所有最简分数，按从小到大的顺序，其间以 1 个空格分隔。行首尾不得有多余空格。题目保证至少有 1 个输出。

输入样例：
7/18 13/20 12
输出样例：
5/12 7/12*/

// 一开始错了一个用例，坑点是没有说明两分数的大小，可能第一个比第二个大...被给出的测试用例误导了...
//#include <stdio.h>
//
////判断两数是否有公约数
//int hasCommonDivisor(int i, int k) {
//    for (int j = 2; j <= i; ++j) {
//        if (i % j == 0 && k % j == 0) {
//            return 1;
//        }
//    }
//    return 0;
//}
//
//int main() {
//    int N1, M1, N2, M2, K;
//    scanf("%d/%d %d/%d %d", &N1, &M1, &N2, &M2, &K);
//    double d1 = N1 * 1.0 / M1;
//    double d2 = N2 * 1.0 / M2;
//    if (d1 > d2) {
//        double tmp = d1;
//        d1 = d2;
//        d2 = tmp;
//    }
//
//    int isFirst = 1;
//    for (int i = 1; i <= K; i++) {
//        if (!hasCommonDivisor(i, K)) {
//            double di = i * 1.0 / K;
////            注意，d1 d2之间不包含两端点，否则会错1个用例
//            if (di > d1 && di < d2) {
//                if(isFirst){
//                    printf("%d/%d", i, K);
//                    isFirst = 0;
//                }else{
//                    printf(" %d/%d", i, K);
//                }
//
//            }
//        }
//    }
//
//    return 0;
//}




//#include <stdio.h>
//
////判断两数是否有公约数
//int hasCommonDivisor(int i, int k) {
//    for (int j = 2; j <= i; ++j) {
//        if (i % j == 0 && k % j == 0) {
//            return 1;
//        }
//    }
//    return 0;
//}
//
//int main() {
//    int N1, M1, N2, M2, K;
//    scanf("%d/%d %d/%d %d", &N1, &M1, &N2, &M2, &K);
//    double d1 = N1 * 1.0 / M1;
//    double d2 = N2 * 1.0 / M2;
//    if (d1 > d2) {
//        double tmp = d1;
//        d1 = d2;
//        d2 = tmp;
//    }
//
//    int count = 0;
//    int num[K];
//    for (int i = 1; i <= K; i++) {
//        if (!hasCommonDivisor(i, K)) {
//            double di = i * 1.0 / K;
////            注意，d1 d2之间不包含两端点，否则会错1个用例
//            if (di > d1 && di < d2) {
//                num[count] = i;
//                count++;
//            }
//        }
//    }
//
//    for (int j = 0; j < count; ++j) {
//        printf("%d/%d", num[j], K);
//
//        if (j != count - 1) {
//            printf(" ");
//        }
//    }
//
//    return 0;
//}




