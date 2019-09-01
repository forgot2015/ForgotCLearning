//
// Created by forgot on 2019-08-04.
//
/*1084 外观数列 (20 point(s))*/
/*外观数列是指具有以下特点的整数序列：

d, d1, d111, d113, d11231, d112213111, ...
它从不等于 1 的数字 d 开始，序列的第 n+1 项是对第 n 项的描述。比如第 2 项表示第 1 项有 1 个 d，所以就是 d1；
 第 2 项是 1 个 d（对应 d1）和 1 个 1（对应 11），所以第 3 项就是 d111。又比如第 4 项是 d113，其描述就是 1 个 d，2 个 1，1 个 3，
 所以下一项就是 d11231。当然这个定义对 d = 1 也成立。本题要求你推算任意给定数字 d 的外观数列的第 N 项。

输入格式：
输入第一行给出 [0,9] 范围内的一个整数 d、以及一个正整数 N（≤ 40），用空格分隔。

输出格式：
在一行中给出数字 d 的外观数列的第 N 项。

输入样例：
1 8
输出样例：
1123123111*/
//与78题类似

////注意最后输入 1 40 时，字符串长度将指数性增长，故预留的长度要足够，否则会Runtime Error 或 Segment Fault
//#include <stdio.h>
//#include <string.h>
//
//char wrap[100000];
//char tmp[100000];
//
//int main() {
//    int d, N;
//    scanf("%d %d", &d, &N);
//    wrap[0] = d + '0';
//    int len;
//    int step;
//    int index;
//    for (int i = 1; i < N; i++) {
//        len = strlen(wrap);
//        step = 1;
//        index = 0;
//        for (int j = 0; j < len; j = j + step) {
//            for (int k = j; k < len; k++) {
////寻找下一个不同字符的位置
//                if (wrap[k] != wrap[j]) {
//                    step = k - j;
//                    tmp[index] = wrap[j];
//                    tmp[index + 1] = step + '0';
//                    index = index + 2;
//                    break;
//                } else if (k == len - 1) {
////如果遍历到最后一位，也没找到下一个不同的字符，那么就是剩下的都是相同字符了，特殊处理
//                    step = k - j + 1;
//                    tmp[index] = wrap[j];
//                    tmp[index + 1] = step + '0';
//                    index = index + 2;
//                    break;
//                } else {
//                    step = 1;
//                }
//            }
//        }
//        strcpy(wrap, tmp);
//    }
//    printf("%s", wrap);
//
//    return 0;
//}


//segment fault
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int d, N;
//    scanf("%d %d", &d, &N);
//    char wrap[200];
//    wrap[0] = d + '0';
//
//    for (int i = 1; i < N; i++) {
//        int len = strlen(wrap);
//        char tmp[200];
//        int count = 1;
//        int index = 0;
//        for (int j = 0; j < len; j = j + count) {
//            for (int k = j; k < len; k++) {
//                if (wrap[k] != wrap[j]) {
//                    count = k - j;
//                    tmp[index] = wrap[j];
//                    tmp[index + 1] = count + '0';
//                    index = index + 2;
//                    break;
//                } else if (k == len - 1) {
//                    count = k - j + 1;
//                    tmp[index] = wrap[j];
//                    tmp[index + 1] = count + '0';
//                    index = index + 2;
//                    break;
//                } else {
//                    count = 1;
//                }
//            }
//        }
//        strcpy(wrap, tmp);
//    }
//    printf("%s", wrap);
//
//    return 0;
//}
