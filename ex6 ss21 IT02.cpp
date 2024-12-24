#include <stdio.h>

int main() {
    FILE *File01 = fopen("bt01.txt", "r");
    if (File01 == NULL) {
        printf("Khong the mo file bt01.txt de doc.\n");
    }
    FILE *File06 = fopen("bt06.txt", "w");
    if (File06 == NULL) {
        printf("Khong the mo file bt06.txt de ghi.\n");
        fclose(File01); 
    }
    char c;
    while ((c = fgetc(File01)) != EOF) {
        fputc(c, File06);
    }
    fclose(File01);
    fclose(File06);
    printf("Da sao chep noi dung tu file bt01.txt sang file bt06.txt\n");
    return 0;
}

