#include <stdio.h>

// Hàm đổi chỗ hai phần tử
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm phân hoạch mảng (partition)
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // chọn phần tử cuối làm pivot
    int i = low - 1; // chỉ số của phần tử nhỏ hơn pivot

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1; // trả về chỉ số của pivot sau khi sắp xếp
}

// Hàm Quick Sort đệ quy
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // chia mảng thành 2 phần và sắp xếp từng phần
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;

    printf("Nhap so luong phan tu (0 < n < 1000): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 0;
    }

    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Gọi hàm Quick Sort
    quickSort(arr, 0, n - 1);

    // In mảng đã sắp xếp
    printf("Mang sau khi sap xep: [ ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf(" ]\n");

    return 0;
}
