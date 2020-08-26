#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    FILE *fp = fopen("C:\\Users\\wk\\Desktop\\1.txt", "r");
    char a[100] = "\0";
    int i = 0;
    while (!feof(fp)) {
        fscanf(fp, "%c", &a[i]);
        printf("%c",a[i]);
        i++;
    }
    fclose(fp);
    return 0;
}
