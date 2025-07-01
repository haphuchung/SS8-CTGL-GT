//
// Created by Admin on 7/1/2025.
//
#include <stdio.h>
void selection_sort(int arr[],int n) {
    for (int i = 0; i < n; i++) {
        int minIndex=i;
        for (int j = i+1; j < n; j++) {
            if (arr[j]<arr[minIndex]) {
                minIndex=j;
            }
        }
        if (minIndex!=i) {
            int temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n<=0||n>=1000) {
        printf("Invalid Input");
        return 1;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    selection_sort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}