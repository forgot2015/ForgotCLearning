//
// Created by forgot on 2019-08-04.
//
/*1025 反转链表 (25 point(s))*/
/*给定一个常数 K 以及一个单链表 L，请编写程序将 L 中每 K 个结点反转。例如：给定 L 为 1→2→3→4→5→6，K 为 3，则输出应该为 3→2→1→6→5→4；
 * 如果 K 为 4，则输出应该为 4→3→2→1→5→6，即最后不到 K 个元素不反转。

输入格式：
每个输入包含 1 个测试用例。每个测试用例第 1 行给出第 1 个结点的地址、结点总个数正整数 N (≤10^5)、以及正整数 K (≤N)，
 即要求反转的子链结点的个数。结点的地址是 5 位非负整数，NULL 地址用 −1 表示。

接下来有 N 行，每行格式为：

Address Data Next
其中 Address 是结点地址，Data 是该结点保存的整数数据，Next 是下一结点的地址。

输出格式：
对每个测试用例，顺序输出反转后的链表，其上每个结点占一行，格式与输入相同。

输入样例：
00100 6 4
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
输出样例：
00000 4 33218
33218 3 12309
12309 2 00100
00100 1 99999
99999 5 68237
68237 6 -1*/


//#include<stdio.h>
//
//typedef struct node {
//    int address;
//    int data;
//    int next;
//} Node;
////改自大佬解法
//int main() {
//    int beginAddr, N, K;
//    scanf("%d %d %d", &beginAddr, &N, &K);
//    int beginIndex = 0;
//
//    Node node[N];
//    for (int i = 0; i < N; i++) {
//        scanf("%d %d %d", &node[i].address, &node[i].data, &node[i].next);
//        if (node[i].address == beginAddr) {
//            beginIndex = i;
//        }
//    }
//
//    //交换第一个节点
//    if (beginIndex != 0) {
//        Node tmp = node[0];
//        node[0] = node[beginIndex];
//        node[beginIndex] = tmp;
//    }
//
////    连接剩余节点
//    for (int i = 1; i < N; i++) {
//        for (int j = i; j < N; j++) {
//            if (node[j].address == node[i - 1].next) {
//                Node c;
//                c = node[i];
//                node[i] = node[j];
//                node[j] = c;
//                break;
//            }
//        }
////        为何不加此句 会错一个用例？ 因为如果next为-1 ，则与后面的节点断开连接的，所以实际有效的节点数就变成了N=i+1
//        if (node[i].next == -1) {
//            N = i + 1;
////            printf("N=%d\n", N);
//        }
//    }
//
//    int m = 0, n = 0;
//    //反转链表 , 只交换节点位置，不去改变其中的next值，否则就把简单问题复杂化了，而且时间复杂度也会增加
//    for (int i = 0; i < N / K; i++) {
//        for (int j = 0; j < K / 2; j++) {
//            Node c;
//            m = K * i + j;
//            n = K * (i + 1) - j - 1;
//            c = node[m];
//            node[m] = node[n];
//            node[n] = c;
//        }
//    }
//
//    for (int i = 0; i < N - 1; i++) {
//        printf("%05d %d %05d\n", node[i].address, node[i].data, node[i + 1].address);
//    }
//    printf("%05d %d -1\n", node[N - 1].address, node[N - 1].data);
//    return 0;
//}


//大佬解法
//#include<stdio.h>
//
//typedef struct node {
//    int address;
//    int data;
//    int next;
//} Node;
//
//int main() {
//    int f_address, amount, back, count = 0;
//    scanf("%d %d %d", &f_address, &amount, &back);
//    Node a[amount];
//    for (int i = 0; i < amount; i++) {
//        scanf("%d %d %d", &a[i].address, &a[i].data, &a[i].next);
//    }
//    //连接链表
//    for (int i = 0; i < amount; i++) {
//        for (int j = i; j < amount; j++) {
//            if (a[j].address == (i ? a[i - 1].next : f_address)) {
//                Node c;
//                c = a[i];
//                a[i] = a[j];
//                a[j] = c;
//                break;
//            }
//        }
//        if (a[i].next == -1) {
//            amount = i + 1;
//        }
//    }
//    int m = 0, n = 0;
//    //反转链表
//    for (int i = 0; i < amount / back; i++) {
//        for (int j = 0; j < back / 2; j++) {
//            Node c;
//            m = back * i + j;
//            n = back * (i + 1) - j - 1;
//            c = a[m];
//            a[m] = a[n];
//            a[n] = c;
//        }
//    }
//
//    for (int i = 0; i < amount - 1; i++) {
//        printf("%05d %d %05d\n", a[i].address, a[i].data, a[i + 1].address);
//    }
//    printf("%05d %d -1\n", a[amount - 1].address, a[amount - 1].data);
//    return 0;
//}