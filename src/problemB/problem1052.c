//
// Created by forgot on 2019-08-04.
//
/*1052 卖个萌 (20 point(s))*/
/*萌萌哒表情符号通常由“手”、“眼”、“口”三个主要部分组成。简单起见，我们假设一个表情符号是按下列格式输出的：

[左手]([左眼][口][右眼])[右手]
现给出可选用的符号集合，请你按用户的要求输出表情。

输入格式：
输入首先在前三行顺序对应给出手、眼、口的可选符号集。每个符号括在一对方括号 []内。题目保证每个集合都至少有一个符号，并不超过 10 个符号；每个符号包含 1 到 4 个非空字符。

之后一行给出一个正整数 K，为用户请求的个数。随后 K 行，每行给出一个用户的符号选择，顺序为左手、左眼、口、右眼、右手——这里只给出符号在相应集合中的序号（从 1 开始），数字间以空格分隔。

输出格式：
对每个用户请求，在一行中输出生成的表情。若用户选择的序号不存在，则输出 Are you kidding me? @\/@。

输入样例：
[╮][╭][o][~\][/~]  [<][>]
 [╯][╰][^][-][=][>][<][@][⊙]
[Д][▽][_][ε][^]  ...
4
1 1 2 2 2
6 8 1 5 5
3 3 4 3 3
2 10 3 9 3
输出样例：
╮(╯▽╰)╭
<(@Д=)/~
o(^ε^)o
Are you kidding me? @\/@*/


////难点在于如何解析输入的表情字符串, 用到 %[] 字符集输入方法
//// 还有一个坑，题目没有说明输入序号的范围，写的从1开始，让人以为输入的都是合法的，其实还要校验序号是否大于等一1
//#include <stdio.h>
//
//int main() {
//    char handStr[11][5];
//    int handCount = 0;
//
//    char eyeStr[11][5];
//    int eyeCount = 0;
//
//    char mouthStr[11][5];
//    int mouthCount = 0;
//
//    int ch;
//    while ((ch = getchar()) != '\n') {
//        if (ch == '[') {
////          []是字符集输入符号，^表示非，故[^]]表示读取除了]之外的字符，到]就会结束本次
//            scanf("%[^]]", handStr[handCount++]);
//        }
//    }
//
//    while ((ch = getchar()) != '\n') {
//        if (ch == '[') {
//            scanf("%[^]]", eyeStr[eyeCount++]);
//        }
//    }
//
//    while ((ch = getchar()) != '\n') {
//        if (ch == '[') {
//            scanf("%[^]]", mouthStr[mouthCount++]);
//        }
//    }
//
//    int K;
//    scanf("%d", &K);
//    for (int k = 0; k < K; k++) {
//        int hand1, eye1, mouth1, eye2, hand2;
//        scanf("%d %d %d %d %d", &hand1, &eye1, &mouth1, &eye2, &hand2);
//
//        if (hand1 >= 1 && hand1 <= handCount && hand2 >= 1 && hand2 <= handCount && eye1 >= 1 && eye1 <= eyeCount &&
//            eye2 >= 1 && eye2 <= eyeCount && mouth1 >= 1 && mouth1 <= mouthCount) {
//            printf("%s(%s%s%s)%s", handStr[hand1 - 1], eyeStr[eye1 - 1], mouthStr[mouth1 - 1], eyeStr[eye2 - 1],
//                   handStr[hand2 - 1]);
//        } else {
//            printf("Are you kidding me? @\\/@");
//        }
//
//        if (k != K - 1) {
//            printf("\n");
//        }
//    }
//
//    return 0;
//}


// shabi获取表情符号的方法
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char handInput[100];
//    char eyeInput[100];
//    char mouthInput[100];
//
//    gets(handInput);
//    gets(eyeInput);
//    gets(mouthInput);
//
//    char *hand[11];
//    char handStr[11][10];
//    int handCount = 0;
//
//    char *eye[11];
//    char eyeStr[11][10];
//    int eyeCount = 0;
//
//    char *mouth[11];
//    char mouthStr[11][10];
//    int mouthCount = 0;
//
//    for (int i = 0; i < strlen(handInput); i++) {
//        if (handInput[i] == '[') {
//            for (int j = i + 1; j < i + 6; j++) {
//                if (handInput[j] == ']') {
//                    strncpy(handStr[handCount], handInput + i + 1, j - i - 1);
//                    hand[handCount] = handStr[handCount];
//                    handCount++;
//                    break;
//                }
//            }
//        }
//    }
//
//    for (int i = 0; i < strlen(eyeInput); i++) {
//        if (eyeInput[i] == '[') {
//            for (int j = i + 1; j < i + 6; j++) {
//                if (eyeInput[j] == ']') {
//                    strncpy(eyeStr[eyeCount], eyeInput + i + 1, j - i - 1);
//                    eye[eyeCount] = eyeStr[eyeCount];
//                    eyeCount++;
//                    break;
//                }
//            }
//        }
//    }
//
//    for (int i = 0; i < strlen(mouthInput); i++) {
//        if (mouthInput[i] == '[') {
//            for (int j = i + 1; j < i + 6; j++) {
//                if (mouthInput[j] == ']') {
//                    strncpy(mouthStr[mouthCount], mouthInput + i + 1, j - i - 1);
//                    mouth[mouthCount] = mouthStr[mouthCount];
//                    mouthCount++;
//                    break;
//                }
//            }
//        }
//    }
//
//    int K;
//    scanf("%d", &K);
//    for (int k = 0; k < K; k++) {
//        int hand1, eye1, mouth1, eye2, hand2;
//        scanf("%d %d %d %d %d", &hand1, &eye1, &mouth1, &eye2, &hand2);
//
//        if (hand1 >= 1 && hand1 <= handCount && hand2 >= 1 && hand2 <= handCount && eye1 >= 1 && eye1 <= eyeCount &&
//            eye2 >= 1 && eye2 <= eyeCount && mouth1 >= 1 && mouth1 <= mouthCount) {
//            printf("%s(%s%s%s)%s", hand[hand1 - 1], eye[eye1 - 1], mouth[mouth1 - 1], eye[eye2 - 1], hand[hand2 - 1]);
//        } else {
//            printf("Are you kidding me? @\\/@");
//        }
//
//        if (k != K - 1) {
//            printf("\n");
//        }
//    }
//
//    return 0;
//}