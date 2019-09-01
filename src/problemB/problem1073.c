//
// Created by forgot on 2019-08-04.
//
/*1073 多选题常见计分法 (20 point(s))*/
/*批改多选题是比较麻烦的事情，有很多不同的计分方法。有一种最常见的计分方法是：如果考生选择了部分正确选项，并且没有选择任何错误选项，则得到 50%
 * 分数；如果考生选择了任何一个错误的选项，则不能得分。本题就请你写个程序帮助老师批改多选题，并且指出哪道题的哪个选项错的人最多。

输入格式：
输入在第一行给出两个正整数 N（≤1000）和 M（≤100），分别是学生人数和多选题的个数。随后 M 行，每行顺次给出一道题的满分值（不超过 5 的正整数）、
 选项个数（不少于 2 且不超过 5 的正整数）、正确选项个数（不超过选项个数的正整数）、所有正确选项。注意每题的选项从小写英文字母 a 开始顺次排列。
 各项间以 1 个空格分隔。最后 N 行，每行给出一个学生的答题情况，其每题答案格式为 (选中的选项个数 选项1 ……)，按题目顺序给出。注意：题目保证学生的
 答题情况是合法的，即不存在选中的选项数超过实际选项数的情况。

输出格式：
按照输入的顺序给出每个学生的得分，每个分数占一行，输出小数点后 1 位。最后输出错得最多的题目选项的信息，格式为：错误次数 题目编号（题目按照输入的顺
 序从1开始编号）-选项号。如果有并列，则每行一个选项，按题目编号递增顺序输出；再并列则按选项号递增顺序输出。行首尾不得有多余空格。如果所有题目都没
 有人错，则在最后一行输出 Too simple。

输入样例 1：
3 4
3 4 2 a c
2 5 1 b
5 3 2 b c
1 5 4 a b d e
(2 a c) (3 b d e) (2 a c) (3 a b e)
(2 a c) (1 b) (2 a b) (4 a b d e)
(2 b d) (1 e) (1 c) (4 a b c d)
输出样例 1：
3.5
6.0
2.5
2 2-e
2 3-a
2 3-b
输入样例 2：
2 2
3 4 2 a c
2 5 1 b
(2 a c) (1 b)
(2 a c) (1 b)

 2 2
3 4 2 a c
2 5 1 b
(2 a) (1 b)
(2 a) (1 b)
输出样例 2：
5.0
5.0
Too simple*/

