#include <stdio.h>
int main() {
    FILE *fpr, *fpw;
    char ch;
    fpr = fopen("file1.txt", "r");
    fpw = fopen("file2.txt", "w");
    while ((ch = getc(fpr)) != EOF) {
        putc(ch, fpw);
    }
    fclose(fpr);
    fclose(fpw);
    return 0;
}
