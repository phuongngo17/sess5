#include <stdio.h>

int main() {
    int n, tong = 0;

    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("So nhap vao phai la so nguyen duong \n");
        }
    } while (n <= 0);

    for (int i = 1; i <= n; i++) {
        tong += i;
    }

    printf("Tong cac so tu 1 den %d la: %d\n", n, tong);

    return 0;
}

