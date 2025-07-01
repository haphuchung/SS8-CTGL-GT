#include <stdio.h>

int main() {
    int arr[100];
    int value;
    int n;
    int temp;
    printf("Moi ban nhap so gia tri trong mang:");
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        printf("Moi ban nhap gia tri vao mang: ");
        scanf("%d",&arr[i]);
    }
    printf("Moi ban nhap gia tri can tim:");
    scanf("%d",&value);
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int left=0;
    int right=n-1;
    int found=-1;
    while(left<=right) {
        int mid=(left+right)/2;
        if (arr[mid]==value) {
            found=mid;
            break;
        }else if (arr[mid]>value) {
            right=mid-1;
        }
        else {
            left=mid+1;
        }
    }
    if (found!=-1) {
        printf("Phan tu co trong mang");
    } else {
        printf("Phan tu khong co trong mang");
    }
    return 0;
}