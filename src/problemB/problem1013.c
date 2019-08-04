//
// Created by forgot on 2019-08-03.
//

//1013 数素数 (20 point(s))
/*令 P
​i
​​  表示第 i 个素数。现任给两个正整数 M≤N≤10
​4
​​ ，请输出 P
​M
​​  到 P
​N
​​  的所有素数。

输入格式：
输入在一行中给出 M 和 N，其间以空格分隔。

输出格式：
输出从 P
​M
​​  到 P
​N
​​  的所有素数，每 10 个数字占 1 行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103*/

#include <stdio.h>
int isPrime(int a);

//int main() {
//    int M, N;
//    scanf("%d%d", &M, &N);
//
//    int prime[10001];
//    int primeCount = 0;
//    int num = 2;
//
//    while (primeCount <= N) {
//        if (isPrime(num)) {
//            prime[primeCount] = num;
//            primeCount++;
//        }
//        num++;
//    }
//
//    int printCount = 1;
//    for (int k = M; k <= N; k++) {
//        if (printCount == 1 || (printCount - 1) % 10 == 0) {
//            printf("%d", prime[k - 1]);
//        } else {
//            printf(" %d", prime[k - 1]);
//        }
//
//        if (printCount % 10 == 0) {
//            printf("\n");
//        }
//
//        printCount++;
//    }
//}

//判断是否素数，是则返回1，不是返回0
int isPrime(int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0;
        }
    }

    return 1;
}

// M=N=10000时没通过
//int main() {
//    int M, N;
//    scanf("%d%d", &M, &N);
//
//    int prime[10001];
//    prime[0] = 2;
//    int count = 1;
//
//    for (int i = 3; i <= 10000; ++i) {
//        int isPrime = 1;
//        for (int j = 2; j <= sqrt(i); j++) {
//            if (i % j == 0) {
//                isPrime = 0;
//                break;
//            }
//        }
//        if (isPrime) {
//            prime[count] = i;
//            count++;
//        }
//    }
//
//    int printCount = 1;
//    for (int k = M; k <= N; k++) {
//        if (printCount == 1 || (printCount - 1) % 10 == 0) {
//            printf("%d", prime[k - 1]);
//        } else {
//            printf(" %d", prime[k - 1]);
//        }
//
//        if (printCount % 10 == 0) {
//            printf("\n");
//        }
//
//        printCount++;
//    }
//
//    return 0;
//}

