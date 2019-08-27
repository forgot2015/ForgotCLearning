//
// Created by forgot on 2019-08-04.
//
/*1035 插入与归并 (25 point(s))*/
/*根据维基百科的定义：

插入排序是迭代算法，逐一获得输入数据，逐步产生有序的输出序列。每步迭代中，算法从输入序列中取出一元素，将之插入有序序列中正确的位置。如此迭代直到全部
 元素有序。

归并排序进行如下迭代操作：首先将原始序列看成 N 个只包含 1 个元素的有序子序列，然后每次迭代归并两个相邻的有序子序列，直到最后只剩下 1 个有序的序列。

现给定原始序列和由某排序算法产生的中间序列，请你判断该算法究竟是哪种排序算法？

输入格式：
输入在第一行给出正整数 N (≤100)；随后一行给出原始序列的 N 个整数；最后一行给出由某排序算法产生的中间序列。这里假设排序的目标序列是升序。数字间以
 空格分隔。

输出格式：
首先在第 1 行中输出Insertion Sort表示插入排序、或Merge Sort表示归并排序；然后在第 2 行中输出用该排序算法再迭代一轮的结果序列。题目保证每组测
 试的结果是唯一的。数字间以空格分隔，且行首尾不得有多余空格。

输入样例 1：
10
3 1 2 8 7 5 9 4 6 0
1 2 3 7 8 5 9 4 6 0
输出样例 1：
Insertion Sort
1 2 3 5 7 8 9 4 6 0
输入样例 2：
10
3 1 2 8 7 5 9 4 0 6
1 3 2 8 5 7 4 9 0 6
输出样例 2：
Merge Sort
1 2 3 8 4 5 7 9 0 6*/

/*
 *
10
3 1 2 8 7 5 9 4 0 6
1 2 3 8 4 5 7 9 0 6

11
3 1 2 8 7 5 9 4 6 0 5
1 3 2 8 5 7 4 9 0 6 5

12
3 1 2 8 7 5 9 4 6 0 5 12
1 3 2 8 5 7 4 9 0 6 5 12

8
3 1 2 8 7 5 9 4
1 2 3 8 4 5 7 9

6
2 1 3 8 7 5
1 2 3 8 5 7
*/

//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void *a, const void *b) {
//    return *(int *) a - *(int *) b;
//}
//
//// 错一个用例，第六个，看网友说是归并排序的步长计算有问题，感觉有问题，如我最后一个用例，可以说步长是2，也可以说步长是4，结果是一样的，但下一轮输出结果不同
//int main() {
//    int N;
//    scanf("%d", &N);
//    int num[N];
//    int curNum[N];
//    int cur = 0;
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &num[i]);
//    }
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &curNum[i]);
//    }
//
//    for (int i = 0; i < N; i++) {
//        if (curNum[i] < curNum[i - 1]) {
//            cur = i;
//            break;
//        }
//    }
//
////    1代表插入排序，0是归并，插入排序是后面两数组的值完全一样的,这种判断方法其实不够准确？
//    int isInsert = 1;
//    for (int i = cur; i < N; i++) {
//        if (curNum[i] != num[i]) {
//            isInsert = 0;
//            break;
//        }
//    }
//
//    if (isInsert) {
//        printf("Insertion Sort\n");
//        for (int j = cur; j > 0; j--) {
//            if (curNum[j] < curNum[j - 1]) {
//                int tmp = curNum[j - 1];
//                curNum[j - 1] = curNum[j];
//                curNum[j] = tmp;
//            }
//        }
//    } else {
//        printf("Merge Sort\n");
////        for (int k = 64; k >= 2; k = k / 2) {
////            if (cur >= k) {
////                cur = k;
////                break;
////            }
////        }
////
//////        先判断cur是否是真的步长，有可能是cur/2或更小, 判断方法是看之后的每个cur是否都是递增的，否则就除以2
////        int doCheck = 1;
////        while (doCheck) {
////            int isRightStep = 1;
////            for (int j = 0; j < N - 1; j = j + cur) {
////                if (curNum[j] > curNum[j + 1]) {
////                    isRightStep = 0;
////                    cur = cur / 2;
////                    break;
////                }
////            }
////            if (isRightStep) {
////                doCheck = 0;
////            }
////        }
//
//        int scope = cur * 2;
//        int i;
//        for (i = 0; i <= N - scope; i = i + scope) {
////            表示从curNum的第i位到i+scope位进行排序
//            qsort(&curNum[i], scope, sizeof(curNum[0]), cmp);
//        }
//
//        // 最后几个不满scope数量的也要排序
//        int lessCount = N - i;
//        if (lessCount > 0) {
//            qsort(&curNum[i], lessCount, sizeof(curNum[0]), cmp);
//        }
//    }
//
//    for (int k = 0; k < N - 1; k++) {
//        printf("%d ", curNum[k]);
//    }
//    printf("%d", curNum[N - 1]);
//    return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void *a, const void *b) {
//    return *(int *) a - *(int *) b;
//}
//
//// 错一个用例，第六个
//int main() {
//    int N;
//    scanf("%d", &N);
//    int num[N];
//    int curNum[N];
//    int cur = 0;
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &num[i]);
//    }
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &curNum[i]);
//    }
//
//    for (int i = 0; i < N; i++) {
//        if (curNum[i] < curNum[i - 1]) {
//            cur = i;
//            break;
//        }
//    }
//
////    1代表插入排序，0是归并，插入排序是后面两数组的值完全一样的,这种判断方法其实不够准确？
//    int isInsert = 1;
//    for (int i = cur; i < N; i++) {
//        if (curNum[i] != num[i]) {
//            isInsert = 0;
//            break;
//        }
//    }
//
//    if (isInsert) {
//        printf("Insertion Sort\n");
//        for (int j = cur; j > 0; j--) {
//            if (curNum[j] < curNum[j - 1]) {
//                int tmp = curNum[j - 1];
//                curNum[j - 1] = curNum[j];
//                curNum[j] = tmp;
//            }
//        }
//    } else {
//        printf("Merge Sort\n");
//        int scope = cur * 2;
//        int i;
//        for (i = 0; i <= N - scope; i = i + scope) {
////            表示从curNum的第i位到i+scope位进行排序
//            qsort(&curNum[i], scope, sizeof(curNum[0]), cmp);
//        }
//
//        // 最后几个不满scope数量的也要排序
//        int lessCount = N - i;
//        if (lessCount > 0) {
//            qsort(&curNum[i], lessCount, sizeof(curNum[0]), cmp);
//        }
//    }
//
//    for (int k = 0; k < N - 1; k++) {
//        printf("%d ", curNum[k]);
//    }
//    printf("%d", curNum[N - 1]);
//    return 0;
//}




