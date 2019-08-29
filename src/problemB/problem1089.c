//
// Created by forgot on 2019-08-04.
//
/*1089 狼人杀-简单版 (20 point(s))*/
/*以下文字摘自《灵机一动·好玩的数学》：“狼人杀”游戏分为狼人、好人两大阵营。在一局“狼人杀”游戏中，1 号玩家说：“2 号是狼人”，2 号玩家说：“3 号是好人”，
 * 3 号玩家说：“4 号是狼人”，4 号玩家说：“5 号是好人”，5 号玩家说：“4 号是好人”。已知这 5 名玩家中有 2 人扮演狼人角色，有 2 人说的不是实话，
 * 有狼人撒谎但并不是所有狼人都在撒谎。扮演狼人角色的是哪两号玩家？

本题是这个问题的升级版：已知 N 名玩家中有 2 人扮演狼人角色，有 2 人说的不是实话，有狼人撒谎但并不是所有狼人都在撒谎。要求你找出扮演狼人角色的是哪几号玩家？

输入格式：
输入在第一行中给出一个正整数 N（5≤N≤100）。随后 N 行，第 i 行给出第 i 号玩家说的话（1≤i≤N），即一个玩家编号，用正号表示好人，负号表示狼人。

输出格式：
如果有解，在一行中按递增顺序输出 2 个狼人的编号，其间以空格分隔，行首尾不得有多余空格。如果解不唯一，则输出最小序列解 ——
 即对于两个序列 A=a[1],...,a[M] 和 B=b[1],...,b[M]，若存在 0≤k<M 使得 a[i]=b[i] （i≤k），且 a[k+1]<b[k+1]，则称序列 A 小于序列 B。
 若无解则输出 No Solution。

输入样例 1：
5
-2
+3
-4
+5
+4
输出样例 1：
1 4
输入样例 2：
6
+6
+3
+1
-5
-2
+4
输出样例 2（解不唯一）：
1 5
输入样例 3：
5
-2
-3
-4
-5
-1
输出样例 3：
No Solution*/

//#include <stdio.h>
//
//int main() {
//    int N;
//    scanf("%d", &N);
////    解的数量
//    int solveCount = 0;
//    int input[N];
//    int lang[2] = {101, 101};
//    for (int i = 1; i <= N; i++) {
//        scanf("%d", &input[i]);
//    }
//
//    //    说真话的狼人
//    int langTrue;
//    //    说假话的狼人
//    int langFalse;
//    //    说假话的平民
//    int pFalse;
//    int isSolve;
////    遍历3个特殊角色，寻找解
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            for (int k = 1; k <= N; k++) {
//                if (i == j || j == k || i == k) {
//                    continue;
//                }
//
//                langTrue = i;
//                langFalse = j;
//                pFalse = k;
//                isSolve = 1;
////                两人说假话，把他们说的话反过来
//                input[langFalse] *= -1;
//                input[pFalse] *= -1;
//
//                for (int l = 1; l <= N; l++) {
//                    if (input[l] < 0 && (-input[l] != langTrue && -input[l] != langFalse)) {
////                        若说有其他狼，则无解
//                        isSolve = 0;
//                        break;
//                    } else if (input[l] > 0 && (input[l] == langTrue || input[l] == langFalse)) {
////                        若说这两个不是狼，则无解
//                        isSolve = 0;
//                        break;
//                    }
//                }
//
////                有解之后，还要找出最小序列
//                if (isSolve) {
//                    int min = langTrue > langFalse ? langFalse : langTrue;
//                    int max = langTrue > langFalse ? langTrue : langFalse;
//                    if (min < lang[0] || (min == lang[0] && max < lang[1])) {
//                        lang[0] = min;
//                        lang[1] = max;
//                    }
//                    solveCount++;
//                }
//
////                把原来真假值改回去,进行下一轮
//                input[langFalse] *= -1;
//                input[pFalse] *= -1;
//
//            }
//        }
//    }
//
//    if (solveCount) {
//        printf("%d %d", lang[0], lang[1]);
//    } else {
//        printf("No Solution");
//    }
//    return 0;
//}
