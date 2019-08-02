//
// Created by forgot on 2019-08-02.
//
/*1007 素数对猜想 (20 point(s))*/
//让我们定义d(n) ​​ 为：d(​n) ​​ =p(​n+1)−p(​n) ​​ ，其中p(​i) ​​ 是第i个素数。显然有d(​1) ​​ =1，且对于n>1有d(n) ​​ 是偶数。
//        “素数对猜想”认为“存在无穷多对相邻且差为2的素数”。 现给定任意正整数N(<10^​5 ​​ )，请计算不超过N的满足猜想的素数对的个数。
//输入格式:
//输入在一行给出正整数N。
//
//输出格式:
//在一行中输出不超过N的满足猜想的素数对的个数。
//
//输入样例:
//20
//输出样例:
//4



#include <stdio.h>
#include <math.h>

//有一个用例没通过啊，不懂，在牛课网又是可以通过的
//int main() {
//    int N;
//    int pairCount = 0;
//    scanf("%d", &N);
//
//    if (N <= 3) {
//        printf("0");
//        return 0;
//    }
//
//    int prime[N];
//    prime[0] = 2;
//    prime[1] = 3;
//
//    int primeIndex = 2;
//
//    //求出N以内素数
//    for (int i = 3; i < N; i++) {
//        int isPrime = 1;
//
//        for (int j = 2; j <= sqrt(i); j++) {
//            if (i % j == 0) {
//                isPrime = 0;
//                break;
//            }
//        }
//
//        if (isPrime) {
//            prime[primeIndex] = i;
//            primeIndex++;
//        }
//    }
//
//    //输出差为2素数对
//    for (int k = 0; k < primeIndex - 1; k++) {
//        if ((prime[k + 1] - prime[k]) == 2) {
//            pairCount++;
//        }
//    }
//
//    printf("%d", pairCount);
//
//    return 0;
//}
