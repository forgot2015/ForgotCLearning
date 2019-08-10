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

#include <stdio.h>
#include <string.h>
//都错了。。。
//int main() {
//    char handInput[100];
//    char eyeInput[100];
//    char mouthInput[100];
//    fgets(handInput, 100, stdin);
//    fgets(eyeInput, 100, stdin);
//    fgets(mouthInput, 100, stdin);
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
////                    printf("hand[%d]= %s\n", handCount, hand[handCount]);
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
////                    printf("eye[%d]= %s\n", eyeCount, eye[eyeCount]);
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
////    对于指针字符串数字，用sizeof或者strlen都是不准的，直接用计数变量
////    printf("hand len = %d\n", handCount);
////    printf("eye len = %d\n", eyeCount);
////    printf("mouth len = %d\n", mouthCount);
//
//    int K;
//    scanf("%d", &K);
//    for (int k = 0; k < K; k++) {
//        int hand1, eye1, mouth1, eye2, hand2;
//        scanf("%d %d %d %d %d", &hand1, &eye1, &mouth1, &eye2, &hand2);
//
//        if (hand1 > handCount  || hand2 > handCount  || eye1 > eyeCount  || eye2 > eyeCount  ||
//            mouth1 > mouthCount ) {
//            printf("Are you kidding me? @\\/@");
//        } else {
//            printf("%s(%s%s%s)%s", hand[hand1 - 1], eye[eye1 - 1], mouth[mouth1 - 1], eye[eye2 - 1], hand[hand2 - 1]);
//        }
//        if (k != K - 1) {
//            printf("\n");
//        }
//    }
//    return 0;
//}

