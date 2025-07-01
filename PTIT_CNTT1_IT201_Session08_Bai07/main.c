#include <stdio.h>
 void quick( int arr[],int left, int right) {
     int pivot = arr[(left+right)/2];
     int i = left;
     int j = right;
     while (i <= j) {
         while (arr[i] < pivot) i++;
         while (arr[j] > pivot) j--;
         if (i <= j) {
             int temp = arr[i];
             arr[i] = arr[j];
             arr[j] = temp;
             i++;
             j--;
         }
     }
     if (left < j) quick(arr, left, j);
     if (i < right) quick(arr, i, right);


 }
int main(void) {
     int n;
     printf("Nhap so phan tu mag:");
     scanf("%d", &n);
     if ( n< 0 || n > 1000) {
         printf("Nhap khong hop le");
         return -1;
     }

     int arr[n];
     printf("Nhap phan tu mang:");
     for (int i = 0; i < n; i++) {
         printf("%d ", i);
         scanf("%d", &arr[i]);
     }

     quick(arr, 0, n-1);
     printf("mang sau khi sx:");
     for (int i = 0; i < n; i++) {
         printf("%d ", arr[i]);
     }
    printf("\n");
     printf("do phuc tap thoi gian la 0(log n)");
    return 0;
}