#include <stdio.h>

int main() {
    char str[100];
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    FILE *file = fopen("bt01.txt", "w");
    fprintf(file, "%s", str);
    fclose(file);
    printf("Da ghi chuoi vao file bt01.txt\n");
    return 0;
}

 
