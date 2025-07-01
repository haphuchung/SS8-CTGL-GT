#include <stdio.h>

void mergeSort(int arr[], int l, int r) {
    if (l <r) {
        int mid =(l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        //Tien hanh tron
        int n1=mid -l+1;
        int n2=r - mid;
        int left[n1],right[n2];
        for(int i=0;i<n1;i++) {
            left[i]=arr[l+i];
        }
        for(int i=0;i<n2;i++) {
            right[i]=arr[mid+1+i];
        }
        int i=0, j=0,k=l;
        while(i<n1 && j<n2) {
            if(left[i]<=right[j]) {
                arr[k]=left[i];
                k++;
                i++;
            }else {
                arr[k]=right[j];
                k++;
                j++;
            }
        }
        while(i<n1) {
            arr[k]=left[i];
            k++;
            i++;
        }
        while(j<n2) {
            arr[k]=right[j];
            k++;
            j++;
        }
    }
}
int main() {
    int n;
    printf("Moi ban nhap phan tu vao trong mang: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        printf("Moi ban nhap phan tu vao mang");
        scanf("%d",&arr[i]);
    }
    mergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}