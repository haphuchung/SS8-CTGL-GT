#include <stdio.h>

int main() {
    int n;

    // Nhập số lượng phần tử mảng
    do {
        printf("Nhap so luong phan tu n (0 < n < 1000): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 1000);

    int arr[n];

    // Nhập các phần tử trong mảng
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Nhập giá trị cần tìm kiếm
    int search;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &search);

    // Tìm kiếm tuyến tính
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Gia tri %d nam o vi tri thu %d\n", search, i + 1); // vị trí bắt đầu từ 1
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong ton tai phan tu %d trong mang.\n", search);
    }

    return 0;
}
