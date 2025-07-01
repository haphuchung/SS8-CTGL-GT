#include <stdio.h>

// Hàm trộn 2 mảng con đã sắp xếp
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // Số phần tử mảng trái
    int n2 = right - mid;     // Số phần tử mảng phải

    // Tạo mảng tạm
    int L[n1], R[n2];

    // Sao chép dữ liệu vào mảng tạm
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Trộn 2 mảng lại
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    // Sao chép phần còn lại (nếu có)
    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

// Hàm Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        // Gọi đệ quy sắp xếp 2 nửa
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Trộn 2 nửa đã sắp xếp
        merge(arr, left, mid, right);
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

    // Nhập phần tử
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Gọi hàm sắp xếp trộn
    mergeSort(arr, 0, n - 1);

    // In mảng đã sắp xếp
    printf("Mang sau khi sap xep: [ ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf(" ]\n");

    return 0;
}
