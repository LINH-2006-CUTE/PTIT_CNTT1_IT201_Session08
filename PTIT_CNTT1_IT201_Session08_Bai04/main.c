#include <stdio.h>

int main(void) {
    int n;
    printf("Nhap so luong phan tu mang:");
    scanf("%d", &n);
    if ( n < 0 || n >1000) {
        printf("Nhap khong hop le");
        return 0;
    }

    int arr[n];
    printf("Nhap phan tu:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        scanf("%d", &arr[i]);
    }
// selection sort
    for (int i = 0; i < n-1; i++) {
        int index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[index] > arr[j]) {
                index = j;
            }
        }

        if ( index != i) {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }

    printf("mang sau khi sap xep:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Do phuc tap thoi gian la 0 (n^2)");

    return 0;
}