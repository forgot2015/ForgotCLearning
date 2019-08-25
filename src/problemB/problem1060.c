//
// Created by forgot on 2019-08-04.
//
/*1060 爱丁顿数 (25 point(s))*/
/*英国天文学家爱丁顿很喜欢骑车。据说他为了炫耀自己的骑车功力，还定义了一个“爱丁顿数” E ，即满足有 E 天骑车超过 E 英里的最大整数 E。
 * 据说爱丁顿自己的 E 等于87。

现给定某人 N 天的骑车距离，请你算出对应的爱丁顿数 E（≤N）。

输入格式：
输入第一行给出一个正整数 N (≤10
​5
​​ )，即连续骑车的天数；第二行给出 N 个非负整数，代表每天的骑车距离。

输出格式：
在一行中给出 N 天的爱丁顿数。

输入样例：
10
6 7 6 9 3 10 8 2 7 8
输出样例：
6*/


//#include <stdio.h>
//#include <stdlib.h>
//
////从大到小排序
//int cmp(const void *a, const void *b) {
//    return *(int *) b - *(int *) a;
//}
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    int mile[N];
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &mile[i]);
//    }
//    qsort(mile, N, sizeof(mile[0]), cmp);
//
//    int E = 0;
//    for (int j = 0; j < N; j++) {
//        for (int i = j; i >= 0; i--) {
//            if (mile[j] > i + 1) {
//                if (i + 1 > E) {
//                    E = i + 1;
////                    满足一个当前最大的E就break，否则时间复杂度太大，超时
//                    break;
//                }
//            }
//        }
//    }
//    printf("%d", E);
//    return 0;
//}



//#include "stdio.h"
//错了3个用例, 时间复杂度太大
//int main() {
//    int N;
//    scanf("%d", &N);
//    int maxE = 1;
//    int maxNum = 0;
//    int num[N];
//    for (int i = 0; i < N; ++i) {
//        scanf("%d", &num[i]);
//        if (num[i] > maxNum) {
//            maxNum = num[i];
//        }
//    }
//
////    从1遍历到最大的数，看哪个是符合条件中最大的E
//    for (int j = 1; j < maxNum; ++j) {
//        int count = 0;
//        for (int i = 1; i < N; ++i) {
//            if (num[i] > j) {
//                count++;
//            }
//        }
//
//        if (count >= j && j > maxE) {
//            maxE = j;
//        }
//    }
//    printf("%d", maxE);
//
//    return 0;
//}