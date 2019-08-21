//
// Created by forgot on 2019-08-21.
//
/*1005 Spell It Right (20 point(s))*/
/*Given a non-negative integer N, your task is to compute the sum of all the digits of N, and output every digit of the
 * sum in English.

Input Specification:
Each input file contains one test case. Each case occupies one line which contains an N (≤10^100).

Output Specification:
For each test case, output in one line the digits of the sum in English words. There must be one space between two
 consecutive words, but no extra space at the end of a line.

Sample Input:
12345
Sample Output:
one five*/

//#include <stdio.h>
//#include <string.h>
//
//char *numEng[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//
//int main() {
//    char input[102];
//
//    scanf("%s", input);
//    int sum = 0;
//    int strLength = strlen(input);
//    int n;
//    for (int i = 0; i < strLength; i++) {
//        sum += input[i] - '0';
//    }
//
//    char sumStr[1001];
//int转String
//    sprintf(sumStr, "%d", sum);
//
//    int sumStrLen = strlen(sumStr);
//    for (int j = 0; j < sumStrLen; j++) {
//        printf("%s", numEng[sumStr[j] - '0']);
//        if (j != sumStrLen - 1) {
//            printf(" ");
//        }
//    }
//
//    return 0;
//}
