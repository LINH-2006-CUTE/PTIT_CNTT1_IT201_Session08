#include <stdio.h>
 void sort(int a[], int n) {
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < n - i - 1; j++) {
             if (a[j] > a[j + 1]) {
                 int temp = a[j];
                 a[j] = a[j + 1];
                 a[j + 1] = temp;
             }
         }
     }
 }

int binarySearch(int a[], int n, int key) {
     int left = 0, right = n - 1;
     while (left <= right) {
         int mid = left + (right - left) / 2;
         if (key == a[mid]) {
             return mid;

         } else if (key < a[mid]) {
             right = mid - 1;
         }else {
             left = mid + 1;
         }
     }
     return -1;
 }
int main(void) {
    int n;
     printf("Nhap so luong phan tu:");
     scanf("%d", &n);
     if (n < 0 || n > 1000) {
         printf("Nhap lai");
         return 1;
     }

     int arr[n];
     printf("Nhap phan tu:");
     for (int i = 0; i < n; i++) {
         printf("arr[%d]", i);
         scanf("%d", &arr[i]);
     }

     sort(arr, n);
        int key = arr[0];
     printf("Nhap gia tri  can tim:");
     scanf("%d", &key);
     int result = binarySearch(arr, n, key);

     if (result != -1) {
         printf("gia tri %d tim thay o vi tri %d", key, result);
     } else {
         printf("Khong tim thay");

     }
     printf("\n");
     printf("Do phuc tap thoi gian la: 0(log n)");
    return 0;
}