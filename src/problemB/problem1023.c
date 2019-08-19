//
// Created by forgot on 2019-08-04.
//
/*1023 组个最小数 (20 point(s))*/
/*给定数字 0-9 各若干个。你可以以任意顺序排列这些数字，但必须全部使用。目标是使得最后得到的数尽可能小（注意 0 不能做首位）。
 * 例如：给定两个 0，两个 1，三个 5，一个 8，我们得到的最小的数就是 10015558。

现给定数字，请编写程序输出能够组成的最小的数。

输入格式：
输入在一行中给出 10 个非负整数，顺序表示我们拥有数字 0、数字 1、……数字 9 的个数。整数间用一个空格分隔。10 个数字的总个数不超过 50，
 且至少拥有 1 个非 0 的数字。

输出格式：
在一行中输出能够组成的最小的数。

输入样例：
2 2 0 0 0 3 0 0 1 0
输出样例：
10015558*/

#include <stdio.h>


//int main() {
//    int count[11];
//    char number[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
//
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &count[i]);
//    }
//
////    计算第一位
//    for (int j = 1; j < 10; j++) {
//        if (count[j]) {
//            putchar(number[j]);
//            count[j]--;
//            break;
//        }
//    }
//
////    计算剩余位,直接输出
//    for (int j = 0; j < 10; j++) {
//        while (count[j]) {
//            putchar(number[j]);
//            count[j]--;
//        }
//    }
//
//    return 0;
//}

//法2, 麻烦一点, 把最小值记录下来，最后再输出
//int main() {
//    int count[11];
//    char min[51];
//    int minCount = 0;
//    char number[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
//
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &count[i]);
//    }
//
////    计算第一位
//    for (int j = 1; j < 10; j++) {
//        if (count[j]) {
//            min[minCount] = number[j];
//            minCount++;
//            count[j]--;
//            break;
//        }
//    }
//
////    计算剩余位
//    for (int j = 0; j < 10; j++) {
//        while (count[j]) {
//            min[minCount] = number[j];
//            minCount++;
//            count[j]--;
//        }
//    }
//
////    输出结果
//    for (int i = 0; i < minCount; i++) {
//        printf("%c", min[i]);
//    }
//
//    return 0;
//}


