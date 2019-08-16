//
// Created by forgot on 2019-08-02.
//
/*1003 我要通过！ (20 point(s))*/
/*“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

1. 字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
2. 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。

输入格式：
每个测试输入包含 1 个测试用例。第 1 行给出一个正整数 n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过 100，且不包含空格。

输出格式：
每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出 YES，否则输出 NO。
1
PAT
1
xPATx
输入样例：
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA

输出样例：
YES
YES
YES
YES
NO
NO
NO
NO*/

//解题思路，难点在条件3的理解上，注意句子"a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串" ， 及abc要么都为空，要么都是A组成的字符串，
//不会出现a是非空字符串，而b、c为空的情况。

//#include <stdio.h>
//#include <string.h>
//
//int checkIsPAT(char *str);
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    getchar();
//    for (int i = 0; i < n; i++) {
//        char str[101];
//        gets(str);
//        if (checkIsPAT(str)) {
//            printf("YES\n");
//        } else {
//            printf("NO\n");
//        }
//    }
//
//    return 0;
//}
//
//int checkIsPAT(char *str) {
//    int len = strlen(str);
//    if (len < 3) {
//        return 0;
//    }
//    int pCount = 0;
//    int aCount = 0;
//    int tCount = 0;
//    for (int i = 0; i < len; i++) {
////        检查是否满足第一个条件
//        if (str[i] == 'P') {
//            pCount++;
//        } else if (str[i] == 'A') {
//            aCount++;
//        } else if (str[i] == 'T') {
//            tCount++;
//        } else {
////            包含非PAT的字符则返回0
//            return 0;
//        }
//    }
//
////    P T 必须有且仅有一个，且A数量至少1个
//    if (pCount == 1 && tCount == 1 && aCount) {
//        for (int i = 0; i < len; i++) {
//            //检查是否满足第二、三个条件，即P左边的A数量 = PT中间A数量 * T右边的A数量
//            if (str[i] == 'P') {
//                int countA1 = i;
//                for (int j = i + 1; j < len; j++) {
//                    if (str[j] == 'A') {
//                        for (int k = j + 1; k < len; k++) {
//                            if (str[k] == 'T') {
//                                int countA2 = k - i - 1;
//                                int countA3 = len - k - 1;
//                                if (countA1 * countA2 == countA3) {
//                                    return 1;
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    return 0;
//}



//int checkIsPAT(char *str);
//
////错了一个用例？
//int main() {
//    int n;
//    scanf("%d", &n);
//    getchar();
//    for (int i = 0; i < n; i++) {
//        char str[101];
//        gets(str);
//        if (checkIsPAT(str)) {
//            printf("YES\n");
//        } else {
//            printf("NO\n");
//        }
//    }
//
//    return 0;
//}
//
//int checkIsPAT(char *str) {
//    int len = strlen(str);
//    if (len < 3) {
//        return 0;
//    }
//    for (int i = 0; i < len; i++) {
////        检查是否触发第一个条件
//        if (str[i] != 'P' && str[i] != 'A' && str[i] != 'T') {
//            return 0;
//        }
//
////        检查是否触发第二个条件
//        if (i <= len - 3) {
//            if (str[i] == 'P' && str[i + 1] == 'A' && str[i + 2] == 'T') {
//                int isPAT = 1;
//                for (int j = 0; j < i; j++) {
//                    if (str[j] != 'A') {
//                        isPAT = 0;
//                    }
//                }
//                for (int j = i + 3; j < len; j++) {
//                    if (str[j] != 'A') {
//                        isPAT = 0;
//                    }
//                }
//
//                if (isPAT) {
//                    return 1;
//                }
//            }
//        }
//
////        检查是否触发第三个条件，然后递归来判断？
//        if (str[i] == 'P') {
//            int a1 = i;
//            for (int j = i + 1; j < len; j++) {
//                if (str[j] == 'A') {
//                    for (int k = j + 1; k < len; k++) {
//                        if (str[k] == 'T') {
//                            int a2 = k - i - 1;
//                            int a3 = len - k - 1;
//                            if (a1 * a2 == a3) {
//                                return 1;
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    return 0;
//}


