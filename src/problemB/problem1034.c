//
// Created by forgot on 2019-08-04.
//
/*1034 有理数四则运算 (20 point(s))*/
/*本题要求编写程序，计算 2 个有理数的和、差、积、商。

输入格式：
输入在一行中按照 a1/b1 a2/b2 的格式给出两个分数形式的有理数，其中分子和分母全是整型范围内的整数，负号只可能出现在分子前，分母不为 0。

输出格式：
分别在 4 行中按照 有理数1 运算符 有理数2 = 结果 的格式顺序输出 2 个有理数的和、差、积、商。注意输出的每个有理数必须是该有理数的最简形式 k a/b，其中 k 是整数部分，a/b 是最简分数部分；若为负数，则须加括号；若除法分母为 0，则输出 Inf。题目保证正确的输出中没有超过整型范围的整数。

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

#include <stdio.h>

//shit 分子分母的计算啊

void printFlag0(int a, int b) {
    if (a > 0) {
        printf("%d/%d", a, b);
    } else {
        printf("(%d/%d)", a, b);
    }
}

void printFlag1(int a, int b) {
    printf("0");
}

void printFlag2(int a, int b) {
    if (a > 0) {
        printf("%d", a / b);
        printf("%d/%d", a - b, b);
    } else {
        printf("(%d", a / b);
        printf("%d/%d)", a - b, b);
    }
}

void printFlag3(int a, int b) {
    if (a > 0) {
        printf("%d", a / b);
    } else {
        printf("(%d)", a / b);
    }
}

//int main() {
//    int a1, b1, a2, b2;
//    scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
////    printf("%d %d %d %d", a1, b1, a2, b2);
//
////数字 + 分数 中的数字
//    int c1, c2;
////   数字 + 分数 中的分子
//    int d1, d2;
//
//    //0表示最普通的情况，1表示a=0的情况, 2表示数字+分数的情况，3表示整除成纯数字的情况
//    int flag1 = -1;
//    if (a1 == 0) {
//        flag1 = 1;
//    } else if (a1 / b1 != 0) {
//        if (a1 % b1 == 0) {
//            flag1 = 3;
//        } else {
//            flag1 = 2;
//        }
//    } else {
//        flag1 = 0;
//    }
//
//    //0表示最普通的情况，1表示a=0的情况, 2表示数字+分数的情况，3表示整除成纯数字的情况
//    int flag2 = -1;
//    if (a2 == 0) {
//        flag2 = 1;
//    } else if (a2 / b2 != 0) {
//        if (a2 % b2 != 0) {
//            flag2 = 2;
//        } else {
//            flag2 = 3;
//        }
//    } else {
//        flag2 = 0;
//    }
//
//    if (flag1 == 0) {
//        printFlag0(a1, b1);
//        printf(" + ");
//
//        if (flag2 == 0) {
//            printFlag0(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 1) {
//            printFlag1(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 2) {
//            printFlag2(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 3) {
//            printFlag3(a2, b2);
//            printf(" = ");
//        }
//
//        printf("\n");
//    }else if (flag1 == 1) {
//        printFlag1(a1, b1);
//        printf(" - ");
//
//        if (flag2 == 0) {
//            printFlag0(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 1) {
//            printFlag1(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 2) {
//            printFlag2(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 3) {
//            printFlag3(a2, b2);
//            printf(" = ");
//        }
//
//        printf("\n");
//    }
//    else if (flag1 == 2) {
//        printFlag1(a1, b1);
//        printf(" * ");
//
//        if (flag2 == 0) {
//            printFlag0(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 1) {
//            printFlag1(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 2) {
//            printFlag2(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 3) {
//            printFlag3(a2, b2);
//            printf(" = ");
//        }
//
//        printf("\n");
//    }else if (flag1 == 3) {
//        printFlag1(a1, b1);
//        printf(" / ");
//
//        if (flag2 == 0) {
//            printFlag0(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 1) {
//            printFlag1(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 2) {
//            printFlag2(a2, b2);
//            printf(" = ");
//        } else if (flag2 == 3) {
//            printFlag3(a2, b2);
//            printf(" = ");
//        }
//
//    }
//
//    return 0;
//}






