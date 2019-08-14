//
// Created by forgot on 2019-08-04.
//
/*1090 危险品装箱 (25 point(s))*/
/*集装箱运输货物时，我们必须特别小心，不能把不相容的货物装在一只箱子里。比如氧化剂绝对不能跟易燃液体同箱，否则很容易造成爆炸。

本题给定一张不相容物品的清单，需要你检查每一张集装箱货品清单，判断它们是否能装在同一只箱子里。

输入格式：
输入第一行给出两个正整数：N (≤10
​4
​​ ) 是成对的不相容物品的对数；M (≤100) 是集装箱货品清单的单数。

随后数据分两大块给出。第一块有 N 行，每行给出一对不相容的物品。第二块有 M 行，每行给出一箱货物的清单，格式如下：

K G[1] G[2] ... G[K]
其中 K (≤1000) 是物品件数，G[i] 是物品的编号。简单起见，每件物品用一个 5 位数的编号代表。两个数字之间用空格分隔。

输出格式：
对每箱货物清单，判断是否可以安全运输。如果没有不相容物品，则在一行中输出 Yes，否则输出 No。

输入样例：
6 3
20001 20002
20003 20004
20005 20006
20003 20001
20005 20004
20004 20006
4 00001 20004 00002 20003
5 98823 20002 20003 20006 10010
3 12345 67890 23333
输出样例：
No
Yes
Yes*/
#include "stdio.h"
//错两个用例，其中一个超时了
//int main() {
//    int N, M;
//    int pair[100001][2] ;
//    scanf("%d %d", &N, &M);
//    for (int i = 0; i < N; ++i) {
//        int a, b;
//        scanf("%d %d", &a, &b);
//        pair[i][0]=a;
//        pair[i][1]=b;
//    }
//
//    for (int j = 0; j < M; ++j) {
//        int K;
//        int flag = 1;
//        scanf("%d", &K);
//        int G[K];
//        for (int i = 0; i < K; ++i) {
//            scanf("%d", &G[i]);
//            for (int l = 0; l <N ; ++l) {
//                if(pair[l][0]==G[i]){
//                    for (int k = 0; k < i; ++k) {
//                        if (pair[l][1] == G[k]) {
//                            flag = 0;
//                            break;
//                        }
//                    }
//                }
//            }
//
//            if (!flag) {
//                break;
//            }
//        }
//
//        if (flag) {
//            printf("Yes");
//        } else {
//            printf("No");
//        }
//        if (j != M - 1) {
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

//扑街，键值对中的号码可能重复出现的
//int main() {
//    int N, M;
//    int pair[100001] = {0};
//    scanf("%d %d", &N, &M);
//    for (int i = 0; i < N; ++i) {
//        int a, b;
//        scanf("%d %d", &a, &b);
//        pair[a] = b;
//        pair[b] = a;
//    }
//
//    for (int j = 0; j < M; ++j) {
//        int K;
//        int flag = 1;
//        scanf("%d", &K);
//        int G[K];
//        for (int i = 0; i < K; ++i) {
//            scanf("%d", &G[i]);
//            for (int k = 0; k < i; ++k) {
//                printf("pair[G[%d]] = %d,G[%d] = %d\n", i, pair[G[i]], k, G[k]);
//                if (pair[G[i]] == G[k]) {
//                    flag = 0;
//                    break;
//                }
//            }
//            if (!flag) {
//                break;
//            }
//        }
//
//        if (flag) {
//            printf("Yes");
//        } else {
//            printf("No");
//        }
//        if (j != M - 1) {
//            printf("\n");
//        }
//    }
//
//
//    return 0;
//}
