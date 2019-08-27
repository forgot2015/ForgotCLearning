//
// Created by forgot on 2019-08-04.
//
/*1042 字符统计 (20 point(s))*/
/*请编写程序，找出一段给定文字中出现最频繁的那个英文字母。

输入格式：
输入在一行中给出一个长度不超过 1000 的字符串。字符串由 ASCII 码表中任意可见字符及空格组成，至少包含 1 个英文字母，以回车结束（回车不算在内）。

输出格式：
在一行中输出出现频率最高的那个英文字母及其出现次数，其间以空格分隔。如果有并列，则输出按字母序最小的那个字母。统计时不区分大小写，输出小写字母。

输入样例：
This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........
输出样例：
e 7*/

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char ascCount[129] = {0};
//    char str[1001];
//    int maxIndex = 0;
//
//// 只能获取空格前的一段字符串
////    scanf("%s", str);
////可获取一行字符串，包括空格
//    gets(str);
//    for (int i = 0; i < strlen(str); i++) {
////        循环可省略一层
//        for (int j = 'A'; j <= 'Z'; j++) {
//            if (str[i] == j) {
//                ascCount[j + 32]++;
//                break;
//            }
//        }
//
//        for (int j = 'a'; j <= 'z'; j++) {
//            if (str[i] == j) {
//                ascCount[j]++;
//                break;
//            }
//        }
//    }
//
//    for (int k = 'a'; k <= 'z'; k++) {
//        if (ascCount[k] > ascCount[maxIndex]) {
//            maxIndex = k;
//        }
//    }
//
//    printf("%c %d", maxIndex, ascCount[maxIndex]);
//    return 0;
//}


//int ascii[26]; //26个字母
//
//int main(){
//    char c[1001];
//    gets(c);
//    int max = 0;
//    char maxChar;
//    for(int i = 0; i < strlen(c); ++i){
//        if(c[i] >= 'A' && c[i] <= 'Z'){
//            ++ascii[c[i] - 65];
//        }
//        else if(c[i] >= 'a' && c[i] <= 'z'){
//            ++ascii[c[i] - 97];
//        }
//    }
//    for(int i = 0; i < 26; ++i){
//        if(ascii[i] > max){
//            max = ascii[i];
//            maxChar = i + 97;
//        }
//    }
//    printf("%c %d\n", maxChar, max);
//    return 0;
//}

