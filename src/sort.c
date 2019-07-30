//
// Created by forgot on 2019-07-29.
//

#include <stdio.h>

//void quick_sort(int s[], int l, int r);
void quick_sort2(int s[], int l, int r);

void swap(int *a, int *b);

//int main() {
//    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
////    int arr[] = {2, 1, 1, 1, 1};
//// 求数组的长度
////但是，如果是通过传递数组名参数到子函数中，上边的方法获取数组长度是不可行的, 因为在子函数中传递的是地址
////    printf("sizeOf: %d\n", sizeof(arr)/ sizeof(arr[0]));
//
//// 注意，这个13是数组最后一位的下标，而不是数组长度啊
//    quick_sort2(arr, 0, 13);
//    printf("\n");
//    for (int i = 0; i < 14; i++) {
//        printf("%d,", arr[i]);
//    }
//
//    return 0;
//}

//快速排序
//从右向左找第一个小于x的数,从左向右找第一个大于等于x的数
//s[] 要排序的数组， l 最左边索引， r 最右边索引
//void quick_sort(int s[], int left, int right) {
//    if (left < right) {
//        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
//        int i = left, j = right, x = s[i];
//        while (i < j) {
//            while (i < j && s[j] >= x) // 从右向左找第一个小于x的数
//                j--;
////            否则s[j] < x
//            if (i < j)
//                s[i++] = s[j];
//
//            while (i < j && s[i] < x) // 从左向右找第一个大于等于x的数
//                i++;
////            否则s[i] >= x
//            if (i < j)
//                s[j--] = s[i];
//        }
//
////        ????? 为啥要这一句？
//// 减少交换运算的写法，但实际上不易于人类理解，本身应该把 s[i++] = s[j]; 写成用指针来调换的
////        void swap(SqNote *a,SqNote *b){
////            int key=a->key;
////            a->key=b->key;
////            b->key=key;
////        }
//        s[i] = x;
//        for (int m = 0; m < 14; m++) {
//            printf("%d,", s[m]);
//        }
//        printf("\n");
////        取数组s 的 某段区间继续排序
//        quick_sort(s, left, i - 1); // 递归调用
//        quick_sort(s, i + 1, right);
//    }
//}

//更容易理解的写法
//快排其实每一轮的处理，就是把当轮的基准数归位，当所有轮完成后，也就所有基准数都归位了
void quick_sort2(int s[], int left, int right) {
    if (left < right) {
        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
        int i = left, j = right, x = s[i];
        while (i < j) {
//            printf("i = %d, j = %d\n", i, j);
            while (i < j && s[j] >= x) {
                // 从右向左找第一个小于x的数
                j--;
            }
//            否则s[j] < x
            if (i < j) {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
//                swap(&s[i], &s[j]);
                i++;
            }

            while (i < j && s[i] < x) {
                // 从左向右找第一个大于等于x的数
                i++;
            }
//            否则s[i] >= x
            if (i < j) {
                int temp = s[j];
                s[j] = s[i];
                s[i] = temp;
//                swap(&s[i], &s[j]);
                j--;
            }
        }

//        取数组s 的某段区间继续排序
        quick_sort2(s, left, i - 1); // 递归调用
        quick_sort2(s, i + 1, right);
    }
}

// 通过指针交换 a b中的值
void swap(int *a, int *b) {
//    printf("in swap1()  *a = %d, *b = %d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
//    printf("in swap1()  *a = %d, *b = %d\n", *a, *b);
}
