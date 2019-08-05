//
// Created by forgot on 2019-08-04.
//
/*1087 有多少不同的值 (20 point(s))*/
/*当自然数 n 依次取 1、2、3、……、N 时，算式 ⌊n/2⌋+⌊n/3⌋+⌊n/5⌋ 有多少个不同的值？（注：⌊x⌋ 为取整函数，表示不超过 x 的最大自然数，即 x 的整数部分。）

输入格式：
输入给出一个正整数 N（2≤N≤10
​4
​​ ）。

输出格式：
在一行中输出题面中算式取到的不同值的个数。

输入样例：
2017
输出样例：
1480*/

#include <stdio.h>

//int main() {
//    int N;
//    scanf("%d", &N);
//    int a[10000];
//    int count = 1;
//
////    注意这里可以=N
//    for (int i = 1; i <= N; i++) {
//        a[i] = i / 2 + i / 3 + i / 5;
//        if (a[i] != a[i - 1]) {
//            count++;
//        }
//    }
//
//    printf("%d", count);
//    return 0;
//}


// 我做的复杂点的方法，多了个for循环
//int main() {
//    int N;
//    scanf("%d", &N);
//    int different[11000] = {0};
//    int count = 0;
//
//    for (int i = 0; i <= N; i++) {
//        int sum = i / 2 + i / 3 + i / 5;
//        different[sum]++;
//    }
//
//    for (int j = 0; j < 11000; j++) {
//        if (different[j]) {
//            count++;
//        }
//    }
//
//    printf("%d", count);
//
//    return 0;
//}
