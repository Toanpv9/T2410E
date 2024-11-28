#include <stdio.h>

void sortDescending(int arr[], int n) {
    // Sap xep mang theo theo t? gi?m d?n
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // Hoán ??i các ph?n t? n?u arr[i] < arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, a, count = 0;

    // Nhap so luong phan t cua mang
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sap xep mang theo giam dan
    sortDescending(arr, n);
    printf("Mang sau khi sap xep giam dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Nhap so a can kiem tra
    printf("Nhap so a can kiem tra: ");
    scanf("%d", &a);

    // Kiem tra so lan xuat hien cua a trong mang
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            count++;
        }
    }
    printf("S? %d xu?t hi?n %d l?n trong m?ng.\n", a, count);

}

