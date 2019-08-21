//
// Created by forgot on 2019-08-21.
//
/*1120 Friend Numbers (20 point(s))*/
/*Two integers are called "friend numbers" if they share the same sum of their digits, and the sum is their "friend ID".
 * For example, 123 and 51 are friend numbers since 1+2+3 = 5+1 = 6, and 6 is their friend ID. Given some numbers, you
 * are supposed to count the number of different frind ID's among them.

Input Specification:
Each input file contains one test case. For each case, the first line gives a positive integer N. Then N positive
 integers are given in the next line, separated by spaces. All the numbers are less than 10^4.

Output Specification:
For each case, print in the first line the number of different frind ID's among the given integers. Then in the second
 line, output the friend ID's in increasing order. The numbers must be separated by exactly one space and there must be
 no extra space at the end of the line.

Sample Input:
8
123 899 51 998 27 33 36 12
Sample Output:
4
3 6 9 26*/

//#include <stdio.h>
//
//int getFriend(int n) {
//    int sum = 0;
//    while (n) {
//        sum += n % 10;
//        n = n / 10;
//    }
//    return sum;
//}
//
//int main() {
//    int friend[40] = {0};
//    int N;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++) {
//        int n;
//        scanf("%d", &n);
//        friend[getFriend(n)]++;
//    }
//
//    int friendCount = 0;
//    for (int j = 0; j < 40; j++) {
//        if (friend[j]) {
//            friendCount++;
//
//        }
//    }
//
//    printf("%d\n", friendCount);
//    for (int j = 0; j < 40; j++) {
//        if (friend[j]) {
//            printf("%d", j);
//            if (friendCount != 1) {
//                printf(" ");
//                friendCount--;
//            }
//        }
//    }
//
//    return 0;
//}



