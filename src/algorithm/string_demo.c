//
// Created by forgot on 2019-08-02.
//

//使用递归来翻转字符串。
//实例 - 字符串翻转

#include <stdio.h>

void reverseSentence();

//int main() {
//    printf("输入一个字符串: ");
//    reverseSentence();
//
//    return 0;
//}

//使用递归来翻转字符串。
void reverseSentence() {
    char c;
    scanf("%c", &c);

    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}