#include <stdio.h>

int main() {
    char str[100];
    FILE *file = fopen("bt01.txt", "r");
    if (fgets(str, sizeof(str), file) != NULL) {
        printf("Dong dau tien trong file la: %s\n", str);
    } else {
        printf("Khong the doc dong dau tien hoac file trong.\n");
    }
    fclose(file);
    return 0;
}

