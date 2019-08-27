//
// Created by forgot on 2019-08-04.
//
/*1043 输出PATest (20 point(s))*/
/*给定一个长度不超过 10
​4
​​  的、仅由英文字母构成的字符串。请将字符重新调整顺序，按 PATestPATest.... 这样的顺序输出，并忽略其它字符。当然，六种字符的个数不一定是一样多的，若某种字符已经输出完，则余下的字符仍按 PATest 的顺序打印，直到所有字符都被输出。

输入格式：
输入在一行中给出一个长度不超过 10
​4
​​  的、仅由英文字母构成的非空字符串。

输出格式：
在一行中按题目要求输出排序后的字符串。题目保证输出非空。

输入样例：
redlesPayBestPATTopTeePHPereatitAPPT
输出样例：
PATestPATestPTetPTePePee*/

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[10001];
//    gets(str);
//    int pat[7] = {0};
//    char patStr[7] = {'P', 'A', 'T', 'e', 's', 't'};
//
//    for (int i = 0; i < strlen(str); i++) {
//        switch (str[i]) {
//            case 'P':
//                pat[0]++;
//                break;
//            case 'A':
//                pat[1]++;
//                break;
//            case 'T':
//                pat[2]++;
//                break;
//            case 'e':
//                pat[3]++;
//                break;
//            case 's':
//                pat[4]++;
//                break;
//            case 't':
//                pat[5]++;
//                break;
//            default:
//                break;
//        }
//    }
//
//    for (int j = 0; j < strlen(str); j++) {
//        if (pat[0]) {
//            putchar('P');
//            --pat[0];
//        }
//        if (pat[1]) {
//            putchar('A');
//            --pat[1];
//        }
//        if (pat[2]) {
//            putchar('T');
//            --pat[2];
//        }
//        if (pat[3]) {
//            putchar('e');
//            --pat[3];
//        }
//        if (pat[4]) {
//            putchar('s');
//            --pat[4];
//        }
//        if (pat[5]) {
//            putchar('t');
//            --pat[5];
//        }
//
//        if (pat[0] == 0 && pat[1] == 0 && pat[2] == 0 && pat[3] == 0 && pat[4] == 0 && pat[5] == 0) {
//            break;
//        }
//    }
//    return 0;
//}
