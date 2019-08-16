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

//int isPrime(int n) {
//    if (n == 1)return 0;
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    int prime[N];
//    int primeIndex = 0;
//    int pairCount = 0;
//
////    记录N以内的素数
//    for (int i = 2; i <= N; i++) {
//        if (isPrime(i)) {
//            prime[primeIndex] = i;
//            primeIndex++;
//        }
//    }
////如果只有一个素数，则直接输出0
//    if (primeIndex == 1) {
//        printf("0");
//        return 0;
//    }
//
//    for (int j = 0; j < primeIndex - 1; j++) {
//        if (prime[j + 1] - prime[j] == 2) {
//            pairCount++;
//        }
//    }
//    printf("%d", pairCount);
//
//    return 0;
//}
