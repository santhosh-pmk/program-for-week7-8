#include <stdio.h>
int main() {
    FILE *fpr, *fpw;
    char ch;
    fpr = fopen("file1.txt", "r");
    fpw = fopen("file2.txt", "a");
    while ((ch = fgetc(fpr)) != EOF) {
        fputc(ch, fpw);
    }
    fclose(fpr);
    fclose(fpw);
    return 0;
}
