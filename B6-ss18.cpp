#include <stdio.h>
#include <string.h>

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
    int currentSize = 5;

    if (currentSize < 50) {
        struct SinhVien newSinhVien;
        newSinhVien.id = currentSize + 1;
        printf("Nhap thong tin sinh vien moi:\n");

        printf("Nhap ten: ");
        getchar(); 
        fgets(newSinhVien.name, sizeof(newSinhVien.name), stdin);
        newSinhVien.name[strcspn(newSinhVien.name, "\n")] = '\0'; 

        printf("Nhap tuoi: ");
        scanf("%d", &newSinhVien.age);

        getchar(); 
        printf("Nhap so dien thoai: ");
        fgets(newSinhVien.phoneNumber, sizeof(newSinhVien.phoneNumber), stdin);
        newSinhVien.phoneNumber[strcspn(newSinhVien.phoneNumber, "\n")] = '\0'; 
        sinhVien[currentSize] = newSinhVien;
        currentSize++;

        printf("Them sinh vien thanh cong!\n");
    } else {
        printf("Khong the them sinh vien moi. MANG DAY!\n");
    }

    printf("\nThong tin tat ca sinh vien:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("ID: %d\n", sinhVien[i].id);
        printf("Ten: %s\n", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s\n\n", sinhVien[i].phoneNumber);
    }

    return 0;
}

