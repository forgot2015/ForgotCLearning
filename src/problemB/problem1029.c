//
// Created by forgot on 2019-08-04.
//
/*1029 旧键盘 (20 point(s))*/
/*旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。现在给出应该输入的一段文字、以及实际被输入的文字，请你列出肯定坏掉的那些键。

输入格式：
输入在 2 行中分别给出应该输入的文字、以及实际被输入的文字。每段文字是不超过 80 个字符的串，由字母 A-Z（包括大、小写）
 、数字 0-9、以及下划线 _（代表空格）组成。题目保证 2 个字符串均非空。

输出格式：
按照发现顺序，在一行中输出坏掉的键。其中英文字母只输出大写，每个坏键只输出一次。题目保证至少有 1 个坏键。

输入样例：
7_This_is_a_test
_hs_s_a_es
输出样例：
7TI*/

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char input[81];
//    char output[81];
//    int alreadyPrint[128] = {0};
//
//    gets(input);
//    gets(output);
//
//    for (int i = 0; i < strlen(input); i++) {
//        int has = 0;
//        for (int j = 0; j < strlen(output); j++) {
//            if (output[j] == input[i]) {
//                has = 1;
//                break;
//            }
//        }
////        判断是否包含某字符
//        if (!has) {
//            if (input[i] >= 'a' && input[i] <= 'z') {
//                input[i] = input[i] + 'A' - 'a';
//            }
//
////            如果没打印过，则打印，并标记为已打印
//            if (!alreadyPrint[input[i]]) {
//                putchar(input[i]);
//                alreadyPrint[input[i]] = 1;
//            }
//        }
//    }
//
//    return 0;
//}

//老方法
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char input[81];
//    char out[81];
//    char alreadyPrint[81];
//    int count = 0;
//
//    gets(input);
//    gets(out);
//
//    for (int i = 0; i < strlen(input); i++) {
//        int has = 0;
//        for (int j = 0; j < strlen(out); j++) {
//            if (out[j] == input[i]) {
//                has = 1;
//                break;
//            }
//        }
//
//        if (!has) {
//            if (input[i] >= 'a' && input[i] <= 'z') {
//                input[i] = input[i] - 32;
//            }
//            int hasPrint = 0;
//            for (int j = 0; j < strlen(alreadyPrint); j++) {
//                if (alreadyPrint[j] == input[i]) {
//                    hasPrint = 1;
//                    break;
//                }
//            }
//
//            if (!hasPrint){
//                alreadyPrint[count] = input[i];
//                putchar(input[i]);
//                count++;
//            }
//
//        }
//    }
//
//    return 0;
//}

//方法2
//int main() {
//    int i, j;
////    该字符的数量，0表示没打印过， 如f['A'] = 0 ,说明还没打印过
//    int f[111];
//    char a[111], b[111];
//
//    while (~scanf("%s %s", a, b)) {
//        memset (f, 0, sizeof(f));
//        for (j = i = 0; a[i] != 0; i++) {
//            if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
//            if (b[i] >= 'a' && b[i] <= 'z') b[i] -= 32;
//
//            if (a[i] == b[j]) j++;
//            else {
//                if (!f[a[i] - '0']) {
//                    putchar(a[i]);
//                    f[a[i] - '0'] = 1;
//                }
//            }
//        }
//        puts("");
//    }
//    return 0;
//}