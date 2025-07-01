#include <stdio.h>
 void merge(int arr[], int left, int mid, int right) {
     int i, j, k;
     int temp[];

     i = left;
     j = mid + 1;
     k = left;
     while (i <= mid && j <= right) {
         if (arr[i] <= arr[j]) {
             temp[k++] = arr[i++];

         }else {
             temp[k++] = arr[j++];
         }
     }
     while (i <= mid) {
         temp[k++] = arr[i++];
     }
     while (j <= right) {
         temp[k++] = arr[j++];
     }
     for (i = left; i <= right; i++) {
         arr[i] = temp[i];
     }
 }

void mergeSort(int arr[], int left, int right) {
     if (left >= right) {
         return;
     }
     int mid = left + (right - left) / 2;
     mergeSort(arr, left, mid);
     mergeSort(arr, mid + 1, right);
     merge(arr, left, mid, right);
 }

int main(void) {
    int n;
    printf("Nhap so luong phan tu mag:");
    scanf("%d", &n);
    if ( n < 0 || n > 1000) {
        printf("Nhap khong hop le");
        return -1;

    }

    int arr[n];
    printf("Nhap phan tu trong mang:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        scanf("%d", &arr[i]);

    }

    mergeSort(arr, 0, n - 1);
     printf("Mang sau khi sap xep:");
     for (int i = 0; i < n; i++) {
         printf("%d ", arr[i]);
     }
     printf("\n");
     printf("do phuc tap thoi gian la 0 (n log n");
    return 0;
}