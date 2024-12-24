#include <stdio.h>

int main() {
    char str[100];
    printf("Nhap mot chuoi bat ky de ghi them vao file: ");
    fgets(str, sizeof(str), stdin);
    FILE *file = fopen("bt01.txt", "a");
    fprintf(file, "%s", str);
    fclose(file);
    printf("Da ghi them chuoi vao file bt01.txt\n");
    return 0;
}

