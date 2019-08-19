//
// Created by forgot on 2019-08-04.
//
/*1022 D进制的A+B (20 point(s))*/
/*输入两个非负 10 进制整数 A 和 B (≤2
​30
​​ −1)，输出 A+B 的 D (1<D≤10)进制数。

输入格式：
输入在一行中依次给出 3 个整数 A、B 和 D。

输出格式：
输出 A+B 的 D 进制数。

输入样例：
123 456 8
输出样例：
1103*/


#include <stdio.h>

void zhuanhuan(int i, int d);

//int main() {
//    int A, B, C, D;
//    scanf("%d %d %d", &A, &B, &D);
//    C = A + B;
//    zhuanhuan(C, D);
//
//    return 0;
//}
////用递归法 辗转相除
//void zhuanhuan(int i, int d) {
//    int yushu = i % d;
//    i = i / d;
//    if (i != 0) {
//        zhuanhuan(i, d);
//    }
//
//    printf("%d", yushu);
//    return;
//}


//shit 看错题了
//思路，A B都转10进制，相加之后，再转D进制？
//int main() {
//    int A, B, D;
//    scanf("%d %d %d", &A, &B, &D);
//    int Aten = 0, Bten = 0, Cten;
//    int Ad = 1, Bd = 1;
//    while (A != 0) {
//        Aten += (A % 10) * Ad;
//        A = A / 10;
//        Ad = Ad * D;
//    }
//
//    while (B != 0) {
//        Bten += (B % 10) * Bd;
//        B = B / 10;
//        Bd = Bd * D;
//    }
//
//    Cten = Aten + Bten;
//    printf("%d",Cten);
//
//    return 0;
//}
