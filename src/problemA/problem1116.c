//
// Created by forgot on 2019-08-21.
//
/*1116 Come on! Let's C (20 point(s))*/
/*"Let's C" is a popular and fun programming contest hosted by the College of Computer Science and Technology, Zhejiang
 * University. Since the idea of the contest is for fun, the award rules are funny as the following:

0、 The Champion will receive a "Mystery Award" (such as a BIG collection of students' research papers...).
1、 Those who ranked as a prime number will receive the best award -- the Minions (小黄人)!
2、 Everyone else will receive chocolates.
Given the final ranklist and a sequence of contestant ID's, you are supposed to tell the corresponding awards.

Input Specification:
Each input file contains one test case. For each case, the first line gives a positive integer N (≤10^4), the total
 number of contestants. Then N lines of the ranklist follow, each in order gives a contestant's ID(a 4-digit number).
 After the ranklist, there is a positive integer K followed by K query ID's.

Output Specification:
For each query, print in a line ID: award where the award is Mystery Award, or Minion, or Chocolate. If the ID is not
 in the ranklist, print Are you kidding? instead. If the ID has been checked before, print ID: Checked.

Sample Input:
6
1111
6666
8888
1234
5555
0001
6
8888
0001
1111
2222
8888
2222

Sample Output:
8888: Minion
0001: Chocolate
1111: Mystery Award
2222: Are you kidding?
8888: Checked
2222: Are you kidding?*/

#include <stdio.h>

//int isPrime(int a) {
//    for (int i = 2; i * i <= a; i++) {
//        if (a % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    int N, K;
//    scanf("%d", &N);
////int类型局部变量初始化的值依赖于编译器和系统，有可能是任意值，也可能是0，而全局变量初始化是0
//    int rank[10001]={0};
//    int checked[10001]={0};
//    int n;
//    for (int i = 1; i <= N; i++) {
//        scanf("%d", &n);
//        rank[n] = i;
//    }
//
//    scanf("%d", &K);
//    for (int j = 0; j < K; j++) {
//        int num;
//        scanf("%d", &num);
//        if (rank[num]) {
//            if (checked[num]) {
//                printf("%04d: Checked", num);
//            } else if (rank[num] == 1) {
//                printf("%04d: Mystery Award", num);
//            } else if (isPrime(rank[num])) {
//                printf("%04d: Minion", num);
//            } else {
//                printf("%04d: Chocolate", num);
//            }
//            checked[num] = 1;
//        } else {
//            printf("%04d: Are you kidding?", num);
//        }
//
//        if (j != K - 1) {
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

