//
// Created by forgot on 2019-08-20.
//
/*1041 Be Unique (20 point(s))*/
/*Being unique is so important to people on Mars that even their lottery is designed in a unique way. The rule of
 * winning is simple: one bets on a number chosen from [1,10^4]. The first one who bets on a unique number wins.
 * For example, if there are 7 people betting on { 5 31 5 88 67 88 17 }, then the second one who bets on 31 wins.

Input Specification:
Each input file contains one test case. Each case contains a line which begins with a positive integer N (≤10^5) and
 then followed by N bets. The numbers are separated by a space.

Output Specification:
For each test case, print the winning number in a line. If there is no winner, print None instead.

Sample Input 1:
7 5 31 5 88 67 88 17
Sample Output 1:
31
Sample Input 2:
5 888 666 666 888 888
Sample Output 2:
None*/

#include <stdio.h>
//直接记录数字出现的次数，然后按输入顺序遍历只出现过一次的数字
//int main() {
//    int N;
//    scanf("%d", &N);
//    int num[N];
////    数字i出现的次数
//    int numCount[100001];
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &num[i]);
//        numCount[num[i]]++;
//    }
//
//    int hasNum = 0;
//    for (int j = 0; j < N; j++) {
//        if (numCount[num[j]] == 1) {
//            printf("%d", num[j]);
//            hasNum = 1;
//            break;
//        }
//    }
//
//    if (!hasNum) {
//        printf("None");
//    }
//    return 0;
//}

//#include <stdio.h>
////一个用例超时？ 记录下数字，再开两个循环去对比
//int main() {
//    int N;
//    scanf("%d", &N);
//    int num[N];
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    int hasUnique = 0;
//    for (int j = 0; j < N; j++) {
//        int unique = 1;
//        for (int i = 0; i < N; i++) {
//            if (i == j) {
//                continue;
//            }
//            if (num[i] == num[j]) {
//                unique = 0;
//                break;
//            }
//        }
//        if (unique) {
//            printf("%d", num[j]);
//            hasUnique = 1;
//            break;
//        }
//    }
//
//    if (!hasUnique) {
//        printf("None");
//    }
//
//    return 0;
//}
