//
// Created by forgot on 2019-07-31.
//
/*1006 换个格式输出整数 (15 point(s))*/
//让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），换个格式来输出任一个不超过 3 位的正整数。
// 例如 234 应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、以及个位的 4。
//
//输入格式：
//每个测试输入包含 1 个测试用例，给出正整数 n（<1000）。
//
//输出格式：
//每个测试用例的输出占一行，用规定的格式输出 n。
//
//输入样例 1：
//234
//输出样例 1：
//BBSSS1234
//        输入样例 2：
//输出样例 2：

//23
//SS123

#include <stdio.h>
#include <string.h>

//int main() {
//    int n;
//    scanf("%d", &n);
//    int count = 0;
//    int weishu[4];
//    while (n) {
//        weishu[count] = n % 10;
//        n = n / 10;
//        count++;
//    }
//    int i;
//    for (i = 0; i < weishu[2]; i++)
//        printf("B");
//    for (i = 0; i < weishu[1]; i++)
//        printf("S");
//    for (i = 0; i < weishu[0]; i++)
//        printf("%i", i + 1);
//
//    return 0;
//}

////法2
//int main() {
//    int n, k, j, l;
//    scanf("%d", &n);
//    if (n < 10) {
//        for (int i = 1; i <= n; i++) {
//            printf("%d", i);
//        }
//    } else if (10 <= n && n < 100) {
//        j = n / 10;
//        l = n % 10;
//        for (int i = 0; i < j; i++) {
//            printf("S");
//        }
//        for (int i = 1; i <= l; i++) {
//            printf("%d", i);
//        }
//    } else if (100 <= n && n < 1000) {
//        k = n / 100;
//        j = (n / 10) % 10;
//        l = n % 10;
//        for (int i = 0; i < k; i++) {
//            printf("B");
//        }
//        for (int i = 0; i < j; i++) {
//            printf("S");
//        }
//        for (int i = 1; i <= l; i++) {
//            printf("%d", i);
//        }
//    }
//}

