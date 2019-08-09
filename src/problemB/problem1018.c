//
// Created by forgot on 2019-08-03.
//
//1018 锤子剪刀布 (20 point(s))
/*大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：

FigCJB.jpg

现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。

输入格式：
输入第 1 行给出正整数 N（≤10
​5
​​ ），即双方交锋的次数。随后 N 行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。C 代表“锤子”、J 代表“剪刀”、B 代表“布”，第 1 个字母代表甲方，第 2 个代表乙方，中间有 1 个空格。

输出格式：
输出第 1、2 行分别给出甲、乙的胜、平、负次数，数字间以 1 个空格分隔。第 3 行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有 1 个空格。如果解不唯一，则输出按字母序最小的解。

输入样例：
10
C J
J B
C B
B B
B C
C C
C B
J B
B C
J J
输出样例：
5 3 2
2 3 5
B B*/

#include <stdio.h>

//int main() {
//    int N;
//    scanf("%d", &N);
//    int jYing = 0, jPing = 0, jFu = 0;
//    int yYing = 0, yPing = 0, yFu = 0;
//    int jBwin = 0, jCwin = 0, jJwin = 0;
//    int yBwin = 0, yCwin = 0, yJwin = 0;
//    int jwinMax, ywinMax;
//    char jMax,yMax;
//
//    for (int i = 0; i < N; i++) {
//        char jia, yi;
////        取出空格
//        getchar();
//        scanf("%c", &jia);
////
//        getchar();
//        scanf("%c", &yi);
//        if (jia == 'B') {
//            if (yi == 'B') {
//                jPing++;
//                yPing++;
//            } else if (yi == 'C') {
//                jYing++;
//                jBwin++;
//                yFu++;
//            } else if (yi == 'J') {
//                jFu++;
//                yYing++;
//                yJwin++;
//            }
//        } else if (jia == 'C') {
//            if (yi == 'C') {
//                jPing++;
//                yPing++;
//            } else if (yi == 'J') {
//                jYing++;
//                jJwin++;
//                yFu++;
//            } else if (yi == 'B') {
//                jFu++;
//                yYing++;
//                yBwin++;
//            }
//        } else if (jia == 'J') {
//            if (yi == 'J') {
//                jPing++;
//                yPing++;
//            } else if (yi == 'B') {
//                jYing++;
//                jBwin++;
//                yFu++;
//            } else if (yi == 'C') {
//                jFu++;
//                yYing++;
//                yCwin++;
//            }
//        }
//    }
//
//    printf("%d %d %d\n", jYing, jPing, jFu);
//    printf("%d %d %d\n", yYing, yPing, yFu);
//    jwinMax = jBwin;
//    jMax = 'B';
//    if (jCwin > jBwin) {
//        jwinMax = jCwin;
//        jMax = 'C';
//    }
//    if (jJwin > jwinMax) {
//        jwinMax = jJwin;
//        jMax = 'J';
//    }
//
//    ywinMax = yBwin;
//    yMax = 'B';
//    if (yCwin > yBwin) {
//        ywinMax = yCwin;
//        yMax = 'C';
//    }
//    if (yJwin > ywinMax) {
//        ywinMax = yJwin;
//        yMax = 'J';
//    }
//
//    printf("%c %c", jMax, yMax);
//
//    return 0;
//}