//
// Created by forgot on 2019-08-04.
//
/*1044 火星数字 (20 point(s))*/
/*火星人是以 13 进制计数的：

地球人的 0 被火星人称为 tret。
地球人数字 1 到 12 的火星文分别为：jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec。
火星人将进位以后的 12 个高位数字分别称为：tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou。
例如地球人的数字 29 翻译成火星文就是 hel mar；而火星文 elo nov 对应地球数字 115。为了方便交流，请你编写程序实现地球和火星数字之间的互译。

输入格式：
输入第一行给出一个正整数 N（<100），随后 N 行，每行给出一个 [0, 169) 区间内的数字 —— 或者是地球文，或者是火星文。

输出格式：
对应输入的每一行，在一行中输出翻译后的另一种语言的数字。

输入样例：
4
29
5
elo nov
tam
输出样例：
hel mar
may
115
13*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//两个用例 Segmentation Fault  内存超出？
//int main() {
//    int N;
//    char *geChar[13] = {"jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
//    char *shiChar[13] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
//
//    scanf("%d", &N);
////    为何要+1才能获取到最后一行字符？
//    for (int i = 0; i < N + 1; i++) {
//        char input[12];
////        scanf("%s", input);
//        fgets(input, 12, stdin);
////        gets(input);
//        if (input[0] >= '0' && input[0] <= '9') {
//            //数字转火星文
//            int num = atoi(input);
//            int ge = num % 13;
//            int shi = num / 13;
//            if (shi > 0) {
//                printf("%s %s\n", shiChar[shi - 1], geChar[ge - 1]);
//            } else {
//                printf("%s\n", geChar[ge - 1]);
//            }
//        } else if (input[0] >= 'a' && input[0] <= 'z') {
//            if (strlen(input) > 4) {
//                char shiStr[4];
//                char geStr[4];
//                strncpy(shiStr, input, 3);
//                strncpy(geStr, input + 4, 3);
////               printf("shiStr: %s\n", shiStr);
////               printf("geStr: %s\n", geStr);
//                int shi = 0;
//                int ge = 0;
//                for (int j = 0; j < 12; j++) {
//                    if (strcmp(shiChar[j], shiStr) == 0) {
//                        shi = j + 1;
//                        break;
//                    }
//                }
//                for (int j = 0; j < 12; j++) {
//                    if (strcmp(geChar[j], geStr) == 0) {
//                        ge = j + 1;
//                        break;
//                    }
//                }
//                printf("%d\n", shi * 13 + ge);
//            } else {
////                printf("input = %s\n",input);
////                char str[3];
////                strncpy(str, input, 3);
////知识点去掉最后一个字符串的换行符
//                input[strlen(input) - 1] = 0;
//                int ge = 0;
//                int shi = 0;
//                for (int j = 0; j < 12; j++) {
//                    if (strcmp(geChar[j], input) == 0) {
//                        ge = j + 1;
//                        break;
//                    }
//                }
//                for (int j = 0; j < 12; j++) {
//                    if (strcmp(shiChar[j], input) == 0) {
//                        shi = j + 1;
//                        break;
//                    }
//                }
//                if (ge) {
//                    printf("%d\n", ge);
//                } else {
//                    printf("%d\n", shi * 13);
//                }
//            }
//        }
//    }
//
//    return 0;
//}
