#include <stdio.h>

int main() {
    int soDong;
    char dong[100];
    printf("Nhap so dong: ");
    scanf("%d", &soDong);
    getchar(); 
    FILE *file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi.\n");
    }
    for (int i = 0; i < soDong; i++) {
        printf("Nhap noi dung dong %d: ", i);
        fgets(dong, sizeof(dong), stdin);
        fprintf(file, "%s", dong);
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    printf("Noi dung trong file bt05.txt:\n");
    while (fgets(dong, sizeof(dong), file) != NULL) {
        printf("%s", dong);
    }
    fclose(file);
    return 0;
}

