//
// Created by forgot on 2019-08-04.
//
/*1033 旧键盘打字 (20 point(s))*/
/*旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。现在给出应该输入的一段文字、以及坏掉的那些键，打出的结果文字会是怎样？

输入格式：
输入在 2 行中分别给出坏掉的那些键、以及应该输入的文字。其中对应英文字母的坏键以大写给出；每段文字是不超过 10^5个字符的串。可用的字符包括字母
 [a-z, A-Z]、数字 0-9、以及下划线 _（代表空格）、,、.、-、+（代表上档键）。题目保证第 2 行输入的文字串非空。

注意：如果上档键坏掉了，那么大写的英文字母无法被打出。

输出格式：
在一行中输出能够被打出的结果文字。如果没有一个字符能被打出，则输出空行。

输入样例：
7+IE.
7_This_is_a_test.
输出样例：
_hs_s_a_tst*/

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int printCount = 0;
//    char brokeChar[128];
//    char input[100001];
//    int isCharBroke[128];
//
//    gets(brokeChar);
//    gets(input);
//
//    int brokeLen = strlen(brokeChar);
//    int inputLen = strlen(input);
//    for (int i = 0; i < brokeLen; i++) {
//        isCharBroke[brokeChar[i]] = 1;
//
//        if (brokeChar[i] >= 'A' && brokeChar[i] <= 'Z') {
//            isCharBroke[brokeChar[i] + 32] = 1;
//        } else if (brokeChar[i] >= 'a' && brokeChar[i] <= 'z') {
//            isCharBroke[brokeChar[i] - 32] = 1;
//        }
//    }
//
//    for (int j = 0; j < inputLen; j++) {
//        if (isCharBroke[input[j]]) {
//            continue;
//        }
//
//        if (input[j] >= 'A' && input[j] <= 'Z' && isCharBroke['+']) {
//            continue;
//        }
//
//        putchar(input[j]);
//        printCount++;
//    }
//
//    if (printCount == 0) {
//        printf("\n");
//    }
//}



//#include <stdio.h>
//#include <string.h>
//运行超时？把strlen(badChar)提取出来，减少计算
//int main() {
//    char badChar[128];
//    char input[100001];
//
//    scanf("%s", badChar);
//    scanf("%s", input);
//
//    int bad[128] = {0};
//
//    for (int j = 0; j < strlen(badChar); j++) {
//        if (badChar[j] >= 'A' && badChar[j] <= 'Z') {
//            bad[badChar[j]] = 1;
//            bad[badChar[j] + 32] = 1;
//        } else if (badChar[j] >= 'a' && badChar[j] <= 'z') {
//            bad[badChar[j]] = 1;
//            bad[badChar[j] - 32] = 1;
//        } else {
//            bad[badChar[j]] = 1;
//        }
//    }
//
//
//    for (int i = 0; i < strlen(input); i++) {
////        如果按键坏了，就不输出
//        if (bad[input[i]]) {
//            continue;
//        } else if (bad['+'] && input[i] >= 'A' && input[i] <= 'Z') {
//            continue;
//        } else {
//            putchar(input[i]);
//        }
//    }
//
//    return 0;
//}