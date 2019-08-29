//
// Created by forgot on 2019-08-04.
//
/*1079 延迟的回文数 (20 point(s))*/
/*给定一个 k+1 位的正整数 N，写成 a
​k
​​ ⋯a
​1
​​ a
​0
​​  的形式，其中对所有 i 有 0≤a
​i
​​ <10 且 a
​k
​​ >0。N 被称为一个回文数，当且仅当对所有 i 有 a
​i
​​ =a
​k−i
​​ 。零也被定义为一个回文数。

非回文数也可以通过一系列操作变出回文数。首先将该数字逆转，再将逆转数与该数相加，如果和还不是一个回文数，就重复这个逆转再相加的操作，
 直到一个回文数出现。如果一个非回文数可以变出回文数，就称这个数为延迟的回文数。（定义翻译自 https://en.wikipedia.org/wiki/Palindromic_number ）

给定任意一个正整数，本题要求你找到其变出的那个回文数。

输入格式：
输入在一行中给出一个不超过1000位的正整数。

输出格式：
对给定的整数，一行一行输出其变出回文数的过程。每行格式如下

A + B = C
其中 A 是原始的数字，B 是 A 的逆转数，C 是它们的和。A 从输入的整数开始。重复操作直到 C 在 10 步以内变成回文数，
 这时在一行中输出 C is a palindromic number.；或者如果 10 步都没能得到回文数，最后就在一行中输出 Not found in 10 iterations.。

输入样例 1：
97152
输出样例 1：
97152 + 25179 = 122331
122331 + 133221 = 255552
255552 is a palindromic number.
输入样例 2：
196
输出样例 2：
196 + 691 = 887
887 + 788 = 1675
1675 + 5761 = 7436
7436 + 6347 = 13783
13783 + 38731 = 52514
52514 + 41525 = 94039
94039 + 93049 = 187088
187088 + 880781 = 1067869
1067869 + 9687601 = 10755470
10755470 + 07455701 = 18211171
Not found in 10 iterations.*/

//#include "stdio.h"
//#include "string.h"
//
//int isHuiwen(char *str) {
//    int len = strlen(str);
//    for (int i = 0; i <= len / 2; i++) {
//        if (str[i] != str[len - i - 1]) {
//            return 0;
//        }
//    }
//
//    return 1;
//}
//
//int main() {
//    char str[1100] = {0};
//    char daoStr[1100] = {0};
//    scanf("%s", str);
//    int iterations = 0;
//    int len;
//    while (!isHuiwen(str) && iterations != 10) {
//        len = strlen(str);
//
//        for (int i = 0; i < len; i++) {
//            daoStr[i] = str[len - i - 1];
//        }
//        daoStr[len] = '\0';
//        char sumStr[len];
//        int shi = 0;
//        int ge = 0;
////        将两个数从最后一位个位开始相加，最后如果还有进位，则字符串再扩展一位
//        for (int i = len - 1; i >= 0; i--) {
//            int a = str[i] - '0';
//            int b = daoStr[i] - '0';
//            ge = (a + b + shi) % 10;
//            sumStr[i] = ge + '0';
//            shi = (a + b + shi) / 10;
//        }
//        sumStr[len] = '\0';
//
//        if (shi) {
//            memmove(sumStr + 1, sumStr, len + 1); /* Shift to right by 1 */
//            sumStr[0] = shi + '0';         /* Add the carry to beginning */
//        }
//
//        printf("%s + %s = %s\n", str, daoStr, sumStr);
//        strcpy(str, sumStr);
//        iterations++;
//    }
//    if (isHuiwen(str)) {
//        printf("%s is a palindromic number.", str);
//    } else {
//        printf("Not found in 10 iterations.");
//    }
//    return 0;
//}





////错了两个用例，要用字符串来算，因为1000位超出int范围了
//#include "stdio.h"
//#include "string.h"
//
//int isHuiwen(int a);
//
//int getDaoN(int n);
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    int iterations = 0;
//    while (!isHuiwen(N) && iterations != 10) {
//        int daoN = getDaoN(N);
//        printf("%d + %d = %d\n", N, daoN, N + daoN);
//        N = N + daoN;
//        iterations++;
//    }
//    if (isHuiwen(N)) {
//        printf("%d is a palindromic number.", N);
//    } else {
//        printf("Not found in 10 iterations.");
//    }
//    return 0;
//}
//
//int isHuiwen(int a) {
//    char str[20];
////    itoa(a, str, 10);
//    sprintf(str, "%d", a);
//    int n = strlen(str);
//    int halfN = strlen(str) / 2;
//    for (int i = 0; i < halfN; i++) {
//        if (str[i] != str[n - i - 1]) {
//            return 0;
//        }
//    }
//
//    return 1;
//}
//
//int getDaoN(int n) {
//    if (n < 10) {
//        return n;
//    }
//
//    int daoN = 0;
//    while (n / 10 != 0) {
//        daoN = daoN * 10 + n % 10;
//        n = n / 10;
//    }
//    daoN = daoN * 10 + n;
//    return daoN;
//}

