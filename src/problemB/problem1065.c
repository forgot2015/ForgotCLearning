//
// Created by forgot on 2019-08-04.
//
/*1065 单身狗 (25 point(s))*/
/*“单身狗”是中文对于单身人士的一种爱称。本题请你从上万人的大型派对中找出落单的客人，以便给予特殊关爱。

输入格式：
输入第一行给出一个正整数 N（≤ 50 000），是已知夫妻/伴侣的对数；随后 N 行，每行给出一对夫妻/伴侣——为方便起见，每人对应一个 ID 号，
 为 5 位数字（从 00000 到 99999），ID 间以空格分隔；之后给出一个正整数 M（≤ 10 000），
 为参加派对的总人数；随后一行给出这 M 位客人的 ID，以空格分隔。题目保证无人重婚或脚踩两条船。

输出格式：
首先第一行输出落单客人的总人数；随后第二行按 ID 递增顺序列出落单的客人。ID 间用 1 个空格分隔，行的首尾不得有多余空格。

输入样例：
3
11111 22222
33333 44444
55555 66666
7
55555 44444 10000 88888 22222 11111 23333
输出样例：
5
10000 23333 44444 55555 88888*/

////一开始错了一个用例,打印格式问题，最终要打印5位数字啊，不满就前面补0
//#include "stdio.h"
//#include "stdlib.h"
//
//int cmpInput(const void *a, const void *b) {
//    return *(int *) a - *(int *) b;
//}
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    int pair[100000];
//
//    for (int i = 0; i < N; i++) {
//        int a, b;
//        scanf("%d %d", &a, &b);
//        pair[a] = b;
//        pair[b] = a;
//    }
//
//    int M;
//    scanf("%d", &M);
//    int input[M];
//    for (int j = 0; j < M; j++) {
//        scanf("%d", &input[j]);
//    }
//
//    qsort(input, M, sizeof(input[0]), cmpInput);
//
//    int dogCount = 0;
//    int dog[M];
//    for (int k = 0; k < M; k++) {
//        int isDog = 1;
//
//        for (int i = 0; i < M; i++) {
//            if (pair[input[i]] == input[k]) {
//                isDog = 0;
//                break;
//            }
//        }
//
//        if (isDog) {
//            dog[dogCount] = input[k];
//            dogCount++;
//        }
//    }
//
//    printf("%d\n", dogCount);
//    for (int l = 0; l < dogCount; l++) {
//        printf("%05d", dog[l]);
//
//        if (l != dogCount - 1) {
//            printf(" ");
//        }
//    }
//
//    return 0;
//}
