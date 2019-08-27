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


//一开始错了两用例，火星数字只有单独是0的时候写0，只要高位数字有数，个位数字如果是0就省略不写。
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int printNum(char *str);
//
//int printMars(int num);
//
//char *shiChar[14] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
//char *geChar[14] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    char inputStr[10];
//    getchar();
//    for (int i = 0; i < N; i++) {
//        gets(inputStr);
//        if (inputStr[0] >= '0' && inputStr[0] <= '9') {
//            // 整数
//            int num = atoi(inputStr);
//            printMars(num);
//        } else {
//            printNum(inputStr);
//        }
//
//        if (i != N - 1) {
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//
////打印数字
//int printNum(char *inputStr) {
//    if (strcmp(inputStr, "tret") == 0) {
//        printf("0");
//        return 0;
//    }
//
//    // 火星文
//    if (strlen(inputStr) < 5) {
//        //    火星单位数，可能是个位，可能是十位
//        //验证是否火星个位
//        for (int j = 0; j < 13; j++) {
//            if (strcmp(geChar[j], inputStr) == 0) {
//                printf("%d", j);
//                break;
//            }
//        }
//        //验证是否火星十位
//        for (int j = 0; j < 13; j++) {
//            if (strcmp(shiChar[j], inputStr) == 0) {
//                printf("%d", j * 13);
//                break;
//            }
//        }
//    } else {
//        //两位火星文
//        char shiStr[4];
//        char geStr[4];
//        //截取两段字符串
//        sscanf(inputStr, "%s %s", shiStr, geStr);
//
//        int shi = 0;
//        for (int j = 0; j < 13; j++) {
//            if (strcmp(shiChar[j], shiStr) == 0) {
//                shi = j;
//                break;
//            }
//        }
//
//        int ge = 0;
//        for (int j = 0; j < 13; j++) {
//            if (strcmp(geChar[j], geStr) == 0) {
//                ge = j;
//                break;
//            }
//        }
//        printf("%d", shi * 13 + ge);
//    }
//
//    return 0;
//}
//
////打印火星文
//int printMars(int num) {
//    if (num / 13 == 0) {
//        printf("%s", geChar[num % 13]);
//        return 0;
//    } else if (num % 13 == 0) {
//        printf("%s", shiChar[num / 13]);
//        return 0;
//    } else {
//        printf("%s %s", shiChar[num / 13], geChar[num % 13]);
//        return 0;
//    }
//}
