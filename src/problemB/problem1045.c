//
// Created by forgot on 2019-08-04.
//
/*1045 快速排序 (25 point(s))*/
/*著名的快速排序算法里有一个经典的划分过程：我们通常采用某种方法取一个元素作为主元，通过交换，把比主元小的元素放到它的左边，比主元大的元素放到它的
 * 右边。 给定划分后的 N 个互不相同的正整数的排列，请问有多少个元素可能是划分前选取的主元？

例如给定 $N = 5$, 排列是1、3、2、4、5。则：

1 的左边没有元素，右边的元素都比它大，所以它可能是主元；
尽管 3 的左边元素都比它小，但其右边的 2 比它小，所以它不能是主元；
尽管 2 的右边元素都比它大，但其左边的 3 比它大，所以它不能是主元；
类似原因，4 和 5 都可能是主元。
因此，有 3 个元素可能是主元。

输入格式：
输入在第 1 行中给出一个正整数 N（≤10^​5）； 第 2 行是空格分隔的 N 个不同的正整数，每个数不超过 10^9。

输出格式：
在第 1 行中输出有可能是主元的元素个数；在第 2 行中按递增顺序输出这些元素，其间以 1 个空格分隔，行首尾不得有多余空格。

输入样例：
5
1 3 2 4 5
输出样例：
3
1 4 5*/

//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void *a, const void *b) {
//    return *(int *) a - *(int *) b;
//}
//
//// 一开始错了一个用例。当元素个数为0时，要输出一行空行，否则第三个测试用例会错
//int main() {
//    int N;
//    scanf("%d", &N);
//    int inputNum[N];
//    int hostCount = 0;
//    int hostNum[N];
//    int sortNum[N];
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &inputNum[i]);
//        sortNum[i] = inputNum[i];
//    }
//
//    qsort(sortNum, N, sizeof(sortNum[0]), cmp);
//
//    int max = 0;
//    for (int j = 0; j < N; j++) {
//        if (inputNum[j] > max) {
//            max = inputNum[j];
//        }
//
//        if (max == inputNum[j] && inputNum[j] == sortNum[j]) {
//            hostNum[hostCount] = sortNum[j];
//            hostCount++;
//        }
//    }
//
//    printf("%d\n", hostCount);
//    for (int j = 0; j < hostCount; j++) {
//        printf("%d", hostNum[j]);
//
//        if (j != hostCount - 1) {
//            printf(" ");
//        }
//    }
////    当元素个数为0时，要输出一行空行，否则第三个测试用例会错
//    if (hostCount == 0) {
//        printf("\n");
//    }
//
//    return 0;
//}




//不能用硬算，超时了
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void *a, const void *b) {
//    return *(long *) a - *(long *) b > 0 ? 1 : -1;
//}
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    int hostCount = 0;
//    long hostNum[100001] = {0};
//    long inputNum[N];
//
//    for (int i = 0; i < N; i++) {
//        scanf("%ld", &inputNum[i]);
//    }
//
//    for (int k = 0; k < N; k++) {
//        int isHost = 1;
//        for (int i = 0; i < k; i++) {
//            if (inputNum[i] >= inputNum[k]) {
//                isHost = 0;
//                break;
//            }
//        }
//
//        if (isHost) {
//            for (int j = k + 1; j < N; j++) {
//                if (inputNum[j] <= inputNum[k]) {
//                    isHost = 0;
//                    break;
//                }
//            }
//        }
//
//        if (isHost) {
//            hostNum[hostCount] = inputNum[k];
//            hostCount++;
//        }
//    }
//
//    qsort(hostNum, hostCount, sizeof(hostNum[0]), cmp);
//    printf("%d\n", hostCount);
//    for (int j = 0; j < hostCount; j++) {
//        printf("%ld", hostNum[j]);
//
//        if (j != hostCount - 1) {
//            printf(" ");
//        }
//    }
//
//    return 0;
//}