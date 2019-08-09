//
// Created by forgot on 2019-08-03.
//
/*1020 月饼 (25 point(s))*/
/*月饼是中国人在中秋佳节时吃的一种传统食品，不同地区有许多不同风味的月饼。现给定所有种类月饼的库存量、总售价、以及市场的最大需求量，请你计算可以获得的最大收益是多少。

注意：销售时允许取出一部分库存。样例给出的情形是这样的：假如我们有 3 种月饼，其库存量分别为 18、15、10 万吨，总售价分别为 75、72、45 亿元。如果市场的最大需求量只有 20 万吨，那么我们最大收益策略应该是卖出全部 15 万吨第 2 种月饼、以及 5 万吨第 3 种月饼，获得 72 + 45/2 = 94.5（亿元）。

输入格式：
每个输入包含一个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N 表示月饼的种类数、以及不超过 500（以万吨为单位）的正整数 D 表示市场最大需求量。随后一行给出 N 个正数表示每种月饼的库存量（以万吨为单位）；最后一行给出 N 个正数表示每种月饼的总售价（以亿元为单位）。数字间以空格分隔。

输出格式：
对每组测试用例，在一行中输出最大收益，以亿元为单位并精确到小数点后 2 位。

输入样例：
3 20
18 15 10
75 72 45
输出样例：
94.50*/

#include <stdio.h>

//int main() {
//    int N, D;
//
//    scanf("%d %d", &N, &D);
//    int kucun[N];
//    float danjia[N];
//
//    float shouyi = 0;
//    float shouyiMax = 0;
//    int xiaoliang[N];
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &kucun[i]);
//    }
//
//    for (int i = 0; i < N; i++) {
//        float zongjia;
//        scanf("%f", &zongjia);
//        danjia[i] = zongjia / kucun[i];
//    }
//
//    for (int l = 0; l < N; l++) {
//        int maxIndex = 0;
//        for (int i = 1; i < N; i++) {
//            if (danjia[i] < danjia[maxIndex]) {
//                maxIndex = i;
//            }
//        }
//
//        if (maxIndex != l) {
//            float tmpDanjia;
//            int tmpKucun;
//            tmpDanjia = danjia[l];
//            tmpKucun = kucun[l];
//            danjia[l] = danjia[maxIndex];
//            kucun[l] = kucun[maxIndex];
//
//            danjia[maxIndex] = tmpDanjia;
//            kucun[maxIndex] = tmpKucun;
//        }
//    }
//
//    if (kucun[0] >= D) {
//        shouyiMax = D * danjia[0];
//    } else {
//        if (kucun[1] >= D - kucun[0]) {
//            shouyiMax = kucun[0] * danjia[0] + (D - kucun[0]) * danjia[1];
//        } else {
//            shouyiMax = kucun[0] * danjia[0] + kucun[1] * danjia[1] + (D - kucun[0] - kucun[1]) * danjia[2];
//        }
//    }
//
//    printf("%.2f", shouyiMax);
//
//    return 0;
//}


//此方法太慢，1000就卡死了
//int main() {
//    int N, D;
//
//    scanf("%d %d", &N, &D);
//    int kucun[N];
//    float zongjia[N];
//    float danjia[N];
//
//    float shouyi = 0;
//    float shouyiMax = 0;
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &kucun[i]);
//    }
//
//    for (int i = 0; i < N; i++) {
//        scanf("%f", &zongjia[i]);
//        danjia[i] = zongjia[i] / kucun[i];
//    }
//
//    for (int j = 0; j <= kucun[0]; j++) {
//        for (int i = 0; i <= kucun[1]; i++) {
//            for (int k = 0; k <= kucun[2]; k++) {
//                if (i + j + k > D) {
//                    continue;
//                }
//                shouyi = j * danjia[0] + i * danjia[1] + k * danjia[2];
//                if (shouyi > shouyiMax) {
//                    shouyiMax = shouyi;
//                }
//            }
//        }
//    }
//
//    printf("%.2f", shouyiMax);
//
//    return 0;
//}
