#include <stdio.h>
void array ( int arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("arr[%d]",i);
        scanf("%d", &arr[i]);
    }
}

int linear(int arr[], int n,int target) {
    for (int i=0; i < n; i++) {
        if ( arr[i] ==target ) {
            return i;
        }
    }
    return -1;
}
int main(void) {
    int n;
    int target;
    printf("Nhap so luong phan tu:");
    scanf("%d", &n);
    if ( n < 0 || n >1000) {
        printf("Nhap k hop le");
            return 1;
    }

    int arr[n];

    printf("Nhap phan tu:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Nhap gia tri can tim kiem:");
    scanf("%d", &target);

    int result = linear(arr, n, target);
    if (result != -1) {
        printf(" phan tu %d o vi tri %d",target, result);
    } else {
        printf("Gia tri %d khong tim thay",target);
    }
    printf("\n");
    printf("Do phuc tap thoi gian la: O(n)");


    return 0;
}