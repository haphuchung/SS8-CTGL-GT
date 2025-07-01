//
// Created by Admin on 7/1/2025.
//
#include <stdio.h>

int insertionSort(int arr[], int length) {
    for (int i = 1; i < length; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j --;
        }
        arr[j+1] = key;
    }
}

int main() {
    int n;
    printf("Moi ban nhap so phan tu vao mang: ");
    scanf("%d",&n);
    if (n<=0||n>1000) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    int arr[n];
    for(int i=0;i<n;i++) {
        printf("Nhap phan tu vao mang: ");
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    return 0;
}