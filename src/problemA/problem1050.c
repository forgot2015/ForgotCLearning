//
// Created by forgot on 2019-08-20.
//
/*1050 String Subtraction (20 point(s))*/
/*Given two strings S
​1
​​  and S
​2
​​ , S=S
​1
​​ −S
​2
​​  is defined to be the remaining string after taking all the characters in S
​2
​​  from S
​1
​​ . Your task is simply to calculate S
​1
​​ −S
​2
​​  for any given strings. However, it might not be that simple to do it fast.

Input Specification:
Each input file contains one test case. Each case consists of two lines which gives S
​1
​​  and S
​2
​​ , respectively. The string lengths of both strings are no more than 10
​4
​​ . It is guaranteed that all the characters are visible ASCII codes and white space, and a new line character signals the end of a string.

Output Specification:
For each test case, print S
​1
​​ −S
​2
​​  in one line.

Sample Input:
They are students.
aeiou
Sample Output:
Thy r stdnts.*/

#include <stdio.h>
#include <string.h>

//int main() {
//    char S1[10001];
//    char S2[10001];
//    gets(S1);
//    gets(S2);
//    int S1Len = strlen(S1);
//    int S2Len = strlen(S2);
//    for (int i = 0; i < S1Len; i++) {
//        int isInS2 = 0;
//        for (int j = 0; j < S2Len; j++) {
//            if (S2[j] == S1[i]) {
//                isInS2 = 1;
//                break;
//            }
//        }
//        if (!isInS2){
//            putchar(S1[i]);
//        }
//    }
//
//    return 0;
//}
