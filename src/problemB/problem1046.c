//
// Created by forgot on 2019-08-04.
//
/*1046 划拳 (15 point(s))*/
/*划拳是古老中国酒文化的一个有趣的组成部分。酒桌上两人划拳的方法为：每人口中喊出一个数字，同时用手比划出一个数字。如果谁比划出的数字正好等于两人喊
 * 出的数字之和，谁就赢了，输家罚一杯酒。两人同赢或两人同输则继续下一轮，直到唯一的赢家出现。

下面给出甲、乙两人的划拳记录，请你统计他们最后分别喝了多少杯酒。

输入格式：
输入第一行先给出一个正整数 N（≤100），随后 N 行，每行给出一轮划拳的记录，格式为：

甲喊 甲划 乙喊 乙划
其中喊是喊出的数字，划是划出的数字，均为不超过 100 的正整数（两只手一起划）。

输出格式：
在一行中先后输出甲、乙两人喝酒的杯数，其间以一个空格分隔。

输入样例：
5
8 10 9 12
5 10 5 10
3 8 5 12
12 18 1 13
4 16 12 15
输出样例：
1 2*/

//#include <stdio.h>
//
//int main() {
//    int N;
//    int aDrink = 0, bDrink = 0;
//    int aHan, aHua, bHan, bHua;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++) {
//        scanf("%d %d %d %d", &aHan, &aHua, &bHan, &bHua);
//
//        int sum = aHan + bHan;
//
//        if (aHua == sum && bHua != sum) {
//            bDrink++;
//        } else if (bHua == sum && aHua != sum) {
//            aDrink++;
//        }
//    }
//
//    printf("%d %d", aDrink, bDrink);
//
//    return 0;
//}

//int main() {
//    int N;
//    int aDrink = 0, bDrink = 0;
//    int aHan, aHua, bHan, bHua;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++) {
//        scanf("%d %d %d %d", &aHan, &aHua, &bHan, &bHua);
//
////        如果两个喊的一样，则同输赢，继续下一局,错了一个用例，为何？
//// 一开始写的是aHan == bHan 是错的，重点不是喊，而是划，两者划的一样才是同输赢啊
//        if (aHua == bHua) {
//            continue;
//        }
//
//        int sum = aHan + bHan;
//        if (aHua == sum) {
//            bDrink++;
//        }  if (bHua == sum) {
//            aDrink++;
//        }
//    }
//
//    printf("%d %d", aDrink, bDrink);
//
//    return 0;
//}
