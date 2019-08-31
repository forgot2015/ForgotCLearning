//
// Created by forgot on 2019-08-04.
//
/*1078 字符串压缩与解压 (20 point(s))*/
/*文本压缩有很多种方法，这里我们只考虑最简单的一种：把由相同字符组成的一个连续的片段用这个字符和片段中含有这个字符的个数来表示。例如 ccccc 就用
 * 5c 来表示。如果字符没有重复，就原样输出。例如 aba 压缩后仍然是 aba。

解压方法就是反过来，把形如 5c 这样的表示恢复为 ccccc。

本题需要你根据压缩或解压的要求，对给定字符串进行处理。这里我们简单地假设原始字符串是完全由英文字母和空格组成的非空字符串。

输入格式：
输入第一行给出一个字符，如果是 C 就表示下面的字符串需要被压缩；如果是 D 就表示下面的字符串需要被解压。第二行给出需要被压缩或解压的不超过 1000 个
 字符的字符串，以回车结尾。题目保证字符重复个数在整型范围内，且输出文件不超过 1MB。

输出格式：
根据要求压缩或解压字符串，并在一行中输出结果。

输入样例 1：
C
TTTTThhiiiis isssss a   tesssst CAaaa as
输出样例 1：
5T2h4is i5s a3 te4st CA3a as
输入样例 2：
D
5T2h4is i5s a3 te4st CA3a as10Z
输出样例 2：
TTTTThhiiiis isssss a   tesssst CAaaa asZZZZZZZZZZ*/

//D
//5T2h4is i5s a3 te4st CA3a as10Z8
/*
D
5T2h4is i5s a3 te4st CA3a as10Z200z9999b99999999a
 * */

//与84题类似解法
// 错了一个用例
//#include <stdio.h>
//#include <string.h>
//
//void doTypeC() {
//    char input[1001];
//    gets(input);
//    int len = strlen(input);
//    for (int i = 0; i < len; i++) {
//        int count = 1;
//        while (input[i + 1] == input[i]) {
//            count++;
//            i++;
//        }
//
//        if (count > 1) {
//            printf("%d", count);
//        }
//        putchar(input[i]);
//    }
//}
//
//void doTypeD() {
//    char input[1001];
//    gets(input);
//    int len = strlen(input);
//
//    for (int i = 0; i < len; i++) {
//        int count = 0;
//        while (input[i] >= '0' && input[i] <= '9') {
//            count = count * 10 + input[i] - '0';
//            i++;
//        }
//        for (int j = 0; j < count; j++) {
//            putchar(input[i]);
//        }
//        if (count == 0) {
//            putchar(input[i]);
//        }
//    }
//}
//
//int main() {
//    char ch;
//    scanf("%c", &ch);
//    getchar();
//    if (ch == 'C') {
//        doTypeC();
//    } else if (ch == 'D') {
//        doTypeD();
//    }
//    return 0;
//}




//与84题类似解法
// 错了一个用例, 而且思维方向不对，简单问题复杂化了
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//char out[2001];
//
//int main() {
//    char ch;
//    scanf("%c", &ch);
//    getchar();
//    if (ch == 'C') {
//        char input[1001];
//        gets(input);
//        int index = 0;
//        int len = strlen(input);
////        步长，决定下一次从第几个位置开始遍历
//        int step = 1;
//        for (int i = 0; i < len; i = i + step) {
//            for (int j = i; j < len; j++) {
//                //寻找下一个不同字符的位置
//                if (input[j] != input[i]) {
//                    step = j - i;
//                    if (step >= 2) {
//                        out[index] = step + '0';
//                        out[index + 1] = input[i];
//                        index = index + 2;
//                    } else {
//                        out[index] = input[i];
//                        index++;
//                    }
//                    break;
//                } else if (j == len - 1) {
////如果遍历到最后一位，也没找到下一个不同的字符，那么就是剩下的都是相同字符了，特殊处理
//                    step = j - i + 1;
//                    if (step >= 2) {
//                        out[index] = step + '0';
//                        out[index + 1] = input[i];
//                        index = index + 2;
//                    } else {
//                        out[index] = input[i];
//                        index++;
//                    }
//                    break;
//                } else {
//                    step = 1;
//                }
//            }
//        }
//        printf("%s", out);
//    } else if (ch == 'D') {
//        char input[1001];
//        gets(input);
//        int len = strlen(input);
//        int step = 1;
//        for (int i = 0; i < len; i += step) {
//            if (input[i] >= '0' && input[i] <= '9') {
//                for (int k = i; k < len; k++) {
//                    if (input[k] > '9' || input[k] < '0') {
//                        char numStr[k - i];
//                        strncpy(numStr, input + i, k - i);
//                        numStr[k - i] = '\0';
//                        int count = atoi(numStr);
//                        for (int j = 0; j < count; j++) {
//                            putchar(input[k]);
//                        }
//                        step = k - i + 1;
//                        break;
//                    }
//                }
//
//            } else {
//                putchar(input[i]);
//                step = 1;
//            }
//        }
//    }
//
//    return 0;
//}
