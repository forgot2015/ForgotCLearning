//
// Created by forgot on 2019-08-04.
//
/*1075 链表元素分类 (25 point(s))*/
/*给定一个单链表，请编写程序将链表元素进行分类排列，使得所有负值元素都排在非负值元素的前面，而 [0, K] 区间内的元素都排在大于 K 的元素前面。但每一
 * 类内部元素的顺序是不能改变的。例如：给定链表为 18→7→-4→0→5→-6→10→11→-2，K 为 10，则输出应该为 -4→-6→-2→7→0→5→10→18→11。

输入格式：
每个输入包含一个测试用例。每个测试用例第 1 行给出：第 1 个结点的地址；结点总个数，即正整数N (≤10^5)；以及正整数K (≤10^​3)。结点的地址是 5 位
 非负整数，NULL 地址用 −1 表示。

接下来有 N 行，每行格式为：

Address Data Next
其中 Address 是结点地址；Data 是该结点保存的数据，为 [−10^5,10^5] 区间内的整数；Next 是下一结点的地址。题目保证给出的链表不为空。

输出格式：
对每个测试用例，按链表从头到尾的顺序输出重排后的结果链表，其上每个结点占一行，格式与输入相同。

输入样例：
00100 9 10
23333 10 27777
00000 0 99999
00100 18 12309
68237 -6 23333
33218 -4 00000
48652 -2 -1
99999 5 68237
27777 11 48652
12309 7 33218
输出样例：
33218 -4 68237
68237 -6 48652
48652 -2 12309
12309 7 00000
00000 0 99999
99999 5 23333
23333 10 00100
00100 18 27777
27777 11 -1*/

/*
 * 输入后先排顺序
00100 18 12309
12309 7 33218
33218 -4 00000
00000 0 99999
99999 5 68237
68237 -6 23333
23333 10 27777
27777 11 48652
48652 -2 00001
 * */


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//    int Address;
//    int Data;
//    int Next;
//} Node;
//
////结点地址排序，方便二分查找
//int cmp(const void *a, const void *b) {
//    Node A = *(Node *) a;
//    Node B = *(Node *) b;
//    return A.Address - B.Address;
//}
//
//
//int main() {
//    int start, N, K;
//    scanf("%d %d %d", &start, &N, &K);
////    记录输入的结点
//    Node node[N];
////    记录排序后的结点
//    Node sortedNode[N];
//    for (int i = 0; i < N; i++) {
//        scanf("%d %d %d", &node[i].Address, &node[i].Data, &node[i].Next);
//    }
//
//    //对输入的结点进行地址排序，方便二分查找
//    qsort(node, N, sizeof(node[0]), cmp);
//
//    //查找第一个结点
//    for (int i = 0; i < N; i++) {
//        if (node[i].Address == start) {
//            sortedNode[0] = node[i];
//            break;
//        }
//    }
//
////    排序剩余结点
//    int index = 0;
//    while (sortedNode[index].Next != -1) {
//        Node nextNode = *(Node *) bsearch(&sortedNode[index].Next, node, N, sizeof(node[0]), cmp);
//        sortedNode[index + 1] = nextNode;
//        index++;
//    }
//
//    N = index + 1;
//    Node rightNode[N];
//    int rightIndex = 0;
//    for (int i = 0; i < N; i++) {
//        if (sortedNode[i].Data < 0) {
//            rightNode[rightIndex] = sortedNode[i];
//            rightIndex++;
//        }
//    }
//    for (int i = 0; i < N; i++) {
//        if (sortedNode[i].Data >= 0 && sortedNode[i].Data <= K) {
//            rightNode[rightIndex] = sortedNode[i];
//            rightIndex++;
//        }
//    }
//    for (int i = 0; i < N; i++) {
//        if (sortedNode[i].Data > K) {
//            rightNode[rightIndex] = sortedNode[i];
//            rightIndex++;
//        }
//    }
//
//    for (int i = 0; i < N - 1; i++) {
//        printf("%05d %d %05d\n", rightNode[i].Address, rightNode[i].Data, rightNode[i + 1].Address);
//    }
//    printf("%05d %d -1", rightNode[N - 1].Address, rightNode[N - 1].Data);
//    return 0;
//}



//类似题目25，链表
//最后一个用例超时了， 不能乱用穷举，两层for循环超时了
//#include <stdio.h>
//
//typedef struct {
//    int Address;
//    int Data;
//    int Next;
//} Node;
//
//int main() {
//    int start, N, K;
//    scanf("%d %d %d", &start, &N, &K);
//    Node node[N];
//    for (int i = 0; i < N; i++) {
//        scanf("%d %d %d", &node[i].Address, &node[i].Data, &node[i].Next);
//    }
//
////    查找第一个结点
//    for (int i = 0; i < N; i++) {
//        if (node[i].Address == start) {
//            Node tmp = node[0];
//            node[0] = node[i];
//            node[i] = tmp;
//            break;
//        }
//    }
////其余结点排序
//    for (int i = 0; i < N - 1; i++) {
//        for (int j = i + 1; j < N; j++) {
//            if (node[j].Address == node[i].Next) {
//                Node tmp = node[i + 1];
//                node[i + 1] = node[j];
//                node[j] = tmp;
//                break;
//            }
//        }
//        if (node[i].Next == -1) {
//            N = i + 1;
//            break;
//        }
//    }
//    Node rightNode[N];
//    int rightIndex = 0;
//    for (int i = 0; i < N; i++) {
//        if (node[i].Data < 0) {
//            rightNode[rightIndex] = node[i];
//            rightIndex++;
//        }
//    }
//    for (int i = 0; i < N; i++) {
//        if (node[i].Data >= 0 && node[i].Data <= K) {
//            rightNode[rightIndex] = node[i];
//            rightIndex++;
//        }
//    }
//    for (int i = 0; i < N; i++) {
//        if (node[i].Data > K) {
//            rightNode[rightIndex] = node[i];
//            rightIndex++;
//        }
//    }
//
//    for (int i = 0; i < N - 1; i++) {
//        printf("%05d %d %05d\n", rightNode[i].Address, rightNode[i].Data, rightNode[i + 1].Address);
//    }
//    printf("%05d %d -1", rightNode[N - 1].Address, rightNode[N - 1].Data);
//    return 0;
//}