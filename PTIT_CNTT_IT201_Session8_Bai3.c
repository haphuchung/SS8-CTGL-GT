#include <stdio.h>

void bubbleSort(int arr[], int n) {
    // Thuật toán sắp xếp nổi bọt
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0; // Biến kiểm tra nếu đã sắp xếp
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán đổi
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // Nếu không hoán đổi, mảng đã sắp xếp
        if (swapped == 0)
            break;
    }
}

int main() {
    int n;

    printf("Nhap so luong phan tu (0 < n < 1000): ");
    scanf("%d", &n);

    // Kiểm tra tính hợp lệ của n
    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 0;
    }

    int arr[n];

    // Nhập phần tử của mảng
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Gọi hàm sắp xếp nổi bọt
    bubbleSort(arr, n);

    // In mảng đã sắp xếp
    printf("Mang sau khi sap xep: [ ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf(" ]\n");

    return 0;
}
