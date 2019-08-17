//
// Created by forgot on 2019-08-03.
//
/*1016 部分A+B (15 point(s))*/
//正整数 A 的“D​A​​（为 1 位整数）部分”定义为由 A 中所有 D​A​​ 组成的新整数 P​A​​。例如：给定 A=3862767，D​A​​=6，则 A 的“6 部分”P​A​​ 是 66，因为 A 中有 2 个 6。
//现给定 A、D​A​​、B、D​B​​，请编写程序计算 P​A​​+P​B​​。
//输入格式：
//输入在一行中依次给出 A、D​A​​、B、D​B​​，中间以空格分隔，其中 0<A,B<10​^10​​。
//输出格式：
//在一行中输出 P​A​​+P​B​​ 的值。
//输入样例 1：
//3862767 6 13530293 3
//输出样例 1：
//399
//输入样例 2：
//3862767 1 13530293 8
//输出样例 2：
//0

#include <stdio.h>
//用求余数法来各位数值
//int main() {
//    int A, Da, B, Db;
//    scanf("%d %d %d %d", &A, &Da, &B, &Db);
//    int Pa=0,Pb=0;
//    while (A!=0){
//        if (A%10==Da){
//            Pa = Pa*10+Da;
//        }
//        A = A/10;
//    }
//
//    while (B!=0){
//        if (B%10==Db){
//            Pb = Pb*10+Db;
//        }
//        B = B/10;
//    }
//
//    printf("%d", Pa + Pb);
//
//    return 0;
//}


//法2 字符串搜索的数字出现的个数
//int main() {
//    char A[10], B[10];
//    int Da, Db;
//    int Pa = 0;
//    int Pb = 0;
//    scanf("%s %d %s %d", A, &Da, B, &Db);
//    for (int i = 0; i < strlen(A); i++) {
//        if (A[i] == Da + '0') {
//            Pa = Pa * 10 + Da;
//        }
//    }
//
//    for (int i = 0; i < strlen(B); i++) {
//        if (B[i] == Db + '0') {
//            Pb = Pb * 10 + Db;
//        }
//    }
//
//    printf("%d", Pa + Pb);
//
//    return 0;
//}


