//
// Created by forgot on 2019-08-04.
//
//1081 检查密码 (15 point(s))
/*本题要求你帮助某网站的用户注册模块写一个密码合法性检查的小功能。该网站要求用户设置的密码必须由不少于6个字符组成，并且只能有英文字母、数字和小数点
 * .，还必须既有字母也有数字。

输入格式：
输入第一行给出一个正整数 N（≤ 100），随后 N 行，每行给出一个用户设置的密码，为不超过 80 个字符的非空字符串，以回车结束。

输出格式：
对每个用户的密码，在一行中输出系统反馈信息，分以下5种：

如果密码合法，输出Your password is wan mei.；
如果密码太短，不论合法与否，都输出Your password is tai duan le.；
如果密码长度合法，但存在不合法字符，则输出Your password is tai luan le.；
如果密码长度合法，但只有字母没有数字，则输出Your password needs shu zi.；
如果密码长度合法，但只有数字没有字母，则输出Your password needs zi mu.。
输入样例：
5
123s
zheshi.wodepw
1234.5678
WanMei23333
pass*word.6
输出样例：
Your password is tai duan le.
Your password needs shu zi.
Your password needs zi mu.
Your password is wan mei.
Your password is tai luan le.*/

////如果只有小数点会怎样？好像文中没有说啊, 那首先判断没有数字，就输出 Your password needs shu zi.
//// 题目没说密码不能有空格，所以要注意处理空格输入，不然会错第三个用例
//#include "stdio.h"
//#include "string.h"
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    getchar();
//    for (int i = 0; i < N; ++i) {
//        char pwd[81];
//        gets(pwd);
//        int illegal = 0;
//        int hasChar = 0;
//        int hasNum = 0;
//        int hasDot = 0;
//        if (strlen(pwd) < 6) {
//            printf("Your password is tai duan le.");
//        } else {
//            for (int j = 0; j < strlen(pwd); ++j) {
//                if (pwd[j] >= '0' && pwd[j] <= '9') {
//                    hasNum = 1;
//                } else if ((pwd[j] >= 'a' && pwd[j] <= 'z') || (pwd[j] >= 'A' && pwd[j] <= 'Z')) {
//                    hasChar = 1;
//                } else if (pwd[j] == '.') {
//                    hasDot = 1;
//                } else {
//                    illegal = 1;
//                }
//            }
//
//            if (illegal) {
//                printf("Your password is tai luan le.");
//            } else if (!hasNum) {
//                printf("Your password needs shu zi.");
//            } else if (!hasChar) {
//                printf("Your password needs zi mu.");
//            } else {
//                printf("Your password is wan mei.");
//            }
//        }
//
//        if (i != N - 1) {
//            printf("\n");
//        }
//
//    }
//
//    return 0;
//}




//#include "stdio.h"
//#include "string.h"
//错了一个用例
//int main() {
//    int N;
//    scanf("%d", &N);
//    for (int i = 0; i < N; ++i) {
//        char pwd[81];
//        scanf("%s",pwd);
//        int illegal = 0;
//        int hasChar = 0;
//        int hasNum = 0;
//        if (strlen(pwd) < 6) {
//            printf("Your password is tai duan le.");
//            if (i!=N-1){
//                printf("\n");
//            }
//            continue;
//        }
//
//        for (int j = 0; j < strlen(pwd); ++j) {
//            if (pwd[j] >= '0' && pwd[j] <= '9') {
//                hasNum = 1;
//            } else if ((pwd[j] >= 'a' && pwd[j] <= 'z') || (pwd[j] >= 'A' && pwd[j] <= 'Z')) {
//                hasChar = 1;
//            } else if (pwd[j] != '.') {
//                illegal = 1;
//            }
//        }
//
//        if (illegal){
//            printf("Your password is tai luan le.");
//        }else if (hasChar&&!hasNum){
//            printf("Your password needs shu zi.");
//        }else if (hasNum&&!hasChar){
//            printf("Your password needs zi mu.");
//        }else{
//            printf("Your password is wan mei.");
//        }
//
//        if (i!=N-1){
//            printf("\n");
//        }
//
//    }
//
//    return 0;
//}