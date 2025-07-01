#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu mang:");
    scanf("%d", &n);
    if ( n <0 || n >1000) {
        printf("Nhap lai");
        return 0;
    }

    int arr[n];
    printf("Nhap phan tu:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n -i-1; j++) {
            if (arr[i] > arr[j +1]) {
                int temp = arr[i];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep la:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Do phuc tap thoi gian cua bubbleSort la:0 ( n^2)");

    return 0;
}