////在58题的基础上，增加了对一半分的判断，还有具体某个错误字符的统计
//// 难点在于格式化获取输入选项，有个坑是统计错误字符次数时，正确答案没选是错，错误答案选了也是错，两者都要统计；
//// 题目问的是错的最多的题目选项的信息，而不是错的最多的题目信息
//// 全部对时，打印"Too simple"
//#include <stdio.h>
//#include <string.h>
//
//typedef struct {
//    int score;
//    int allCount;
//    int ansCount;
////    正确答案，1表示有 0没有，如10000， 表示答案是a
//    int answers[5];
//} Problem;
//
//int main() {
//    int N, M;
//    scanf("%d %d", &N, &M);
//
//    Problem problem[M];
//    int wrongCount[M][5];
//    int maxWrong = 0;
//    double score[N];
//
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < 5; j++) {
//            //每个答案选项错误次数归零
//            wrongCount[i][j] = 0;
//
//            //正确答案选项归零
//            problem[i].answers[j] = 0;
//        }
//    }
//
//    for (int i = 0; i < M; i++) {
//        scanf("%d %d %d", &problem[i].score, &problem[i].allCount, &problem[i].ansCount);
////        记录题目答案
//        char c;
//        for (int j = 0; j < problem[i].ansCount; j++) {
////            要匹配前面的空格，否则获取出错
//            scanf(" %c", &c);
//            problem[i].answers[c - 'a'] = 1;
//        }
//    }
//
////    遍历学生和答题情况
//    getchar();
//    for (int k = 0; k < N; k++) {
//        score[k] = 0;
//        int index = 0;
//        int ch;
//        char c;
//
//        while ((ch = getchar()) != '\n') {
//            if (ch == '(') {
//                int input[5] = {0};
//                int sAnswerCount;
//            //是否正确，漏选也算正确
//                int isRight = 1;
//            // 是否全部正确
//                int isAllRight = 1;
//
//                scanf("%d", &sAnswerCount);
//                for (int j = 0; j < sAnswerCount; j++) {
//                    scanf(" %c", &c);
//                    input[c - 'a'] = 1;
//                }
//
//                for (int i = 0; i < 5; i++) {
////                    错选了,答案没有，但却选了
//                    if (input[i] == 1 && problem[index].answers[i] == 0) {
//                        isRight = 0;
//                        wrongCount[index][i]++;
//                    } else if (input[i] == 0 && problem[index].answers[i] == 1) {
////                        漏选了，答案有，但却没有选
//                        isAllRight = 0;
//                        wrongCount[index][i]++;
//                    }
//                    if (maxWrong < wrongCount[index][i]) {
//                        maxWrong = wrongCount[index][i];
//                    }
//                }
//                if (isRight) {
//                    if (isAllRight) {
//                        score[k] += problem[index].score;
//                    } else {
//                        score[k] += problem[index].score * 0.5;
//                    }
//                }
//
//                index++;
//            }
//        }
//
//        printf("%.1lf\n", score[k]);
//    }
//
//    if (maxWrong == 0) {
//        printf("Too simple");
//        return 0;
//    }
//
//    for (int m = 0; m < M; m++) {
//        for (int i = 0; i < 5; i++) {
//            if (wrongCount[m][i] == maxWrong) {
//                printf("%d %d-%c\n", maxWrong, m + 1, i + 'a');
//            }
//        }
//    }
//
//    return 0;
//}



//// 有个坑是统计错误字符次数时，正确答案没选是错，错误答案选了也是错，两者都要统计
//解题思路就不好，复杂化了
//// 全部对时，打印"Too simple"
// 错两个用例啊
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
//
//    int maxWrongCount = 0;
//    int wrongCount[M];
//    int wrongCharCount[M][128];
//    int wrongCharCountMax[M];
//    double score[N];
//    for (int i = 0; i < M; i++) {
//        scanf("%d %d %d", &problem[i].score, &problem[i].allCount, &problem[i].ansCount);
////        记录题目答案
//        for (int j = 0; j < problem[i].ansCount; j++) {
////            要匹配前面的空格，否则获取出错
//            scanf(" %c", &problem[i].answers[j]);
//        }
////        将长度之外的字符清空，这样就不会有多余乱码
//        problem[i].answers[problem[i].ansCount] = '\0';
//
////        初始化每题错误次数
//        wrongCount[i] = 0;
//        wrongCharCount[i]['a'] = 0;
//        wrongCharCount[i]['b'] = 0;
//        wrongCharCount[i]['c'] = 0;
//        wrongCharCount[i]['d'] = 0;
//        wrongCharCount[i]['e'] = 0;
//        wrongCharCountMax[i] = 0;
//    }
//
////    for (int k = 0; k < M; k++) {
////        printf("q[%d] answer = %s\n", k, problem[k].answers);
////    }
//
////    遍历学生和答题情况
//    int ch;
//    int index = 0;
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
//
//                char curAnswer[6];
//                strcpy(curAnswer, problem[index].answers);
//                if (strcmp(input, curAnswer) == 0) {
//                    score[k] += problem[index].score;
//                } else {
////                    对部分则得50%的分
//                    int answersLen = strlen(curAnswer);
//                    int inputLen = strlen(input);
////                    是否部分正确
//                    int isPartRight = 1;
////                    遍历输入的每个答案，看是否属于正确答案，记录错误答案的字符
//                    for (int i = 0; i < inputLen; i++) {
//                        int rightChar = 0;
//                        for (int j = 0; j < answersLen; j++) {
//                            if (input[i] == curAnswer[j]) {
//                                rightChar = 1;
//                                break;
//                            }
//                        }
//                        if (!rightChar) {
////                            如果有一个答案是错的，那么整题错误，没分，且记录错误的字符
//                            isPartRight = 0;
//                            wrongCharCount[index][input[i]]++;
//                            if (wrongCharCount[index][input[i]] > wrongCharCountMax[index]) {
//                                wrongCharCountMax[index] = wrongCharCount[index][input[i]];
//                            }
//                        }
//                    }
//
////                    遍历正确答案，看输入的选项漏了哪些
//                    for (int i = 0; i < answersLen; i++) {
//                        int hasSelected = 0;
//                        for (int j = 0; j < inputLen; j++) {
//                            if (input[j] == curAnswer[i]) {
//                                hasSelected = 1;
//                                break;
//                            }
//                        }
//                        if (!hasSelected) {
////                            如果没有勾选，则记录
////                            isPartRight = 0;
//                            wrongCharCount[index][curAnswer[i]]++;
//                            if (wrongCharCount[index][curAnswer[i]] > wrongCharCountMax[index]) {
//                                wrongCharCountMax[index] = wrongCharCount[index][curAnswer[i]];
//                            }
//                        }
//                    }
//
//                    if (isPartRight) {
////                        部分正确得50%的分
//                        score[k] += problem[index].score * 0.5;
//                    } else {
//                        //全部错误不得分，统计错的最多的题目
//                        wrongCount[index]++;
//                        if (wrongCount[index] > maxWrongCount) {
//                            maxWrongCount = wrongCount[index];
//                        }
//                    }
//                }
//
//                index++;
//            }
//        }
//        printf("%.1lf\n", score[k]);
//    }
//
//    if (maxWrongCount == 0) {
//        printf("Too simple");
//        return 0;
//    }
//
//    for (int m = 0; m < M; m++) {
////        printf("\n wrongCount[%d] =%d ", m, wrongCount[m]);
//        if (wrongCount[m] == maxWrongCount) {
//            for (int i = 'a'; i <= 'e'; i++) {
////                printf("\n wrongCharCount[%d][%c] =%d ", m, i, wrongCharCount[m][i]);
//                if (wrongCharCount[m][i] == wrongCharCountMax[m]) {
//                    printf("%d %d-%c\n", maxWrongCount, m + 1, i);
//                }
//            }
//        }
//    }
//
//    return 0;
//}

//网友解法
/*
 * （该题为 1058. 选择题 的基础上，增加了 选择部分正确选项&没选错误选项，则得到50%分数的判断）
 */
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//    int score;//满分值
//    int cnt;//2 <= 选项个数 <= 5
//    int right_cnt;//正确选项的个数
//    int opt[5];//下标代表选项
//} question;
//
//int main() {
//    int N, M;//学学生人数、多选题的个数
//    scanf("%d %d", &N, &M);
//    question q[M];
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < 5; j++) {
//            q[i].opt[j] = 0;
//        }
//    }
//    for (int i = 0; i < M; i++) {//给出多选题
//        scanf("%d %d %d", &q[i].score, &q[i].cnt, &q[i].right_cnt);
//        char c;
//        for (int j = 0; j < q[i].right_cnt; j++) {
//            scanf(" %c", &c);
//            q[i].opt[c - 'a']++;//记录答案
//        }
//    }
//    int error[M][5], max_error = 0;
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < 5; j++) {
//            error[i][j] = 0;//错误次数
//        }
//    }
//    for (int i = 0; i < N; i++) { //学生答题情况
//        getchar();
//        double grades = 0.0;
//        for (int j = 0; j < M; j++) { //每一道题的答案
//            int opt_cnt, isRight = 1, isAllRight = 1;//选择的数量, 选项是否正确
//            char c;
//            int opt_stu[5] = {0};
//            scanf("(%d", &opt_cnt);
//            for (int k = 0; k < opt_cnt; k++) {
//                scanf(" %c", &c);
//                opt_stu[c - 'a'] = 1;//选择了该选项
//            }
//            for (int k = 0; k < 5; k++) {
//                if (q[j].opt[k] == 1 && opt_stu[k] == 0) {//答案有， 没选该答案
//                    isAllRight = 0;
//                    error[j][k]++;
//                } else if (q[j].opt[k] == 0 && opt_stu[k] == 1) {//答案没有，选了该答案，不得分
//                    isRight = 0;
//                    error[j][k]++;
//                }
//                if (max_error < error[j][k]) {
//                    max_error = error[j][k];
//                }
//            }
//            scanf(")");
//            if (j != M - 1) {
//                scanf(" ");
//            }
//            if (isRight) {//选项都正确
//                if (!isAllRight) {//选择的数量 少于正确答案
//                    grades += q[j].score / 2.0;
//                } else {//选择的数量 等于 正确答案
//                    grades += q[j].score;
//                }
//            }
//        }
//        printf("%.1f\n", grades);
//    }
//    if (max_error == 0) {
//        printf("Too simple\n");
//    } else {
//        for (int i = 0; i < M; i++) {
//            for (int j = 0; j < 5; j++) {
//                if (error[i][j] == max_error) {
//                    printf("%d %d-%c\n", error[i][j], i + 1, 'a' + j);
//                }
//            }
//        }
//    }
//    return 0;
//}

