#include <stdio.h>
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {

            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
        return -1;
}

int binarySearch(int arr[], int target, int left, int right) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;

        } else if (arr[mid] < target) {

            left = mid + 1;
        }else {
            right = mid - 1;
        }

    }
    return -1;
}
int main(void) {

    int n;
    printf("nhap so luong phan tu:");
    scanf("%d", &n);

    if ( n <0 || n > 1000) {
        printf("Nhap khong hop le");
        return 0;
    }

    int arr[n];
    printf("Nhap phan tu:");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Nhap gia tr ptu can tim:");
    scanf("%d", &target);

    int linearValue= linearSearch(arr, n, target);
    if (linearValue != -1) {
        printf("thay o vi tri %d", linearValue);
    } else {
        printf("Khong timm thay");

    }
    insertionSort(arr, n);
    printf("mang sau khi sap xep theo insertion sort");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int binaryValue= binarySearch(arr, target, 0, n - 1);
    if (binaryValue != -1) {
        printf("thay phan tu o vi tri %d", binaryValue);
    } else {
        printf("Khong timm thay");
    }


    return 0;
}
