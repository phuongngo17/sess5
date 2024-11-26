#include <stdio.h>

int main() {
    float a, b; 
    int choice; 

    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);

    do {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Tong cua %.2f va %.2f la: %.2f\n", a, b, a + b);
                break;
            case 2:
                printf("Hieu cua %.2f va %.2f la: %.2f\n", a, b, a - b);
                break;
            case 3:
                printf("Tich cua %.2f va %.2f la: %.2f\n", a, b, a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Thuong cua %.2f va %.2f la: %.2f\n", a, b, a / b);
                } else {
                    printf("Khong the chia cho 0 \n");
                }
                break;
            case 5:
                printf("Thoot chuong trinh \n");
                break;
            default:
                printf("Lua chon khong hop le \n");
        }
    } while (choice != 5);

    return 0;
}

