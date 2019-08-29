//
// Created by forgot on 2019-08-04.
//
/*1053 住房空置率 (20 point(s))*/
/*在不打扰居民的前提下，统计住房空置率的一种方法是根据每户用电量的连续变化规律进行判断。判断方法如下：

在观察期内，若存在超过一半的日子用电量低于某给定的阈值 e，则该住房为“可能空置”；

若观察期超过某给定阈值 D 天，且满足上一个条件，则该住房为“空置”。

现给定某居民区的住户用电量数据，请你统计“可能空置”的比率和“空置”比率，即以上两种状态的住房占居民区住房总套数的百分比。

输入格式：
输入第一行给出正整数 N（≤1000），为居民区住房总套数；正实数 e，即低电量阈值；正整数 D，即观察期阈值。随后 N 行，每行按以下格式给出一套住房的用电量数据：

K E
​1
​​  E
​2
​​  ... E
​K
​​

其中 K 为观察的天数，E
​i
​​  为第 i 天的用电量。

输出格式：
在一行中输出“可能空置”的比率和“空置”比率的百分比值，其间以一个空格分隔，保留小数点后 1 位。

输入样例：
5 0.5 10
6 0.3 0.4 0.5 0.2 0.8 0.6
10 0.0 0.1 0.2 0.3 0.0 0.8 0.6 0.7 0.0 0.5
5 0.4 0.3 0.5 0.1 0.7
11 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1
11 2 2 2 1 1 0.1 1 0.1 0.1 0.1 0.1
输出样例：
40.0% 20.0%
（样例解释：第2、3户为“可能空置”，第4户为“空置”，其他户不是空置。）*/

////两个用例一直过不去，找了一个小时才发现是对题目有误解了，"若观察期超过某给定阈值 D 天，且满足上一个条件，则该住房为“空置”。" ，
//// 应该是 "观察期天数">"阈值天数"， 而不是 "观察期内电量低于一半的天数">"阈值天数"
//#include <stdio.h>
//int main() {
//    int N;
//    double e;
//    int D;
//
//    scanf("%d %lf %d", &N, &e, &D);
//    int maybeEmpty = 0;
//    int empty = 0;
//
//    int count;
//    float use;
//    int lessCount = 0;
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &count);
//        lessCount = 0;
//        for (int j = 0; j < count; j++) {
//            scanf("%f", &use);
//            if (use < e) {
//                lessCount++;
//            }
//        }
//
//        if (lessCount * 2 > count) {
////            写成lessCount > D就错了，应该是count>D
//            if (count > D) {
//                empty++;
//            } else {
//                maybeEmpty++;
//            }
//        }
//    }
//
//    printf("%.1f%% %.1f%%", maybeEmpty * 100.0 / N, empty * 100.0 / N);
//    return 0;
//}



//错两个用例，题意理解错了，或者这题目也确实有点歧义
//#include <stdio.h>
//
//int main() {
//    int N, D;
//    double e;
//    scanf("%d %lf %d", &N, &e, &D);
//    int maybeEmpty = 0;
//    int empty = 0;
//
//    for (int i = 0; i < N; i++) {
//        int day;
//        scanf("%d", &day);
//        int lessCount = 0;
//        for (int j = 0; j < day; j++) {
//            double use;
//            scanf("%lf", &use);
//            if (use < e) {
//                lessCount++;
//            }
//        }
//
//        if (lessCount > (day / 2.0)) {
//            if (lessCount > D) {
//                empty++;
//            } else {
//                maybeEmpty++;
//            }
//        }
//    }
//
//    printf("%.1lf%% %.1lf%%", maybeEmpty * 100.0 / N, empty * 100.0 / N);
//
//    return 0;
//}
