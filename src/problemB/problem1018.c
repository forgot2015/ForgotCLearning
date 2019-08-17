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
// 统计输赢平数据时要细心，我第一次就粗心统计错了
//int main() {
//    int N;
//    scanf("%d", &N);
//    char jia, yi;
//    int jiaWin = 0;
//    int jiaPing = 0;
//    int jiaLost = 0;
//    int jiaWinB = 0;
//    int jiaWinC = 0;
//    int jiaWinJ = 0;
//    int jiaWinMax;
//    char jiaMaxChar;
//
//    int yiWin = 0;
//    int yiPing = 0;
//    int yiLost = 0;
//    int yiWinB = 0;
//    int yiWinC = 0;
//    int yiWinJ = 0;
//    int yiWinMax;
//    int yiMaxChar;
//
//    for (int i = 0; i < N; i++) {
//        getchar();
//        scanf("%c %c", &jia, &yi);
//        if (jia == 'B') {
//            if (yi == 'C') {
//                jiaWin++;
//                jiaWinB++;
//                yiLost++;
//            } else if (yi == 'J') {
//                jiaLost++;
//                yiWin++;
//                yiWinJ++;
//            } else {
//                jiaPing++;
//                yiPing++;
//            }
//        } else if (jia == 'C') {
//            if (yi == 'J') {
//                jiaWin++;
//                jiaWinC++;
//                yiLost++;
//            } else if (yi == 'B') {
//                jiaLost++;
//                yiWin++;
//                yiWinB++;
//            } else {
//                jiaPing++;
//                yiPing++;
//            }
//        } else if (jia == 'J') {
//            if (yi == 'B') {
//                jiaWin++;
//                jiaWinJ++;
//                yiLost++;
//            } else if (yi == 'C') {
//                jiaLost++;
//                yiWin++;
//                yiWinC++;
//            } else {
//                jiaPing++;
//                yiPing++;
//            }
//        }
//    }
//
//    printf("%d %d %d\n", jiaWin, jiaPing, jiaLost);
//    printf("%d %d %d\n", yiWin, yiPing, yiLost);
//
//    jiaWinMax = jiaWinB;
//    jiaMaxChar = 'B';
//    if (jiaWinC > jiaWinMax) {
//        jiaWinMax = jiaWinC;
//        jiaMaxChar = 'C';
//    }
//    if (jiaWinJ > jiaWinMax) {
//        jiaWinMax = jiaWinJ;
//        jiaMaxChar = 'J';
//    }
//
//    yiWinMax = yiWinB;
//    yiMaxChar = 'B';
//    if (yiWinC > yiWinMax) {
//        yiWinMax = yiWinC;
//        yiMaxChar = 'C';
//    }
//    if (yiWinJ > yiWinMax) {
//        yiWinMax = yiWinJ;
//        yiMaxChar = 'J';
//    }
//
//    printf("%c %c", jiaMaxChar, yiMaxChar);
//    return 0;
//}