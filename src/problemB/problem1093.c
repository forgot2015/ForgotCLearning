//
// Created by forgot on 2019-08-04.
//
/*1093 字符串A+B (20 point(s))*/
/*给定两个字符串 A 和 B，本题要求你输出 A+B，即两个字符串的并集。要求先输出 A，再输出 B，但重复的字符必须被剔除。

输入格式：
输入在两行中分别给出 A 和 B，均为长度不超过 10^​6的、由可见 ASCII 字符 (即码值为32~126)和空格组成的、由回车标识结束的非空字符串。

输出格式：
在一行中输出题面要求的 A 和 B 的和。

输入样例：
This is a sample test
to show you_How it works
输出样例：
This ampletowyu_Hrk*/

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char A[2000002];
//    char B[1000001];
//    gets(A);
//    gets(B);
//
//    strcat(A, B);
//
//    int outChar[128] = {0};
//
//    for (int i = 0; i < strlen(A); i++) {
//        if (!outChar[A[i]]) {
//            putchar(A[i]);
//
//            outChar[A[i]]++;
//        }
//    }
//
//    return 0;
//}

//法2，运算太多，字符多时 过于耗时，有个用例过不去
//int main() {
//    char A[1000001];
//    char B[1000001];
//    gets(A);
//    gets(B);
//
//    int outCount = 0;
//    int outCountMax = 95;
//    int outChar[128] = {0};
//
//    for (int i = 0; i < strlen(A); i++) {
//        if (!outChar[A[i]]) {
//            putchar(A[i]);
//            outChar[A[i]]++;
//            outCount++;
//        }
// 测试用例故意让这条件不满足，导致多余计算，反而更加耗时了，实际工作中还要看真实业务来调整算法
//        if (outCount >= outCountMax) {
//            break;
//        }
//    }
//
//    for (int i = 0; i < strlen(B); i++) {
//        if (!outChar[B[i]]) {
//            putchar(B[i]);
//            outChar[B[i]]++;
//            outCount++;
//        }
//
//        if (outCount >= outCountMax) {
//            break;
//        }
//    }
//
//    return 0;
//}

