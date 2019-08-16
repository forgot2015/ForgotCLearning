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

//此题麻烦在最后的格式化打印
#include <stdio.h>

//判断是否素数，是则返回1，不是返回0
//int isPrime(int a) {
//    for (int i = 2; i * i <= a; i++) {
//        if (a % i == 0) {
//            return 0;
//        }
//    }
//
//    return 1;
//}
//
//int main() {
//    int M, N;
//    scanf("%d %d", &M, &N);
//    int prime[10001];
//    int count = 1;
//    int n = 2;
//    while (count <= N) {
//        if (isPrime(n)) {
//            prime[count] = n;
//            count++;
//        }
//        n++;
//    }
//
////    当前正在打印第几位
//    int printCount = 1;
////    需要打印的数量
//    int needPrint = N - M + 1;
//    for (int i = M; i <= N; i++) {
//        printf("%d", prime[i]);
////        如果当前不是在打印最后一位，则再判断
//        if (printCount != needPrint) {
//            if (printCount % 10 != 0) {
//                printf(" ");
//            } else {
//                //如果打印10的整数倍，换行
//                printf("\n");
//            }
//        }
//
//        printCount++;
//    }
//
//    return 0;
//}
