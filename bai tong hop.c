#include <stdio.h>

int main() {
    int nam_sinh;
    int tuoi; 
    float diem_tb;

    printf("Nhap nam sinh: ");
    scanf("%d", &nam_sinh);

    if (nam_sinh <= 1900 || nam_sinh > 2025) {
        printf("Nam sinh khong hop le \n");
        return 0;
    }

    printf("Nhap diem trung binh: ");
    scanf("%f", &diem_tb);

    tuoi = 2025 - nam_sinh;

    printf("\nThong tin sinh vien: \n");
    printf("Nam sinh: %d \n", nam_sinh);
    printf("Tuoi: %d\n", tuoi);

    if (diem_tb < 5.0)
        printf("Hoc luc: Yeu \n");
    else if (diem_tb < 6.5)
        printf("Hoc luc: Trung binh \n");
    else if (diem_tb < 8.0)
        printf("Hoc luc: Kha \n");
    else
        printf("Hoc luc: Gioi \n");

    return 0;
}
