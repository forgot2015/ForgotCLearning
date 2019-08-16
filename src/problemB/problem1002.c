//
// Created by forgot on 2019-08-02.
//
/*1002 写出这个数 (20 point(s))*/
/*读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100。

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu*/

#include <stdio.h>

//int main() {
//    char *pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
//    int sum = 0;
//    char n[101];
//    int i = 0;
//    scanf("%s", n);
//    while (n[i] != 0) {
//        int num = n[i] - '0';
//        sum += num;
//        i++;
//    }
////    转化为pinyin并打印,10^100范围内的个位数相加最大为900，三位数
//    int weishu[4];
//    int index = 0;
//    while (sum) {
//        weishu[index] = sum % 10;
//        sum = sum / 10;
//        index++;
//    }
//
//    for (int j = index - 1; j >= 0; j--) {
//        printf("%s", pinyin[weishu[j]]);
////        如果不是最后一位，则再输出一个空格
//        if (j != 0) {
//            printf(" ");
//        }
//    }
//
//    return 0;
//}

//指针实现
//int main() {
//    char *pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
//    int sum = 0;
//    char n[101];
//    char *p;
//    scanf("%s", n);
//    p = n;
//    while (*p != 0) {
//        int num = *p - '0';
//        sum += num;
//        p++;
//    }
//
//    if (sum < 10) {
//        printf("%s", pinyin[sum]);
//    } else if (10 <= sum && sum < 100) {
//        printf("%s ", pinyin[sum / 10]);
//        printf("%s", pinyin[sum % 10]);
//    } else {
////        10^100范围内的个位数相加最大为900，三位数
//        printf("%s ", pinyin[sum / 100]);
//        printf("%s ", pinyin[(sum / 10) % 10]);
//        printf("%s", pinyin[sum % 10]);
//    }
//
//    return 0;
//}

