
// Created by forgot on 2019-08-03.
//
/*1019 数字黑洞 (20 point(s))*/
/*给定任一个各位数字不完全相同的 4 位正整数，如果我们先把 4 个数字按非递增排序，再按非递减排序，然后用第 1 个数字减第 2 个数字，将得到一个新的数字。
 * 一直重复这样做，我们很快会停在有“数字黑洞”之称的 6174，这个神奇的数字也叫 Kaprekar 常数。

例如，我们从6767开始，将得到

7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...
现给定任意 4 位正整数，请编写程序演示到达黑洞的过程。

输入格式：
输入给出一个 (0,10^4) 区间内的正整数 N。

输出格式：
如果 N 的 4 位数字全相等，则在一行内输出 N - N = 0000；否则将计算的每一步在一行内输出，直到 6174 作为差出现，输出格式见样例。
 注意每个数字按 4 位数格式输出。

输入样例 1：
6767
输出样例 1：
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
输入样例 2：
2222
输出样例 2：
2222 - 2222 = 0000*/

#include <stdio.h>
#include <stdlib.h>

//int sortMax(const void *a, const void *b) {
//    return *(int *) b - *(int *) a;
//}
//
//int main() {
//    int numStr[4];
//    int max, min;
//    int right = 0;
//    int num;
//    scanf("%d", &num);
//
////    若4位数字相同，则输出结果，程序结束
//    if (num % 1111 == 0) {
//        printf("%04d - %04d = 0000", num, num);
//        return 0;
//    }
//
//    while (right != 6174) {
//        numStr[0] = num / 1000;
//        numStr[1] = num / 100 % 10;
//        numStr[2] = num / 10 % 10;
//        numStr[3] = num % 10;
//        qsort(numStr, 4, sizeof(numStr[0]), sortMax);
//        max = numStr[0] * 1000 + numStr[1] * 100 + numStr[2] * 10 + numStr[3];
//        min = numStr[3] * 1000 + numStr[2] * 100 + numStr[1] * 10 + numStr[0];
//        right = max - min;
//
//        printf("%04d - %04d = %04d\n", max, min, right);
//        num = right;
//    }
//
//    return 0;
//}

