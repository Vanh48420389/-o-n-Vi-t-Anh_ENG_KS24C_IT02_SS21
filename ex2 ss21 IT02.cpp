#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "r");
    char kiTuDauTien = fgetc(file);
    if (kiTuDauTien == EOF) {
        printf("File trong, khong co ky tu nao\n");
    } else {
        printf("Ky tu dau tien trong file: %c\n", kiTuDauTien);
    }
    fclose(file);
    return 0;
}

