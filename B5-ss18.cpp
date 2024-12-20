#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhVien[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Tran Thi B", 22, "0987654321"},
        {3, "Le Thi C", 21, "0112233445"},
        {4, "Pham Minh D", 23, "0123987654"},
        {5, "Hoang Thi E", 24, "0978123456"}
    };

    int idToFind;
    int found = 0;
    int i;

    printf("Nhap id cua sinh vien can sua: ");
    scanf("%d", &idToFind);

    for (i = 0; i < 5; i++) {
        if (sinhVien[i].id == idToFind) {
            found = 1;  
            printf("Sinh vien hien tai:\n");
            printf("ID: %d\n", sinhVien[i].id);
            printf("Ten: %s", sinhVien[i].name);
            printf("Tuoi: %d\n", sinhVien[i].age);
            printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
            getchar();  
            printf("Nhap ten moi: ");
            fgets(sinhVien[i].name, sizeof(sinhVien[i].name), stdin);
            printf("Nhap tuoi moi: ");
            scanf("%d", &sinhVien[i].age);
            printf("Thong tin sinh vien da duoc cap nhat.\n");
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien voi id %d.\n", idToFind);
    }

    printf("\nThong tin toan bo sinh vien:\n");
    for (i = 0; i < 5; i++) {
        printf("ID: %d\n", sinhVien[i].id);
        printf("Ten: %s", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s\n", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

