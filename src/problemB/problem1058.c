//
// Created by forgot on 2019-08-04.
//
/*1058 选择题 (20 point(s))*/
/*批改多选题是比较麻烦的事情，本题就请你写个程序帮助老师批改多选题，并且指出哪道题错的人最多。

输入格式：
输入在第一行给出两个正整数 N（≤ 1000）和 M（≤ 100），分别是学生人数和多选题的个数。随后 M 行，每行顺次给出一道题的满分值（不超过 5 的正整数）、选项个数（不少于 2 且不超过 5 的正整数）、正确选项个数（不超过选项个数的正整数）、所有正确选项。注意每题的选项从小写英文字母 a 开始顺次排列。各项间以 1 个空格分隔。最后 N 行，每行给出一个学生的答题情况，其每题答案格式为 (选中的选项个数 选项1 ……)，按题目顺序给出。注意：题目保证学生的答题情况是合法的，即不存在选中的选项数超过实际选项数的情况。

输出格式：
按照输入的顺序给出每个学生的得分，每个分数占一行。注意判题时只有选择全部正确才能得到该题的分数。最后一行输出错得最多的题目的错误次数和编号（题目按照输入的顺序从 1 开始编号）。如果有并列，则按编号递增顺序输出。数字间用空格分隔，行首尾不得有多余空格。如果所有题目都没有人错，则在最后一行输出 Too simple。

输入样例：
3 4
3 4 2 a c
2 5 1 b
5 3 2 b c
1 5 4 a b d e
(2 a c) (2 b d) (2 a c) (3 a b e)
(2 a c) (1 b) (2 a b) (4 a b d e)
(2 b d) (1 e) (2 b c) (4 a b c d)
输出样例：
3
6
5
2 2 3 4*/

//// 注意题意，最后一行， 2表示错误最多的次数是2次， 2 3 4 表示错误2次的题目是第2、3、4题
//// 全部对时，打印"Too simple"
//
//#include <stdio.h>
//#include <string.h>
//
//typedef struct Problems {
//    int score;
//    int allCount;
//    int ansCount;
//    char answers[6];
//} Problem;
//
//int main() {
//    int N, M;
//    scanf("%d %d", &N, &M);
//    Problem problem[M];
//    for (int i = 0; i < M; i++) {
//        scanf("%d %d %d", &problem[i].score, &problem[i].allCount, &problem[i].ansCount);
////        记录题目答案
//        for (int j = 0; j < problem[i].ansCount; j++) {
////            要匹配前面的空格，否则获取出错
//            scanf(" %c", &problem[i].answers[j]);
//        }
////        将长度之外的字符清空，这样就不会有多余乱码
//        problem[i].answers[problem[i].ansCount] = '\0';
//    }
//
////    for (int k = 0; k < M; k++) {
////        printf("q[%d] answer = %s\n", k, problem[k].answers);
////    }
//
////    遍历学生和答题情况
//    int ch;
//    int score[N];
//    int index = 0;
//    int wrongCount[M];
////    初始化每题错误次数
//    for (int n = 0; n < M; n++) {
//        wrongCount[n] = 0;
//    }
//
//    int maxWrongIndex = 0;
//    int sAnswerCount;
//    getchar();
//    char input[6];
//    for (int k = 0; k < N; k++) {
//        score[k] = 0;
//        index = 0;
//        while ((ch = getchar()) != '\n') {
//            if (ch == '(') {
//                scanf("%d", &sAnswerCount);
//                for (int j = 0; j < sAnswerCount; j++) {
//                    scanf(" %c", &input[j]);
//                }
////                将长度之外的字符清空，这样就不会有多余乱码
//                input[sAnswerCount] = '\0';
//
////                printf("children[%d] answer[%d] = %s\n", k, index, input);
//                if (strcmp(input, problem[index].answers) == 0) {
//                    score[k] += problem[index].score;
//                } else {
////                    统计错的最多的题目
//                    wrongCount[index]++;
//                    if (wrongCount[index] > wrongCount[maxWrongIndex]) {
//                        maxWrongIndex = index;
//                    }
//                }
//                index++;
//            }
//        }
//        printf("%d\n",score[k]);
//    }
//
//    if (wrongCount[maxWrongIndex] == 0) {
//        printf("Too simple");
//        return 0;
//    }
//
//    printf("%d", wrongCount[maxWrongIndex]);
//    for (int m = 0; m < M; m++) {
//        if (wrongCount[m] == wrongCount[maxWrongIndex]) {
//            printf(" %d", m + 1);
//        }
//    }
//
//    return 0;
//}
