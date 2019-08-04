//
// Created by forgot on 2019-08-04.
//
/*1037 在霍格沃茨找零钱 (20 point(s))*/
/*如果你是哈利·波特迷，你会知道魔法世界有它自己的货币系统 —— 就如海格告诉哈利的：“十七个银西可(Sickle)兑一个加隆(Galleon)，二十九个纳特(Knut)兑一个西可，很容易。”现在，给定哈利应付的价钱 P 和他实付的钱 A，你的任务是写一个程序来计算他应该被找的零钱。

输入格式：
输入在 1 行中分别给出 P 和 A，格式为 Galleon.Sickle.Knut，其间用 1 个空格分隔。这里 Galleon 是 [0, 10
​7
​​ ] 区间内的整数，Sickle 是 [0, 17) 区间内的整数，Knut 是 [0, 29) 区间内的整数。

输出格式：
在一行中用与输入同样的格式输出哈利应该被找的零钱。如果他没带够钱，那么输出的应该是负数。

输入样例 1：
10.16.27 14.1.28
输出样例 1：
3.2.1
输入样例 2：
14.1.28 10.16.27
输出样例 2：
-3.2.1*/

#include <stdio.h>

struct Money {
    int Sickle;
    int Galleon;
    int Knut;
};

//int main() {
//    struct Money P, A, Out;
//    int Psum;
//    int Asum;
//
//    scanf("%d.%d.%d %d.%d.%d", &P.Sickle, &P.Galleon, &P.Knut, &A.Sickle, &A.Galleon, &A.Knut);
//
//    Psum = P.Sickle * 17 * 29 + P.Galleon * 29 + P.Knut;
//    Asum = A.Sickle * 17 * 29 + A.Galleon * 29 + A.Knut;
////    0表示负数，1表示正数
//    int flag = 0;
//
//    if (Asum >= Psum) {
//        flag = 1;
//
//        Out.Sickle = A.Sickle - P.Sickle;
//        Out.Galleon = A.Galleon - P.Galleon;
//        Out.Knut = A.Knut - P.Knut;
//
//        if (Out.Knut < 0) {
//            Out.Knut += 29;
//            Out.Galleon--;
//        }
//
//        if (Out.Galleon < 0) {
//            Out.Galleon += 17;
//            Out.Sickle--;
//        }
//    } else {
//        flag = 0;
//
//        Out.Sickle = P.Sickle - A.Sickle;
//        Out.Galleon = P.Galleon - A.Galleon;
//        Out.Knut = P.Knut - A.Knut;
//
//        if (Out.Knut < 0) {
//            Out.Knut += 29;
//            Out.Galleon--;
//        }
//
//        if (Out.Galleon < 0) {
//            Out.Galleon += 17;
//            Out.Sickle--;
//        }
//    }
//    if (!flag) {
//        printf("-");
//    }
//    printf("%d.%d.%d", Out.Sickle, Out.Galleon, Out.Knut);
//
//    return 0;
//}

//简单解法啊
//int main(){
//    int a1,a2,a3;
//    int b1,b2,b3;
//    int P;
//    int A;
//    int change;
//    scanf("%d.%d.%d %d.%d.%d",&a1,&a2,&a3,&b1,&b2,&b3);
//    P=a1*17*29+a2*29+a3;
//    A=b1*17*29+b2*29+b3;
//    change=A-P;
//    if(change<0){
//        printf("-");
//        change=-change;
//    }
//
//    printf("%d.%d.%d",change/(29*17),change%(29*17)/29,change%29);
//}