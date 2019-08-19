//
// Created by forgot on 2019-08-19.
//
/*1092 To Buy or Not to Buy (20 point(s))*/
/*Eva would like to make a string of beads with her favorite colors so she went to a small shop to buy some beads.
 * There were many colorful strings of beads. However the owner of the shop would only sell the strings in whole pieces.
 * Hence Eva must check whether a string in the shop contains all the beads she needs. She now comes to you for help:
 * if the answer is Yes, please tell her the number of extra beads she has to buy; or if the answer is No, please tell
 * her the number of beads missing from the string.

For the sake of simplicity, let's use the characters in the ranges [0-9], [a-z], and [A-Z] to represent the colors. For
 example, the 3rd string in Figure 1 is the one that Eva would like to make. Then the 1st string is okay since it
 contains all the necessary beads with 8 extra ones; yet the 2nd one is not since there is no black bead and one less red bead.

figbuy.jpg

Figure 1

Input Specification:
Each input file contains one test case. Each case gives in two lines the strings of no more than 1000 beads which belong
 to the shop owner and Eva, respectively.

Output Specification:
For each test case, print your answer in one line. If the answer is Yes, then also output the number of extra beads Eva
 has to buy; or if the answer is  No, then also output the number of beads missing from the string. There must be exactly
 1 space between the answer and the number.

Sample Input 1:
ppRYYGrrYBR2258
YrR8RrY
Sample Output 1:
Yes 8
Sample Input 2:
ppRYYGrrYB225
YrR8RrY
Sample Output 2:
No 2*/

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char allStr[1001];
//    char want[1001];
//    scanf("%s", allStr);
//    scanf("%s", want);
//    int wantLen = strlen(want);
//    int allStrLen = strlen(allStr);
//    int matchCount = 0;
//
//    for (int i = 0; i < wantLen; i++) {
//        for (int j = 0; j < allStrLen; j++) {
//            if (allStr[j] == want[i]) {
////                找到一个符合的字符，就把它变成规则外的字符，以后不会再匹配
//                allStr[j] = '*';
//                matchCount++;
//                break;
//            }
//        }
//    }
//
//    if (matchCount == wantLen) {
//        printf("Yes %d", allStrLen - wantLen);
//    } else {
//        printf("No %d", wantLen - matchCount);
//    }
//    return 0;
//}


