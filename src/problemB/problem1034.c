//
// Created by forgot on 2019-08-04.
//
/*1034 有理数四则运算 (20 point(s))*/
/*本题要求编写程序，计算 2 个有理数的和、差、积、商。

输入格式：
输入在一行中按照 a1/b1 a2/b2 的格式给出两个分数形式的有理数，其中分子和分母全是整型范围内的整数，负号只可能出现在分子前，分母不为 0。

输出格式：
分别在 4 行中按照 有理数1 运算符 有理数2 = 结果 的格式顺序输出 2 个有理数的和、差、积、商。注意输出的每个有理数必须是该有理数的最简形式 k a/b，
 其中 k 是整数部分，a/b 是最简分数部分；若为负数，则须加括号；若除法分母为 0，则输出 Inf。题目保证正确的输出中没有超过整型范围的整数。

输入样例 1：
2/3 -4/2
输出样例 1：
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)
输入样例 2：
5/3 0/6
输出样例 2：
1 2/3 + 0 = 1 2/3
1 2/3 - 0 = 1 2/3
1 2/3 * 0 = 0
1 2/3 / 0 = Inf*/


////一开始错一个用例，用a * b < 0来判断结果正负性会错第三个用例，原因未知
//#include <stdio.h>
//
//long getGcd(long a, long b);
//
//long printShow(long a, long b);
//
//int main() {
//    long a1, b1, a2, b2;
//    scanf("%ld/%ld %ld/%ld", &a1, &b1, &a2, &b2);
//    printShow(a1, b1);
//    printf(" + ");
//    printShow(a2, b2);
//    printf(" = ");
//    printShow(a1 * b2 + a2 * b1, b1 * b2);
//    printf("\n");
//
//    printShow(a1, b1);
//    printf(" - ");
//    printShow(a2, b2);
//    printf(" = ");
//    printShow(a1 * b2 - a2 * b1, b1 * b2);
//    printf("\n");
//
//    printShow(a1, b1);
//    printf(" * ");
//    printShow(a2, b2);
//    printf(" = ");
//    printShow(a1 * a2, b1 * b2);
//    printf("\n");
//
//    printShow(a1, b1);
//    printf(" / ");
//    printShow(a2, b2);
//    printf(" = ");
//    printShow(a1 * b2, b1 * a2);
//
//    return 0;
//}
//
//long printShow(long a, long b) {
//    if (b == 0) {
//        printf("Inf");
//        return 0;
//    }
//
//    int sign = 1;
////    为何用这个来判断负号会错第三个用例，PAT编译器问题？
////    if (a * b < 0) {
////        sign = -1;
////    }
//
//    if (a < 0) {
//        a = -a;
//        sign = sign * (-1);
//    }
//    if (b < 0) {
//        b = -b;
//        sign = sign * (-1);
//    }
//
////    约分成最简分数
//    long r = getGcd(a, b);
//    a = a / r;
//    b = b / r;
//
//    if (sign == -1) {
//        printf("(-");
//    }
//
//    if (b == 1) {
//        printf("%ld", a);
//    } else if (a < b) {
//        printf("%ld/%ld", a, b);
//    } else if (a > b) {
//        printf("%ld %ld/%ld", a / b, a % b, b);
//    }
//
//    if (sign == -1) {
//        printf(")");
//    }
//    return 0;
//}
//
////辗转相除法求最大公约数
//long getGcd(long a, long b) {
//    long r = a % b;
//    while (r != 0) {
//        a = b;
//        b = r;
//        r = a % b;
//    }
//
//    return b;
//}
