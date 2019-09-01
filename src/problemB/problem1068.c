//
// Created by forgot on 2019-08-04.
//
/*1068 万绿丛中一点红 (20 point(s))*/
/*对于计算机而言，颜色不过是像素点对应的一个 24 位的数值。现给定一幅分辨率为 M×N 的画，要求你找出万绿丛中的一点红，即有独一无二颜色的那个像素点，并且该点的颜色与其周围 8 个相邻像素的颜色差充分大。

输入格式：
输入第一行给出三个正整数，分别是 M 和 N（≤ 1000），即图像的分辨率；以及 TOL，是所求像素点与相邻点的颜色差阈值，色差超过 TOL 的点才被考虑。随后 N 行，每行给出 M 个像素的颜色值，范围在 [0,2
​24
​​ ) 内。所有同行数字间用空格或 TAB 分开。

输出格式：
在一行中按照 (x, y): color 的格式输出所求像素点的位置以及颜色值，其中位置 x 和 y 分别是该像素在图像矩阵中的列、行编号（从 1 开始编号）。如果这样的点不唯一，则输出 Not Unique；如果这样的点不存在，则输出 Not Exist。

输入样例 1：
8 6 200
0 	 0 	  0 	   0	    0 	     0 	      0        0
65280 	 65280    65280    16711479 65280    65280    65280    65280
16711479 65280    65280    65280    16711680 65280    65280    65280
65280 	 65280    65280    65280    65280    65280    165280   165280
65280 	 65280 	  16777015 65280    65280    165280   65480    165280
16777215 16777215 16777215 16777215 16777215 16777215 16777215 16777215
输出样例 1：
(5, 3): 16711680
输入样例 2：
4 5 2
0 0 0 0
0 0 3 0
0 0 0 0
0 5 0 0
0 0 0 0
输出样例 2：
Not Unique
输入样例 3：
3 3 5
1 2 3
3 4 5
5 6 7
输出样例 3：
Not Exist*/


// 一开始错了一个用例，因为各角落的点 周围是没有8个点的，要验证边界
//#include <stdio.h>
//#include <math.h>
//
//long num[16777216];
//int M, N, TOL;
////定义比最大值再大一个，即外围加一圈，保证最大点还有周围8个点，周围点默认是0。
////实际上题目这里还有歧义，若该点在最外围（如左上角），那它的周围8个是变成3个点呢，还是其他5个点当作是0？ 看题目应该是前者，那还要另外处理，我现在这样做只是刚好走过了测试用例罢了
//long matrix[1001][1001];
//
//int main() {
//
//    scanf("%d %d %d", &M, &N, &TOL);
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            long n;
//            scanf("%ld", &n);
//            num[n]++;
//            matrix[i][j] = n;
//        }
//    }
//
//    int count = 0;
//    int a = 0, b = 0;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            if (num[matrix[i][j]] == 1) {
//                if (fabs(matrix[i][j] - matrix[i - 1][j - 1]) > TOL && fabs(matrix[i][j] - matrix[i - 1][j]) > TOL &&
//                    fabs(matrix[i][j] - matrix[i - 1][j + 1]) > TOL && fabs(matrix[i][j] - matrix[i][j - 1]) > TOL &&
//                    fabs(matrix[i][j] - matrix[i][j + 1]) > TOL && fabs(matrix[i][j] - matrix[i + 1][j - 1]) > TOL &&
//                    fabs(matrix[i][j] - matrix[i + 1][j]) > TOL && fabs(matrix[i][j] - matrix[i + 1][j + 1]) > TOL) {
//                    count++;
//                    a = i;
//                    b = j;
//                }
//            }
//        }
//    }
//
//    if (count == 0) {
//        printf("Not Exist");
//    } else if (count == 1) {
//        printf("(%d, %d): %ld", b + 1, a + 1, matrix[a][b]);
//    } else {
//        printf("Not Unique");
//    }
//    return 0;
//}


//法2 ， 加条件过滤最外圈8个点中的不合法点
//#include <stdio.h>
//#include <math.h>
//
//long num[16777216];
//int M, N, TOL;
//
//long matrix[1000][1000];
//
//int main() {
//
//    scanf("%d %d %d", &M, &N, &TOL);
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            long n;
//            scanf("%ld", &n);
//            num[n]++;
//            matrix[i][j] = n;
//        }
//    }
//
//    int count = 0;
//    int a = 0, b = 0;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            if (num[matrix[i][j]] == 1) {
//                if ((i > 0 && j > 0 ? fabs(matrix[i][j] - matrix[i - 1][j - 1]) > TOL : 1)
//                    && (i > 0 ? fabs(matrix[i][j] - matrix[i - 1][j]) > TOL : 1)
//                    && (i > 0 && j < M - 1 ? fabs(matrix[i][j] - matrix[i - 1][j + 1]) > TOL : 1)
//                    && (j > 0 ? fabs(matrix[i][j] - matrix[i][j - 1]) > TOL : 1)
//                    && (j < M - 1 ? fabs(matrix[i][j] - matrix[i][j + 1]) > TOL : 1)
//                    && (i < N - 1 && j > 0 ? fabs(matrix[i][j] - matrix[i + 1][j - 1]) > TOL : 1)
//                    && (i < N - 1 ? fabs(matrix[i][j] - matrix[i + 1][j]) > TOL : 1)
//                    && (i < N - 1 && j < M - 1 ? fabs(matrix[i][j] - matrix[i + 1][j + 1]) > TOL : 1)) {
//                    count++;
//                    a = i;
//                    b = j;
//                }
//            }
//        }
//    }
//
//    if (count == 0) {
//        printf("Not Exist");
//    } else if (count == 1) {
//        printf("(%d, %d): %ld", b + 1, a + 1, matrix[a][b]);
//    } else {
//        printf("Not Unique");
//    }
//    return 0;
//}


