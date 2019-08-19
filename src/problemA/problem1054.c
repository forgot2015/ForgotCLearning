//
// Created by forgot on 2019-08-19.
//

/*1054 The Dominant Color (20 point(s))*/
/*Behind the scenes in the computer's memory, color is always talked about as a series of 24 bits of information for
 * each pixel. In an image, the color with the largest proportional area is called the dominant color. A strictly
 * dominant color takes more than half of the total area. Now given an image of resolution M by N (for example, 800×600),
 * you are supposed to point out the strictly dominant color.

Input Specification:
Each input file contains one test case. For each case, the first line contains 2 positive numbers: M (≤800) and N (≤600)
 which are the resolutions of the image. Then N lines follow, each contains M digital colors in the range [0,2^24).
 It is guaranteed that the strictly dominant color exists for each input image. All the numbers in a line are
 separated by a space.

Output Specification:
For each test case, simply print the dominant color in a line.

Sample Input:
5 3
0 0 255 16777215 24
24 24 0 0 24
24 0 24 24 24
Sample Output:
24*/

/*#include<stdio.h>
#define N 100000000 //1亿
int arr[N];//   在堆上可以

int main(int argc,char**argv)
{
    int b[N];//在程序栈上，要报段错误的，如果N在百万级别以下，还是可以得，也就是在栈上分配空间是有限的
    static int a[N];//在堆上，可以
    return 0;
}*/

//#include <stdio.h>
////输出M*N个数中，出现次数过半的数字
//#define MAX 16777216
//int count[MAX];
//// 为何定义全局变量就可以，放在main函数里面会报错？
//int main() {
//    int M, N;
//    scanf("%d %d", &M, &N);
//    int allCount = M * N;
//
//    int isBreak = 0;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            int n;
//            scanf("%d", &n);
//            ++count[n];
//            if (count[n] > allCount / 2) {
//                printf("%d", n);
//                isBreak = 1;
//                break;
//            }
//        }
//        if (isBreak) {
//            break;
//        }
//    }
//
//    return 0;
//}

//#include<stdio.h>
//#define MAX 20000000
//int color[MAX]={0},set[MAX],num=0;
//int main(){
//    int M,N;
//    int i,j,c;
//    scanf("%d %d",&M,&N);
//    for(i=0;i<N;i++)
//        for(j=0;j<M;j++){
//            scanf("%d",&c);
//            if(!color[c]) set[num++]=c;
//            color[c]++;
//        }
//    /// find max
//    c=0;
//    for(i=1;i<num;i++)
//        if(color[ set[i] ]>color[ set[c] ]) c=i;
//    printf("%d",set[c]);
//}
