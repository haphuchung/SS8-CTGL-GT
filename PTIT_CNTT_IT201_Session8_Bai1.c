#include <stdio.h>
int search(int arr[],int n,int target) {
    for(int i=0;i<n;i++) {
        if(arr[i]==target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Moi ban nhap so luong phan tu vao mang:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        printf("Nhap phan tu thu %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Nhap phan tu ban muon tim: ");
    scanf("%d",&target);
    int result=search(arr,n,target);
    if(result==-1) {
        printf("Khong thay phan tu trong mang");
    }else {
        printf("Da tim thay phan tu o vi tri %d",result+1);
    }
    return 0;

}