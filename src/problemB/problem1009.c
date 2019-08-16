//
// Created by forgot on 2019-08-02.
//
/*1009 说反话 (20 point(s))*/
/*给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：
测试输入包含一个测试用例，在一行内给出总长度不超过 80 的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，
 单词之间用 1 个空格分开，输入保证句子末尾没有多余的空格。

输出格式：
每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello*/

//麻烦
#include <stdio.h>
#include <string.h>

//直接输出
//int main() {
//    char str[81];
//    gets(str);
//    for (int i = strlen(str); i > 0; i--) {
//        if (str[i] == ' ') {
//            printf("%s ", &str[i + 1]);
//            str[i] = '\0'; //\0表示结束符，后续字符串将在次中断
//        }
//    }
//    printf("%s", &str[0]);
//    return 0;
//}


//保存为数组，再输出
//int main() {
//    char *p[81];
//    int index = 0;
//    char c[81];
//    gets(c);
//
//    for (int j = strlen(c); j >= 0; j--) {
//        if (c[j] == ' ') {
//            p[index] = &c[j + 1];
//            index++;
//            c[j] = '\0';
//        }
//    }
//    p[index] = &c[0];
//
//    for (int i = 0; i < index; ++i) {
//        printf("%s ", p[i]);
//    }
//    printf("%s", p[index]);
//
//    return 0;
//}
