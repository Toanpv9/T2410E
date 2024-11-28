#include <stdio.h>

// Ham hoan doi hai so
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Ham sap xep mang 1 chieu theo thu tu tang dan
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
    int m, n;

    // Nhap so hang va so cot
    printf("Nhap so hang cua mang: ");
    scanf("%d", &m);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &n);

    // Khoi tao mang 2 chieu
    int arr[m][n];

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Chuyen mang 2 chieu thanh mang 1 chieu
    int size = m * n;
    int temp[size];
    int index = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            temp[index++] = arr[i][j];
        }
    }

    // Sap xep mang 1 chieu theo thu tu tang dan
    sortArray(temp, size);

    // Chuyen lai mang 1 chieu thanh mang 2 chieu
    index = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = temp[index++];
        }
    }

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep tang dan la:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

