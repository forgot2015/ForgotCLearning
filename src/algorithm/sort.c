//
// Created by forgot on 2019-07-29.
//

#include <stdio.h>

//void quick_sort(int s[], int l, int r);
void quick_sort2(int s[], int l, int r);

void bubbleSort(int arr[], int n);

void selectSort(int arr[], int n);

void insertSort(int s[], int n);
void mergeSort(int *arr, int *tempArr, int low, int high);

void swap(int *a, int *b);

//int main() {
//    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
////    int arr[] = {2, 1, 1, 1, 1};
//// 求数组的长度
////但是，如果是通过传递数组名参数到子函数中，上边的方法获取数组长度是不可行的, 因为在子函数中传递的是地址
////    printf("sizeOf: %d\n", sizeof(arr)/ sizeof(arr[0]));
//
//// 注意，这个13是数组最后一位的下标，而不是数组长度啊
////    quick_sort2(arr, 0, 13);
////    selectSort(arr, 14);
////    insertSort(arr, 14);
////    bubbleSort(arr, 14);
//
////    printf("\n");
//    int b[14];
//    mergeSort(arr, b, 0, 13);
//    for (int i = 0; i < 14; i++) {
//        printf("%d,", arr[i]);
//    }
//
//    return 0;
//}

//冒泡排序
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


//快速排序，是冒泡排序的优化
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
//void quick_sort2(int s[], int left, int right) {
//    if (left < right) {
//        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
//        int i = left, j = right, x = s[i];
//        while (i < j) {
////            printf("i = %d, j = %d\n", i, j);
//            while (i < j && s[j] >= x) {
//                // 从右向左找第一个小于x的数
//                j--;
//            }
////            否则s[j] < x
//            if (i < j) {
//                int temp = s[i];
//                s[i] = s[j];
//                s[j] = temp;
////                swap(&s[i], &s[j]);
//                i++;
//            }
//
//            while (i < j && s[i] < x) {
//                // 从左向右找第一个大于等于x的数
//                i++;
//            }
////            否则s[i] >= x
//            if (i < j) {
//                int temp = s[j];
//                s[j] = s[i];
//                s[i] = temp;
////                swap(&s[i], &s[j]);
//                j--;
//            }
//        }
//
////        取数组s 的某段区间继续排序
//        quick_sort2(s, left, i - 1); // 递归调用
//        quick_sort2(s, i + 1, right);
//    }
//}


//简单选择排序
void selectSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}




//归并排序，效率仅次于快排
void merge(int *arr, int *tempArr, int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;
    while (i <= mid && j <= high) {
        if (arr[i] > arr[j]) {
            tempArr[k++] = arr[j++];
        } else {
            tempArr[k++] = arr[i++];
        }
    }
    while (i <= mid) {
        tempArr[k++] = arr[i++];
    }
    while (j <= high) {
        tempArr[k++] = arr[j++];
    }
    for (i = low; i <= high; i++) {
        arr[i] = tempArr[i];
        printf("%d ",arr[i]);
    }
    printf("\n");
}

//内部使用递归
void mergeSort(int *arr, int *tempArr, int low, int high) {
//    int mid;
    if (low < high) {
        int mid = (high + low) / 2;//避免溢出int, 直接加可能会溢出，可考虑low+(high-low)/2, 这样计算顺序不同，极端情况也不会导致int溢出
        mergeSort(arr, tempArr, low, mid);
        mergeSort(arr, tempArr, mid + 1, high);
        merge(arr, tempArr, low, mid, high);
    }
}
//
//int main(int argc, char *argv[]) {
//    int a[8] = {50, 10, 20, 30, 70, 40, 80, 60};
//    int i, b[8];
//    mergeSort(a, b, 0, 7);
//    for (i = 0; i < 8; i++)
//        printf("%d ", a[i]);
//    printf("\n");
//    return 0;
//}


//直接插入排序
void insertSort(int s[], int n) {
    for (int i = 1; i < n; i++) {
        if (s[i] < s[i - 1]) {//若第 i 个元素大于 i-1 元素则直接插入；反之，需要找到适当的插入位置后在插入。
            int j = i - 1;
            int x = s[i];
            while (j > -1 && x < s[j]) {  //采用顺序查找方式找到插入的位置，在查找的同时，将数组中的元素进行后移操作，给插入元素腾出空间
                s[j + 1] = s[j];
                j--;
            }
            s[j + 1] = x;      //插入到正确位置
        }
    }
}

//希尔插入排序
#include <stdio.h>

int shellSort(int *s, int n)    /* 自定义函数 shellSort()*/
{
    int i, j, d;
    d = n / 2;    /*确定固定增虽值*/
    while (d >= 1) {
        for (i = d + 1; i <= n; i++)    /*数组下标从d+1开始进行直接插入排序*/
        {
            s[0] = s[i];    /*设置监视哨*/
            j = i - d;    /*确定要进行比较的元素的最右边位置*/
            while ((j > 0) && (s[0] < s[j])) {
                s[j + d] = s[j];    /*数据右移*/
                j = j - d;    /*向左移d个位置V*/
            }
            s[j + d] = s[0];    /*在确定的位罝插入s[i]*/
        }
        d = d / 2;    /*增里变为原来的一半*/
    }
    return 0;
}
//
//int main() {
//    int a[11], i;    /*定义数组及变量为基本整型*/
//    printf("请输入 10 个数据：\n");
//    for (i = 1; i <= 10; i++)
//        scanf("%d", &a[i]);    /*从键盘中输入10个数据*/
//    shellSort(a, 10);    /* 调用 shellSort()函数*/
//    printf("排序后的顺序是：\n");
//    for (i = 1; i <= 10; i++)
//        printf("%5d", a[i]);    /*输出排序后的数组*/
//    printf("\n");
//    return 0;
//}


// 通过指针交换 a b中的值
void swap(int *a, int *b) {
//    printf("in swap1()  *a = %d, *b = %d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
//    printf("in swap1()  *a = %d, *b = %d\n", *a, *b);
}



