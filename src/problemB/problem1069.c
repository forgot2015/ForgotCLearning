//
// Created by forgot on 2019-08-04.
//
/*1069 微博转发抽奖 (20 point(s))*/
/*小明 PAT 考了满分，高兴之余决定发起微博转发抽奖活动，从转发的网友中按顺序每隔 N 个人就发出一个红包。请你编写程序帮助他确定中奖名单。

输入格式：
输入第一行给出三个正整数 M（≤ 1000）、N 和 S，分别是转发的总量、小明决定的中奖间隔、以及第一位中奖者的序号（编号从 1 开始）。随后 M 行，顺序给
 出转发微博的网友的昵称（不超过 20 个字符、不包含空格回车的非空字符串）。

注意：可能有人转发多次，但不能中奖多次。所以如果处于当前中奖位置的网友已经中过奖，则跳过他顺次取下一位。

输出格式：
按照输入的顺序输出中奖名单，每个昵称占一行。如果没有人中奖，则输出 Keep going...。

输入样例 1：
9 3 2
Imgonnawin!
PickMe
PickMeMeMeee
LookHere
Imgonnawin!
TryAgainAgain
TryAgainAgain
Imgonnawin!
TryAgainAgain
输出样例 1：
PickMe
Imgonnawin!
TryAgainAgain
输入样例 2：
2 3 5
Imgonnawin!
PickMe
输出样例 2：
Keep going...*/


//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int M, N, S;
//    char prizeName[1001][21];
//    char *prize[1001];
//    int prizeCount = 0;
//    scanf("%d %d %d", &M, &N, &S);
//
//    for (int i = 0; i < M; i++) {
//        scanf("%s", prizeName[i]);
//
//        if (i + 1 == S) {
//            int duplicate = 0;
//            for (int j = 0; j < prizeCount; j++) {
//                if (strcmp(prize[j], prizeName[i]) == 0) {
//                    duplicate = 1;
//                    break;
//                }
//            }
//
//            if (duplicate) {
//                S += 1;
//                continue;
//            } else {
//                printf("%s\n", prizeName[i]);
//                prize[prizeCount] = prizeName[i];
//                prizeCount++;
//                S += N;
//            }
//        }
//    }
//
//    if (!prizeCount) {
//        printf("Keep going...");
//    }
//    return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//struct Person{
//    char name[21];
//};
//
////头晕, 用结构体，而不要用字符串数组指针，因为指针指向地址，prize[0]会一直等于prizeName（prizeName地址没变，只是值改变了）
//// 有解决办法，看1072题目
//int main() {
//    int M, N, S;
////    char *prize[1001];
//    int prizeCount = 0;
//    scanf("%d %d %d", &M, &N, &S);
//    struct Person person[1001];
//
//    for (int i = 1; i <= M; i++) {
//        char prizeName[21];
//        scanf("%s", prizeName);
//
//        if (i == S) {
//            int duplicate = 0;
//            for (int j = 0; j < prizeCount; j++) {
//                if (strcmp(person[j].name, prizeName) == 0) {
//                    duplicate = 1;
//                    break;
//                }
//            }
//
//            if (duplicate) {
//                S += 1;
//                continue;
//            } else {
//                printf("%s\n", prizeName);
//                strcpy(person[prizeCount].name , prizeName);
//                prizeCount++;
//                S += N;
//            }
//        }
//    }
//
//    if (!prizeCount) {
//        printf("Keep going...");
//    }
//    return 0;
//}