//错了一个用例
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void *a, const void *b) {
//    return *(int *) a - *(int *) b;
//}
//
//// 若是C++可以直接用<algorithm>库中的sort()方法对指定位置范围进行排序，简单多了
//////还要判断用的是插入还是归并，输出不同结果啊
//int main() {
//    int N;
//    scanf("%d", &N);
//    int num[N];
//    int curNum[N];
//    int cur = 0;
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &curNum[i]);
//    }
//
//    for (int i = 0; i < N; i++) {
//        if (curNum[i] < curNum[i - 1]) {
//            cur = i;
//            break;
//        }
//    }
//
////    1代表插入排序，0是归并，插入排序是后面两数组的值完全一样的,这种判断方法其实不够准确？
//    int isInsert = 1;
//    for (int i = cur; i < N; i++) {
//        if (curNum[i] != num[i]) {
//            isInsert = 0;
//            break;
//        }
//    }
//
//    if (isInsert) {
//        printf("Insertion Sort\n");
//        for (int j = cur; j > 0; j--) {
//            if (curNum[j] < curNum[j - 1]) {
//                int tmp = curNum[j - 1];
//                curNum[j - 1] = curNum[j];
//                curNum[j] = tmp;
//            }
//        }
//        for (int k = 0; k < N - 1; k++) {
//            printf("%d ", curNum[k]);
//        }
//        printf("%d", curNum[N - 1]);
//    } else {
//        printf("Merge Sort\n");
//        int scope = cur * 2;
//        if (scope >= N) {
//            qsort(curNum, N, sizeof(curNum[0]), cmp);
//            for (int k = 0; k < N - 1; k++) {
//                printf("%d ", curNum[k]);
//            }
//            printf("%d", curNum[N - 1]);
//        } else {
//            int i;
//            for (i = 0; i <= N - scope; i = i + scope) {
//                int tmpNum[scope];
//                for (int j = 0; j < scope; j++) {
//                    tmpNum[j] = curNum[i + j];
//                }
//                qsort(tmpNum, scope, sizeof(tmpNum[0]), cmp);
//                for (int k = 0; k < scope; k++) {
//                    printf("%d ", tmpNum[k]);
//                }
//            }
//
////            最后几个不满scope数量的也要排序
//            int lessCount = N - i;
//            int tmpNum[lessCount];
//            for (int j = 0; j < lessCount; j++) {
//                tmpNum[j] = curNum[i + j];
//            }
//            qsort(tmpNum, lessCount, sizeof(tmpNum[0]), cmp);
//
//            for (int l = 0; l < lessCount; l++) {
//                printf("%d", tmpNum[l]);
//                if (l != lessCount - 1) {
//                    printf(" ");
//                }
//            }
//
//        }
//    }
//    return 0;
//}