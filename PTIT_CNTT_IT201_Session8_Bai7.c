//
// Created by Admin on 6/30/2025.
//
#include<stdio.h>

void swap(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
int divide(int arr[], int low, int high) {
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++) {
        if(arr[j]<=pivot) {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void quickSort(int arr[], int low, int high) {
    if(low<high) {
        int pivot=divide(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);

    }
}
int main() {
    int n;
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        printf("Moi ban nhap  phan tu vao trong mang: ");
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}