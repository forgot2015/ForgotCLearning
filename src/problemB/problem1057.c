//
// Created by forgot on 2019-08-04.
//
/*1057 数零壹 (20 point(s))*/
/*给定一串长度不超过 10
​5
​​  的字符串，本题要求你将其中所有英文字母的序号（字母 a-z 对应序号 1-26，不分大小写）相加，得到整数 N，然后再分析一下 N 的二进制表示中有多少 0、多少 1。例如给定字符串 PAT (Basic)，其字母序号之和为：16+1+20+2+1+19+9+3=71，而 71 的二进制是 1000111，即有 3 个 0、4 个 1。

输入格式：
输入在一行中给出长度不超过 10
​5
​​ 、以回车结束的字符串。

输出格式：
在一行中先后输出 0 的个数和 1 的个数，其间以空格分隔。

输入样例：
PAT (Basic)
输出样例：
3 4*/

////一开始错了一个用例，注意若没有输入任何字母时，直接输出 0 0即可，而不要输出 1 0
//#include <stdio.h>
//#include <string.h>
//
//int count0 = 0;
//int count1 = 0;
//
//void decimalToBinary(int n) {
//    if (n / 2 > 0) {
//        decimalToBinary(n / 2);
//        n % 2 ? count1++ : count0++;
//    } else {
//        n ? count1++ : count0++;
//    }
//}
//
//int main() {
//    char str[100001];
//    gets(str);
//    int sum = 0;
//    int len = strlen(str);
//    for (int i = 0; i < len; i++) {
//        if (str[i] >= 'a' && str[i] <= 'z') {
//            sum += str[i] - 'a' + 1;
//        } else if (str[i] >= 'A' && str[i] <= 'Z') {
//            sum += str[i] - 'A' + 1;
//        }
//    }
//    if (sum) {
//        decimalToBinary(sum);
//        printf("%d %d", count0, count1);
//    } else {
//        printf("0 0");
//    }
//
//    return 0;
//}




//#include <stdio.h>
//#include <string.h>
//
//void decimalToBinary(int n);
//
//int count0 = 0;
//int count1 = 0;
//错了一个用例，为何?
//int main() {
//    char str[100001];
//    fgets(str, 100001, stdin);
//    int sum = 0;
//
//    for (int i = 0; i < strlen(str); i++) {
//        if (str[i] >= 'a' && str[i] <= 'z') {
//            sum += str[i] - 'a' + 1;
//        } else if (str[i] >= 'A' && str[i] <= 'Z') {
//            sum += str[i] - 'A' + 1;
//        }
//    }
//
//    decimalToBinary(sum);
//    printf("%d %d", count0, count1);
//
//    return 0;
//}

//void decimalToBinary(int n) {
//    if (n / 2 > 0) {
//        decimalToBinary(n / 2);
//        n % 2 ? count1++ : count0++;
//    } else {
//        n ? count1++ : count0++;
//    }
//}