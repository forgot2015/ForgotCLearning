//
// Created by forgot on 2019-08-03.
//
/*1020 月饼 (25 point(s))*/
/*月饼是中国人在中秋佳节时吃的一种传统食品，不同地区有许多不同风味的月饼。现给定所有种类月饼的库存量、总售价、以及市场的最大需求量，
 * 请你计算可以获得的最大收益是多少。

注意：销售时允许取出一部分库存。样例给出的情形是这样的：假如我们有 3 种月饼，其库存量分别为 18、15、10 万吨，总售价分别为 75、72、45 亿元。
 如果市场的最大需求量只有 20 万吨，那么我们最大收益策略应该是卖出全部 15 万吨第 2 种月饼、以及 5 万吨第 3 种月饼，获得 72 + 45/2 = 94.5（亿元）。

输入格式：
每个输入包含一个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N 表示月饼的种类数、以及不超过 500（以万吨为单位）的正整数 D 表示市场最大需求量。
 随后一行给出 N 个正数表示每种月饼的库存量（以万吨为单位）；最后一行给出 N 个正数表示每种月饼的总售价（以亿元为单位）。数字间以空格分隔。

输出格式：
对每组测试用例，在一行中输出最大收益，以亿元为单位并精确到小数点后 2 位。

输入样例：
3 20
18 15 10
75 72 45
输出样例：
94.50*/

////错了一个用例？原来是库存量stock有可能为小数的，不能用int,看到正数不要误以为就是正整数啊
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Mooncakes {
//    double stock;
//    double totalPrice;
//    double perPrice;
//} Mooncake;
//
////售价从大到小排序
//int cmp(const void *a, const void *b) {
//    Mooncake A = *(Mooncake *) a;
//    Mooncake B = *(Mooncake *) b;
//
//    if (B.perPrice > A.perPrice) {
//        return 1;
//    } else if (B.perPrice < A.perPrice) {
//        return -1;
//    } else {
//        return 0;
//    }
//}
//
//
//int main() {
//    int N, D;
//    scanf("%d %d", &N, &D);
//    Mooncake mooncake[N + 1];
//    for (int i = 0; i < N; i++) {
//        scanf("%lf", &mooncake[i].stock);
//    }
//    for (int j = 0; j < N; j++) {
//        scanf("%lf", &mooncake[j].totalPrice);
//        mooncake[j].perPrice = mooncake[j].totalPrice / mooncake[j].stock;
//    }
//
//    qsort(mooncake, N, sizeof(mooncake[0]), cmp);
//
//    double sum = 0;
//    for (int k = D; k > 0; k--) {
//        for (int i = 0; i < N; i++) {
//            if (mooncake[i].stock > 0) {
//                sum += mooncake[i].perPrice;
//                mooncake[i].stock--;
//                break;
//            }
//        }
//    }
//
//    printf("%.2lf", sum);
//    return 0;
//}


//网友答案
//#include "stdio.h"
//#include"string.h"
//#include "stdlib.h"
//
//struct food {
//    double aver_prise;
//    double prise;
//    double weight;
//
//} yue[1001];
//
//int cmp(const void *a, const void *b);
//
//int main() {
//    int variety = 3;
//    int j, i;
//    double supersum = 0, incomelast, need_weight = 20, sum = 0, income = 0;
//    scanf("%d %lf", &variety, &need_weight);
//    for (i = 0; i < variety; i++)
//        scanf("%lf", &yue[i].weight);
//    getchar();
//    for (i = 0; i < variety; i++)
//        scanf("%lf", &yue[i].prise);
//    for (i = 0; i < variety; i++)
//        yue[i].aver_prise = yue[i].prise / yue[i].weight;
//    qsort(yue, variety, sizeof(yue[0]), cmp);
//    for (i = 0; i < variety && supersum <= need_weight; i++) {
//        supersum += yue[i].weight;
//    }
//    for (j = 0; j < i - 1; j++) {
//        //前面所有全部售空
//        income += yue[j].prise;
//        sum += yue[j].weight;
//    }
//    incomelast = (need_weight - sum) * yue[i - 1].aver_prise;//最后一种的收入
//    incomelast = incomelast + income;
//    printf("%.2lf", incomelast);
//}
//
//int cmp(const void *a, const void *b) {
//    return (*(struct food *) a).aver_prise > (*(struct food *) b).aver_prise ? -1 : 1;
//}
