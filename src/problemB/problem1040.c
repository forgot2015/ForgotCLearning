//
// Created by forgot on 2019-08-04.
//
/*1040 有几个PAT (25 point(s))*/
/*字符串 APPAPT 中包含了两个单词 PAT，其中第一个 PAT 是第 2 位(P)，第 4 位(A)，第 6 位(T)；第二个 PAT 是第 3 位(P)，第 4 位(A)，第 6 位(T)。

现给定字符串，问一共可以形成多少个 PAT？

输入格式：
输入只有一行，包含一个字符串，长度不超过10
​5
​​ ，只包含 P、A、T 三种字母。

输出格式：
在一行中输出给定字符串中包含多少个 PAT。由于结果可能比较大，只输出对 1000000007 取余数的结果。

输入样例：
APPAPT
输出样例：
2*/

//#include <stdio.h>
//#include <string.h>
//
////一层循环搞定
//int main() {
//    char str[100001];
//    int p = 0, pa = 0, pat = 0;
//    scanf("%s", str);
//    for (int i = 0; i < strlen(str); i++) {
//        if (str[i] == 'P') {
//            p++;
//        } else if (str[i] == 'A') {
//            pa += p;
//            pa = pa % 1000000007;
//        } else if (str[i] == 'T') {
//            pat += pa;
//            pat = pat % 1000000007;
//        }
//    }
//
//    printf("%d", pat);
//    return 0;
//}


//还是差不多啊
//int main() {
//    int count = 0;
//    char str[100001];
//    scanf("%s", str);
//    for (int i = 0; i < strlen(str); i++) {
//        if (str[i] == 'P') {
//            for (int j = i + 1; j < strlen(str); j++) {
//                if (str[j] == 'A') {
//                    for (int k = j + 1; k < strlen(str); k++) {
//                        if (str[k] == 'T') {
//                            count++;
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    printf("%d", count % 1000000007);
//    return 0;
//}

//时间复杂度太大，耗时，废了
//int main() {
//    int count = 0;
//    char str[100001];
//    scanf("%s", str);
//    for (int i = 0; i < strlen(str); i++) {
//        for (int j = i + 1; j < strlen(str); j++) {
//            for (int k = j + 1; k < strlen(str); k++) {
//                if (str[i] == 'P' && str[j] == 'A' && str[k] == 'T') {
//                    count++;
//                }
//            }
//        }
//    }
//
//    printf("%d", count % 1000000007);
//    return 0;
//}
