#include <stdio.h>

int main(void) {
    int n;
    printf("Nhap so luong phan tu:");

    scanf("%d", &n);
    if (n < 0 || n>1000) {
        printf("Nhap khong hop le");
        return 1;
    }


    int arr[n];
    printf("Nhap phan tu :");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        scanf("%d", &arr[i]);
    }

    // insertion sort
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        int j = i -1;

        while (j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    printf("Mang sau khi sap xep:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Do phuc tap thoi gian la 0(n)");


    return 0;
}