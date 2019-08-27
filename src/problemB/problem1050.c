//
// Created by forgot on 2019-08-04.
//
/*1050 螺旋矩阵 (25 point(s))*/
/*本题要求将给定的 N 个正整数按非递增的顺序，填入“螺旋矩阵”。所谓“螺旋矩阵”，是指从左上角第 1 个格子开始，按顺时针螺旋方向填充。要求矩阵的规模
 * 为 m 行 n 列，满足条件：m×n 等于 N；m≥n；且 m−n 取所有可能值中的最小值。

输入格式：
输入在第 1 行中给出一个正整数 N，第 2 行给出 N 个待填充的正整数。所有数字不超过 10^4，相邻数字以空格分隔。

输出格式：
输出螺旋矩阵。每行 n 个数字，共 m 行。相邻数字以 1 个空格分隔，行末不得有多余空格。

输入样例：
12
37 76 20 98 76 42 53 95 60 81 58 93
输出样例：
98 95 93
42 37 81
53 20 76
58 60 76*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
////从大到小排序
//int cmp(const void *a, const void *b) {
//    return *(int *) b - *(int *) a;
//}
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    int num[N];
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &num[i]);
//    }
//    qsort(num, N, sizeof(num[0]), cmp);
//
////    求出m和n，满足m×n 等于 N；m≥n；且 m−n 取所有可能值中的最小值，m从根号N开始往上算
//    int row = 0, column = 0;
//    for (row = sqrt(N); row <= N; row++) {
//        column = N / row;
//        if (row * column == N && row >= column) {
//            break;
//        }
//    }
//
//    //螺旋矩阵数组
//    int arr[row][column];
//    //每种方向最多次数 ， 如行分左右，所以row/2 , 当行为奇数时，有可能多1次
//    int times = row / 2 + row % 2;
////    正在填充第几个数
//    int t = 0;
//
//    //四种方向，每次循环填充四种方向各一轮
//    for (int i = 0; i < times; i++) {
//        //往右填充
//        for (int j = i; t < N && j < column - i; j++) {
//            arr[i][j] = num[t++];
//        }
//        //往下填充
//        for (int j = i + 1; t < N && j < row - i - 1; j++) {
//            arr[j][column - i - 1] = num[t++];
//        }
//        //往左填充
//        for (int j = column - i - 1; t < N && j >= i; j--) {
//            arr[row - i - 1][j] = num[t++];
//        }
//        //往上填充
//        for (int j = row - i - 2; t < N && j >= i + 1; j--) {
//            arr[j][i] = num[t++];
//        }
//    }
//
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            printf("%d", arr[i][j]);
//
//            if (j == column - 1 && i != row - 1) {
//                printf("\n");
//            } else if (j != column - 1) {
//                printf(" ");
//            }
//        }
//    }
//
//    return 0;
//}