#include <stdio.h>

int main() {
    int n;
    // Nhap so luong phan tu cua mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    // Khai báo mang voi n phan tu
    int arr[n];
    // Nhap các phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);    
    }
    // Cac phan tu cua mang n bieu dien duoi dang duong thang
    
    
    // Khoi tao giá tri lon nhat và nho nhat ban dau
    int max = arr[0];
    int min = arr[0];
    // Duyet qua mang de tìm giá tri lon nhat và nho nhat
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    // In ra ket qua
    printf("Gia tri lon nhat trong mang la: %d\n", max);
    printf("Gia tri nho nhat trong mang la: %d\n", min);
    // Dao nguoc mang ban dau 
    
}
    
