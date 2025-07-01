#include <stdio.h>

// Hàm tìm kiếm nhị phân
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid; // Tìm thấy, trả về chỉ số
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Không tìm thấy
}

int main() {
    int n;

    // Nhập số lượng phần tử mảng
    do {
        printf("Nhap so luong phan tu n (0 < n < 1000): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 1000);

    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhap %d phan tu da sap xep tang dan:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Nhập giá trị cần tìm
    int search;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &search);

    // Gọi hàm tìm kiếm nhị phân
    int result = binarySearch(arr, n, search);

    if (result != -1) {
        printf("Phan tu %d nam o vi tri thu %d\n", search, result + 1); // Đếm từ 1
    } else {
        pri
